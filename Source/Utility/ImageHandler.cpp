#include "ImageHandler.h"
#include <QColor>
#include <QVariant>
#include <QIODevice>
#include <QDataStream>

// FREEIMAGE IO PROCS /////////////////////////////////////////////////

// NOTE: this is unclear from FreeImage manual, but interface of FreeImageIO
// is modeled after fread, fwrite, fseek, ftell.

static  unsigned __stdcall
	ReadProc(void *buffer, unsigned size, unsigned count, fi_handle handle)
{
	return static_cast<QIODevice*>(handle)->read((char*)buffer,size*count);
}


static unsigned __stdcall
	WriteProc(void *buffer, unsigned size, unsigned count, fi_handle handle)
{
	QIODevice *quid = static_cast<QIODevice*>(handle);
	return quid->write((char*)buffer,size*count);
}


static  int __stdcall
	SeekProc(fi_handle handle, long offset, int origin)
{
	QIODevice *quid = static_cast<QIODevice*>(handle);

	switch (origin)
	{
	default:
	case SEEK_SET:
		return int(!quid->seek(offset));
	case SEEK_CUR:
		return int(!quid->seek(quid->pos()+offset));
	case SEEK_END:
		if (!quid->isSequential())
		{
			quint64 len = quid->bytesAvailable();
			return int(!quid->seek(len+offset));
		}
		break;
	}
	return (-1);
}

static long __stdcall
	TellProc(fi_handle handle)
{
	return static_cast<QIODevice*>(handle)->pos();
}

// RAII WRAPPER FOR DIBS ////////////////////////////////////////////////
class ScopedDib
{
private:
	FIBITMAP *m_dib;

	ScopedDib(const ScopedDib&);
	ScopedDib& operator=(const ScopedDib&);
public:
	explicit ScopedDib(FIBITMAP *dib) 
		: m_dib(dib)
	{
	}
	~ScopedDib()
	{
		if (m_dib)
		{
			FreeImage_Unload(m_dib);
			m_dib = 0;
		}
	}
	FIBITMAP *get() const
	{
		return m_dib;
	}

	void reset(FIBITMAP *p = 0)
	{
		Q_ASSERT(p == 0 || p != m_dib);
		ScopedDib(p).swap(*this);
	}

	void swap(ScopedDib &rhs)
	{
		FIBITMAP *temp = rhs.m_dib;
		rhs.m_dib = m_dib;
		m_dib = temp;
	}

	// implicit conversion to bool a-la boost
	typedef FIBITMAP *ScopedDib::*uncpecified_bool_type; 
	operator uncpecified_bool_type() const 
	{
		return (m_dib == NULL)? NULL : &ScopedDib::m_dib; 
	}
	bool operator!() const
	{
		return m_dib == NULL;
	}

};

// ImageHandler STATIC MEMBERS ////////////////////////////////////

QVariant ImageHandler::option(ImageOption option) const
{
	return QVariant();
}
void ImageHandler::setOption(ImageOption option, const QVariant &value)
{
	Q_UNUSED(option);
	Q_UNUSED(value);
}

bool ImageHandler::supportsOption(ImageOption option) const
{
	Q_UNUSED(option);
	return false;
}


FreeImageIO &ImageHandler::fiio()
{
	static FreeImageIO io = {ReadProc, WriteProc, SeekProc, TellProc};
	return io;
}


QImage& ImageHandler::QImageNone()
{
	static QImage none(0,0,QImage::Format_Invalid);
	return none;
}

bool ImageHandler::isQImageNone(const QImage& img)
{
	return img == QImageNone();
}

QVector<QRgb>& ImageHandler::PaletteNone()
{
	static QVector<QRgb> none = QVector<QRgb>();
	return none;
}

bool ImageHandler::isPaletteNone(const QVector<QRgb>& pal)
{
	return pal == PaletteNone();
}

