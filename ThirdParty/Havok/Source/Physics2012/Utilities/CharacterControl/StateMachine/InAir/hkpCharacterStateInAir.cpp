/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Utilities/CharacterControl/StateMachine/hkpCharacterState.h>
#include <Physics2012/Utilities/CharacterControl/StateMachine/hkpCharacterContext.h>
#include <Physics2012/Utilities/CharacterControl/StateMachine/InAir/hkpCharacterStateInAir.h>

#include <Physics2012/Utilities/CharacterControl/StateMachine/Util/hkpCharacterMovementUtil.h>

#include <Physics2012/Dynamics/World/hkpWorld.h>

hkpCharacterStateInAir::hkpCharacterStateInAir()
{
	m_gain = 0.05f; 

	m_airSpeed = 10.0f;
	
	// maximal linear acceleration inAir state is set to 25% of max linear acceleration in onGround state
	m_maxLinearAcceleration = 50.0f;
}

/// Return the state type
hkpCharacterStateType hkpCharacterStateInAir::getType() const 
{
	return HK_CHARACTER_IN_AIR;
}

/// Process the user input - causes state transitions.
void hkpCharacterStateInAir::change(hkpCharacterContext& context, const hkpCharacterInput& input, hkpCharacterOutput& output)
{
	// Grab details about the surface I'm currently on
	if ( input.m_surfaceInfo.m_supportedState == hkpSurfaceInfo::SUPPORTED )
	{
		context.setState(HK_CHARACTER_ON_GROUND, input, output);
		return;
	}

	// Check if I should climb
	if (input.m_atLadder)
	{
		context.setState(HK_CHARACTER_CLIMBING, input, output);
		return;
	}
	
}

/// Process the user input - causes state actions.
void hkpCharacterStateInAir::update(hkpCharacterContext& context, const hkpCharacterInput& input, hkpCharacterOutput& output)
{
	//
	// Move character relative to the surface we're standing on
	//
	{
		hkpCharacterMovementUtil::hkpMovementUtilInput muInput;
		muInput.m_gain = m_gain;
		muInput.m_forward = input.m_forward;
		muInput.m_up = input.m_up;
		muInput.m_surfaceNormal = input.m_up;
		muInput.m_currentVelocity = input.m_velocity;
		muInput.m_desiredVelocity.set( input.m_inputUD * m_airSpeed, input.m_inputLR * m_airSpeed, 0); 
		muInput.m_maxVelocityDelta = m_maxLinearAcceleration*input.m_stepInfo.m_deltaTime;
		muInput.m_surfaceVelocity.setZero();

		hkpCharacterMovementUtil::calculateMovement(muInput, output.m_velocity);

		// Restore to original vertical component
		output.m_velocity.addMul(-output.m_velocity.dot<3>(input.m_up), input.m_up);
		output.m_velocity.addMul(  input.m_velocity.dot<3>(input.m_up) , input.m_up);

		hkSimdReal deltaTime = hkSimdReal::fromFloat( input.m_stepInfo.m_deltaTime );
		output.m_velocity.addMul(deltaTime, input.m_characterGravity );
	}
        //Hacky workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=44578
#if defined(HK_PLATFORM_LINUX) && defined(HK_COMPILER_GCC) && (HK_COMPILER_GCC_VERSION <= 45000) && HK_CONFIG_SIMD==HK_CONFIG_SIMD_ENABLED
	_mm_empty();
#endif
}

hkReal hkpCharacterStateInAir::getGain() const
{
	return m_gain;
}

void hkpCharacterStateInAir::setGain(hkReal newGain)
{
	m_gain = newGain;
}

hkReal hkpCharacterStateInAir::getSpeed() const
{
	return m_airSpeed;
}

void hkpCharacterStateInAir::setSpeed(hkReal newSpeed)
{
	m_airSpeed = newSpeed;
}

hkReal hkpCharacterStateInAir::getMaxLinearAcceleration() const
{
	return m_maxLinearAcceleration;
}

void hkpCharacterStateInAir::setMaxLinearAcceleration(hkReal newMaxAcceleration)
{
	m_maxLinearAcceleration = newMaxAcceleration;
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
