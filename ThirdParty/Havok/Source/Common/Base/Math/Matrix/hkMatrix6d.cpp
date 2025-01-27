/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Common/Base/hkBase.h>
#include <Common/Base/Math/Matrix/hkMatrix6d.h>

void hkMatrix6dAdd(hkMatrix6d& aOut, const hkMatrix6d& b)
{
	aOut.add(b);
}

void hkMatrix6dSub(hkMatrix6d& aOut, const hkMatrix6d& b)
{
	aOut.sub(b);
}

void hkMatrix6dSetMul(hkMatrix6d& out, const hkMatrix6d&a, const hkMatrix6d&b)
{
	out.setMul(a,b);
}

void hkMatrix6dSetMulV(hkVector8d& out, const hkMatrix6d&a, const hkVector8d& b)
{
	out._setMul6(a,b);
}

void hkMatrix6dSetTranspose(hkMatrix6d& out, const hkMatrix6d&in)
{
	out.setTranspose(in);
}

void hkMatrix6dSetInvert(hkMatrix6d& out, const hkMatrix6d& in )
{
	out.setInvert(in);
}


void hkMatrix6d::setInvert( const hkMatrix6d& tmpIn )
{
	hkMatrix6d& out = *this;
	hkMatrix6d in = tmpIn;
	out.setIdentity();

	for (int row2 = 0; row2 < 2; row2++)
	{
		for (int row3 = 0; row3 < 3; row3++)
		{
			{
				// multiply column
				HK_ASSERT2(0xad7899dd, in.m_m[row2][row2](row3,row3) != 0, "Cannot inverse this matrix. Zero on the diagonal.");

				//hkFloat32 multiplier = 1.0f / in(row, row);
				hkSimdDouble64 multiplier; multiplier.setFromFloat( 1.0f / in.m_m[row2][row2](row3,row3) );

				in.m_m[0][row2].getColumn(row3).mul( multiplier );
				in.m_m[1][row2].getColumn(row3).mul( multiplier );

				out.m_m[0][row2].getColumn(row3).mul( multiplier );
				out.m_m[1][row2].getColumn(row3).mul( multiplier );
			}

			for (int col2 = 0; col2 < 2; col2++)
			{
				for (int col3 = 0; col3 < 3; col3++)
				{
					if (col2 != row2 || col3 != row3)
					{
						//hkFloat32 multiplier = - in(row, col);// / in(row, row);
						hkSimdDouble64 multiplier; multiplier.setFromFloat( - in.m_m[row2][col2](row3,col3) );

						// column operation on 'in'
						in.m_m[0][col2].getColumn(col3).addMul( multiplier, in.m_m[0][row2].getColumn(row3) );
						in.m_m[1][col2].getColumn(col3).addMul( multiplier, in.m_m[1][row2].getColumn(row3) );

						// column operation on 'out'
						out.m_m[0][col2].getColumn(col3).addMul( multiplier, out.m_m[0][row2].getColumn(row3) );
						out.m_m[1][col2].getColumn(col3).addMul( multiplier, out.m_m[1][row2].getColumn(row3) );

						// todo: don't need to copy row contents that are above the 'row' row in 'in' (they're zero)

					}
				}
			}
		}
	}
}

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