QImage ImageHandler::FIBitmapToQImage(FIBITMAP *dib)
{
	if (!dib || FreeImage_GetImageType(dib) != FIT_BITMAP)
		return QImageNone();
	int width  = FreeImage_GetWidth(dib);
	int height = FreeImage_GetHeight(dib);

	switch (FreeImage_GetBPP(dib))
	{
	case 1:
		{
			QImage result(width,height,QImage::Format_Mono);
			FreeImage_ConvertToRawBits(
				result.scanLine(0), dib, result.bytesPerLine(), 1, 0, 0, 0, true
				);
			return result;
		}
	case 4: /* NOTE: QImage do not support 4-bit, convert it to 8-bit  */
		{        QImage result(width,height,QImage::Format_Indexed8);
		FreeImage_ConvertToRawBits(
			result.scanLine(0), dib, result.bytesPerLine(), 8, 0, 0, 0, true
			);
		return result;
		}
	case 8:
		{
			QImage result(width,height,QImage::Format_Indexed8);
			FreeImage_ConvertToRawBits(
				result.scanLine(0), dib, result.bytesPerLine(), 8, 0, 0, 0, true
				);
			return result;
		}
	case 16:
		if ((FreeImage_GetRedMask(dib)   == FI16_555_RED_MASK) &&
			(FreeImage_GetGreenMask(dib) == FI16_555_GREEN_MASK) &&
			(FreeImage_GetBlueMask(dib)  == FI16_555_BLUE_MASK))
		{
			QImage result(width,height,QImage::Format_RGB555);
			FreeImage_ConvertToRawBits(
				result.scanLine(0), dib, result.bytesPerLine(), 16,
				FI16_555_RED_MASK, FI16_555_GREEN_MASK, FI16_555_BLUE_MASK,
				true
				);
			return result;
		}
		else /* 565 */
		{
			QImage result(width,height,QImage::Format_RGB16);
			FreeImage_ConvertToRawBits(
				result.scanLine(0), dib, result.bytesPerLine(), 16,
				FI16_565_RED_MASK, FI16_565_GREEN_MASK, FI16_565_BLUE_MASK,
				true
				);
			return result;
		}
	case 24:
		{
			QImage result(width,height,QImage::Format_RGB32);
			FreeImage_ConvertToRawBits(
				result.scanLine(0), dib, result.bytesPerLine(), 32,
				FI_RGBA_RED_MASK, FI_RGBA_GREEN_MASK, FI_RGBA_BLUE_MASK,
				true
				);
			return result;
		}
	case 32:
		{
			QImage result(width,height,QImage::Format_ARGB32);
			FreeImage_ConvertToRawBits(
				result.scanLine(0), dib, result.bytesPerLine(), 32,
				FI_RGBA_RED_MASK, FI_RGBA_GREEN_MASK, FI_RGBA_BLUE_MASK,
				true
				);
			return result;
		}
	default:
		break;
	}
	return QImageNone();
}


QPixmap ImageHandler::FIBitmapToQPixmap( FIBITMAP *dib )
{
	QPixmap pix;

	pix.convertFromImage(FIBitmapToQImage(dib));

	return pix;
}

QVector<QRgb> ImageHandler::getPalette(FIBITMAP *dib)
{
	if (dib != NULL &&  FreeImage_GetBPP(dib) <= 8)
	{
		RGBQUAD *pal = FreeImage_GetPalette(dib);
		int nColors   = FreeImage_GetColorsUsed(dib);
		QVector<QRgb> result(nColors);
		for (int i = 0; i < nColors; ++i) // first pass
		{
			QColor c(pal[i].rgbRed,pal[i].rgbBlue,pal[i].rgbBlue, 0xFF);
			result[i] = c.rgba();
		}
		if (FreeImage_IsTransparent(dib)) // second pass
		{
			BYTE *transpTable = FreeImage_GetTransparencyTable(dib);
			int nTransp = FreeImage_GetTransparencyCount(dib);
			for (int i = 0; i  < nTransp; ++i)
			{
				QRgb c = result[i];
				result[i] = qRgba(qRed(c),qGreen(c),qBlue(c),transpTable[i]);
			}
		}
		return result;
	}
	return PaletteNone();
}

FREE_IMAGE_FORMAT ImageHandler::getFIF(QIODevice *device, 
	const QByteArray& format)
{
	FREE_IMAGE_FORMAT fif = 
		FreeImage_GetFileTypeFromHandle(&fiio(),(fi_handle)device);
	if (fif == FIF_UNKNOWN)
		fif = FreeImage_GetFIFFromFilename(format);
	return fif;
}


// ImageHandler MEMBERS ///////////////////////////////////////////
ImageHandler::ImageHandler()
{
}

ImageHandler::~ImageHandler()
{
}

bool ImageHandler::canRead() const
{
	FREE_IMAGE_FORMAT fif = getFIF(device(),format());
	return FreeImage_FIFSupportsReading(fif);
}

bool ImageHandler::read(QImage *image)
{
	FREE_IMAGE_FORMAT fif = getFIF(device(),format());

	if (!FreeImage_FIFSupportsReading(fif))
		return false;

	ScopedDib dib(0);

	// HACK: FreeImage(at least ver. 3.13.1) can not load FIF_PSD 
	// from stream. We load it from memory.
	if (fif == FIF_PSD)
	{
		QByteArray mem = device()->readAll();
		if (mem.isEmpty())
			return false;
		FIMEMORY *fmem = FreeImage_OpenMemory((BYTE*)mem.data(), mem.size());
		if (!fmem)
			return false;
		dib.reset(FreeImage_LoadFromMemory(FIF_PSD,fmem));
		FreeImage_CloseMemory(fmem);
	}
	else
	{
		dib.reset(FreeImage_LoadFromHandle(fif, &fiio(),(fi_handle)device()));
	}

	if (!dib)
		return false;

	QImage result = FIBitmapToQImage(dib.get());

	if (isQImageNone(result))
		return false;

	// set resolution
	result.setDotsPerMeterX(FreeImage_GetDotsPerMeterX(dib.get()));
	result.setDotsPerMeterY(FreeImage_GetDotsPerMeterY(dib.get()));

	// set palette
	if (FreeImage_GetPalette(dib.get()) != NULL)
	{
		QVector<QRgb> pal = getPalette(dib.get());
		if (!isPaletteNone(pal))
			result.setColorTable(pal);
	}

	*image = result;
	return true;
}

QByteArray ImageHandler::name() const
{
	return "freeimage";
}
