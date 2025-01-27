/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics/Constraint/hkpConstraint.h>
#include <Physics/Constraint/Motor/Callback/hkpCallbackConstraintMotor.h>


// Construct a motor with the given properties.
hkpCallbackConstraintMotor::hkpCallbackConstraintMotor( CallbackType callbackType, hkpCallbackConstraintMotor::CalcMotorDataCallbackFunc callbackFunc )
: hkpLimitedForceConstraintMotor(), m_callbackType(callbackType)
{
	m_type = TYPE_CALLBACK;
	setMaxForce(hkReal(1e6f));
	m_callbackFunc = callbackFunc;
}

hkpConstraintMotor* hkpCallbackConstraintMotor::clone() const
{
	hkpCallbackConstraintMotor* sdcm = new hkpCallbackConstraintMotor( *this );
	return sdcm;
}

HK_COMPILE_TIME_ASSERT( sizeof(hkpCallbackConstraintMotor) <= sizeof(hkpMaxSizeConstraintMotor) );

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
