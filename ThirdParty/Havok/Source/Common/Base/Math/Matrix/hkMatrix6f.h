/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef HK_MATH_MATRIX6f_H
#define HK_MATH_MATRIX6f_H

#ifndef HK_MATH_MATH_H
#	error Please include Common/Base/hkBase.h instead of this file.
#endif

#define FOR_BOTH_SUB_VECTORS(code) m_lin.code; m_ang.code;

class hkMatrix6f;

class hkVector8f
{
	public:
		HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR( HK_MEMORY_CLASS_MATH, hkVector8f );

		hkVector4f m_lin;
		hkVector4f m_ang;
		

	public:
			/// Sets all the hkVector4f's components to the same value x.
		HK_FORCE_INLINE void setAll(hkFloat32 x) { FOR_BOTH_SUB_VECTORS( setAll(x) ); } 

			/// Sets the xyz hkVector4f's components to the same value x. The w component will be destroyed.
		HK_FORCE_INLINE void setAll6(hkFloat32 x) { FOR_BOTH_SUB_VECTORS( setXYZ(x) ); }

			/// Sets all values to zero.
		HK_FORCE_INLINE void setZero8() { FOR_BOTH_SUB_VECTORS( setZero() ); }

			/// Modifies this hkVector4f by adding the value of a to it. All four components are modified.
		HK_FORCE_INLINE void add8(const hkVector8f& a) 
		{
			m_lin.add( a.m_lin );
			m_ang.add( a.m_ang );
		}

			/// Modifies this hkVector4f by adding the value of a to it. Three components are modified, the w component is unspecified.
		HK_FORCE_INLINE void add6clobberW(const hkVector8f& a)
		{
			m_lin.addXYZ( a.m_lin );
			m_ang.addXYZ( a.m_ang );
		}

			/// Sets this hkVector4f to be the difference of a and b. All four components are modified.
		HK_FORCE_INLINE void setSub8(const hkVector8f& a, const hkVector8f& b)
		{
			m_lin.setSub( a.m_lin, b.m_lin );
			m_ang.setSub( a.m_ang, b.m_ang );
		}

			/// Modifies this hkVector4f by setting it to be the product of itself with the real value a. All four components are multiplied by a.
		HK_FORCE_INLINE void mul8(hkSimdFloat32Parameter a) { FOR_BOTH_SUB_VECTORS( mul(a) ); }


			/// Modifies this hkVector4f by setting x,y,z to -x,-y,-z and leaving w untouched
		HK_FORCE_INLINE void setNeg8() { m_lin.setNeg<4>(m_lin); m_ang.setNeg<4>(m_ang); }

			/// Modifies this hkVector4f by adding the product of real r and vector a to it. All four components are modified.
		HK_FORCE_INLINE void addMul8(hkSimdFloat32Parameter r, const hkVector8f& a)
		{
			m_lin.addMul( r, a.m_lin );
			m_ang.addMul( r, a.m_ang );
		}

			/// Sets this object to be the product of the matrix a and the vector b.
			/// The w component of the result is undefined. (this = a * b)
		HK_FORCE_INLINE void _setMul6(const hkMatrix6f& a, const hkVector8f& b );


};

class hkMatrix6f
{
	public:

		HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_MATH, hkMatrix6f);

			/// Empty constructor. The elements of the matrix are not initialized.
		HK_FORCE_INLINE hkMatrix6f() { }

		/// Copies all elements from a into this matrix.
		HK_FORCE_INLINE void operator= ( const hkMatrix6f& a )
		{
			m_m[0][0] = a.m_m[0][0];
			m_m[0][1] = a.m_m[0][1];
			m_m[1][0] = a.m_m[1][0];
			m_m[1][1] = a.m_m[1][1];
		}

		//	/// Gets read-write access to the specified element.
		//HK_FORCE_INLINE hkFloat32& operator() (int row, int col)
		//{
		//	HK_MATH_ASSERT(0xad67899d, row >= 0 && row < 6 && col >= 0 && col < 6, "Row and col of hkMatrix6f must be in the [0,5] range.");
		//	return m_m[row/3][col/3](row%3,col%3);
		//}

		//	/// Gets read-only access to the specified elements.
		//HK_FORCE_INLINE const hkFloat32& operator() (int row, int col) const
		//{
		//	HK_MATH_ASSERT(0xad67899d, row >= 0 && row < 6 && col >= 0 && col < 6, "Row and col of hkMatrix6f must be in the [0,5] range.");
		//	return m_m[row/3][col/3](row%3,col%3);
		//}

			/// Zeroes all values in this matrix.
		HK_FORCE_INLINE void setZero()
		{
			m_m[0][0].setZero();
			m_m[0][1].setZero();
			m_m[1][0].setZero();
			m_m[1][1].setZero();
		}


			/// Sets the diagonal values to 1, zeroes the non-diagonal values.
		HK_FORCE_INLINE void setIdentity()
		{
			m_m[0][0].setIdentity();
			m_m[0][1].setZero();
			m_m[1][0].setZero();
			m_m[1][1].setIdentity();
		}

			/// set to the transpose of another matrix
		HK_FORCE_INLINE void setTranspose( const hkMatrix6f& s )
		{
			m_m[0][0].setTranspose( s.m_m[0][0] );
			m_m[0][1].setTranspose( s.m_m[1][0] );
			m_m[1][0].setTranspose( s.m_m[0][1] );
			m_m[1][1].setTranspose( s.m_m[1][1] );
		}
		
			/// Set this matrix to be the product of a and b. (this = a * b)
		HK_FORCE_INLINE void setMul( const hkMatrix6f& a, const hkMatrix6f& b )
		{
			hkMatrix3f tmp;
			// optimize ?
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					tmp      ._setMul( a.m_m[i][0], b.m_m[0][j] );
					m_m[i][j]._setMul( a.m_m[i][1], b.m_m[1][j] );
					m_m[i][j]._add( tmp );
				}
			}
		}


			/// Modifies this matrix by adding the matrix a to it. (this += a)
		HK_FORCE_INLINE void add( const hkMatrix6f& a )
		{
			m_m[0][0]._add( a.m_m[0][0] );
			m_m[0][1]._add( a.m_m[0][1] );
			m_m[1][0]._add( a.m_m[1][0] );
			m_m[1][1]._add( a.m_m[1][1] );
		}

			/// Modifies this matrix by subtracting the matrix a from it. (this += a)
		HK_FORCE_INLINE void sub( const hkMatrix6f& a )
		{
			m_m[0][0]._sub( a.m_m[0][0] );
			m_m[0][1]._sub( a.m_m[0][1] );
			m_m[1][0]._sub( a.m_m[1][0] );
			m_m[1][1]._sub( a.m_m[1][1] );
		}

			/// Modifies this matrix by post multiplying it by the matrix a. (this = this*a)
		HK_FORCE_INLINE void mul( const hkMatrix6f& a)
		{
			hkMatrix6f temp;
			temp.setMul( *this, a );
			*this = temp;
		}

			/// Modifies this matrix by multiplying by scale (this *= scale)
		HK_FORCE_INLINE void mul( hkSimdFloat32Parameter scale )
		{
			m_m[0][0]._setMul(scale, m_m[0][0]);
			m_m[0][1]._setMul(scale, m_m[0][1]);
			m_m[1][0]._setMul(scale, m_m[1][0]);
			m_m[1][1]._setMul(scale, m_m[1][1]);
		}

			/// Inverts any invertible matrix; asserts upon failure; currently only works for symmetric matrices
		void setInvert( const hkMatrix6f& in );

	public:

#ifdef HK_PLATFORM_LRB
		HK_ALIGN64( hkMatrix3f m_m[2][2] );	// [row][column]
#else
		HK_ALIGN_FLOAT( hkMatrix3f m_m[2][2] );	// [row][column]
#endif

};


void hkVector8f::_setMul6(const hkMatrix6f& a, const hkVector8f& b )
{
	hkVector4f tmp[2];

	tmp[0] ._setRotatedDir( a.m_m[0][0], b.m_lin );
	m_lin._setRotatedDir( a.m_m[0][1], b.m_ang );

	tmp[1] ._setRotatedDir( a.m_m[1][0], b.m_lin );
	m_ang._setRotatedDir( a.m_m[1][1], b.m_ang );

	m_lin.add(tmp[0]);
	m_ang.add(tmp[1]);
}

extern "C"
{
	void HK_CALL hkMatrix6fAdd(hkMatrix6f& aOut, const hkMatrix6f& b);
	void HK_CALL hkMatrix6fSub(hkMatrix6f& aOut, const hkMatrix6f& b);
	void HK_CALL hkMatrix6fSetMul(hkMatrix6f& out, const hkMatrix6f&a, const hkMatrix6f&b );
	void HK_CALL hkMatrix6fSetMulV(hkVector8f& out, const hkMatrix6f&a, const hkVector8f& b);
	void HK_CALL hkMatrix6fSetTranspose(hkMatrix6f& out, const hkMatrix6f&in );
	void HK_CALL hkMatrix6fSetInvert(hkMatrix6f& out, const hkMatrix6f& in );
}



#endif // HK_MATH_MATRIX6f_H

/*
 * Havok SDK - Base file, BUILD(#20130912)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */
