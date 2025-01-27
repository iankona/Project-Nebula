/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Utilities/CharacterControl/StateMachine/hkpCharacterState.h>
#include <Physics2012/Utilities/CharacterControl/StateMachine/hkpCharacterContext.h>
#include <Physics2012/Utilities/CharacterControl/StateMachine/OnGround/hkpCharacterStateOnGround.h>
#include <Physics2012/Utilities/CharacterControl/StateMachine/Util/hkpCharacterMovementUtil.h>

#include <Physics2012/Dynamics/World/hkpWorld.h>

#include <Common/Visualize/hkDebugDisplay.h>

hkpCharacterStateOnGround::hkpCharacterStateOnGround()
{
	m_gain = 0.95f;
	
	m_walkSpeed = 10.0f;

	m_maxLinearAcceleration = 200.0f;
	
	m_killVelocityOnLaunch = true;
	
	m_limitVerticalVelocity = false;

	m_disableHorizontalProjection = false;
}

	// Return the state type
hkpCharacterStateType hkpCharacterStateOnGround::getType() const 
{
	return HK_CHARACTER_ON_GROUND;
}

void hkpCharacterStateOnGround::change(hkpCharacterContext& context, const hkpCharacterInput& input, hkpCharacterOutput& output)
{
	
	// Check if I should jump
	if (input.m_wantJump)
	{
		context.setState(HK_CHARACTER_JUMPING, input, output);
		return;
	}
	
	// Check if I should climb
	if (input.m_atLadder)
	{
		context.setState(HK_CHARACTER_CLIMBING, input, output);
		return;
	}
	
	// Check that I'm supported
	if ( input.m_surfaceInfo.m_supportedState != hkpSurfaceInfo::SUPPORTED )
	{
		if (m_killVelocityOnLaunch)
		{
			// Suddenly the character is no longer supported.
			// Remove all vertical velocity if required.
			{
				// Remove velocity in vertical component 
				output.m_velocity.subMul(input.m_velocity.dot<3>(input.m_up), input.m_up);
			}
		}
		context.setState(HK_CHARACTER_IN_AIR, input, output);	
		return;			
	}
}

	// Process the user input - causes state transitions etc.
void hkpCharacterStateOnGround::update(hkpCharacterContext& context, const hkpCharacterInput& input, hkpCharacterOutput& output)
{
	//
	// Move character relative to the surface we're standing on
	//
	{
		// Correct input velocity to apply instantly any changes in the velocity of the standing surface and this way 
		// avoid artifacts caused by filtering of the output velocity when standing on moving objects.
		hkVector4& inputVelocity = output.m_inputVelocity;
		{
			hkVector4 previousSurfaceVel = context.getPreviousSurfaceVelocity();
			inputVelocity.setSub(input.m_velocity, previousSurfaceVel);
			inputVelocity.setAdd(input.m_surfaceInfo.m_surfaceVelocity, inputVelocity);
		}		

		hkpCharacterMovementUtil::hkpMovementUtilInput muInput;
		muInput.m_gain = m_gain;
		muInput.m_forward = input.m_forward;
		muInput.m_up = input.m_up;
		muInput.m_surfaceNormal = input.m_surfaceInfo.m_surfaceNormal;
		muInput.m_currentVelocity = inputVelocity;
		muInput.m_desiredVelocity.set( input.m_inputUD * m_walkSpeed, input.m_inputLR * m_walkSpeed, 0 );
		muInput.m_maxVelocityDelta = m_maxLinearAcceleration*input.m_stepInfo.m_deltaTime;
		muInput.m_surfaceVelocity = input.m_surfaceInfo.m_surfaceVelocity;

		// This will stick the character to the surface
		hkpCharacterMovementUtil::calculateMovement(muInput, output.m_velocity);
		
		const hkSimdReal stepInfoDeltaTime = hkSimdReal::fromFloat(input.m_stepInfo.m_deltaTime);

		// If the character is too far from the surface, apply gravity along the surface normal.
		if ( input.m_surfaceInfo.m_surfaceDistanceExcess > 0.0f )
		{
			const hkSimdReal normalGravity = input.m_surfaceInfo.m_surfaceNormal.dot<3>( input.m_characterGravity ) * stepInfoDeltaTime;
			output.m_velocity.addMul( normalGravity, input.m_surfaceInfo.m_surfaceNormal );
		}

		// Do not let the character fall faster than gravity
		if ( m_limitVerticalVelocity )
		{
			hkSimdReal maxGravityVelocityInc = input.m_characterGravity.dot<3>(input.m_up) * stepInfoDeltaTime;
			hkSimdReal actualVelocityInc = output.m_velocity.dot<3>(input.m_up) - input.m_velocity.dot<3>(input.m_up);

			if ( output.m_velocity.dot<3>(input.m_up).isLessZero() && (actualVelocityInc < maxGravityVelocityInc ))
			{
				output.m_velocity.addMul(maxGravityVelocityInc - actualVelocityInc, input.m_up);
			}
		}
	}

	if (!m_disableHorizontalProjection)
	{
		output.m_velocity.sub(input.m_surfaceInfo.m_surfaceVelocity);
		if (output.m_velocity.dot<3>(input.m_up).getReal() > .001f)
		{
			HK_ASSERT2(0x3f96452a, input.m_surfaceInfo.m_surfaceNormal.dot<3>(input.m_up).getReal() > HK_REAL_EPSILON,
				"Surface is vertical and the character is in the walk state.");

			hkSimdReal velLen = output.m_velocity.normalizeWithLength<3>();

				// Get the desired length in the horizontal direction
			hkSimdReal horizLen = velLen / input.m_surfaceInfo.m_surfaceNormal.dot<3>(input.m_up);
				
				// Re project the velocity onto the horizontal plane
			hkVector4 c; c.setCross(input.m_surfaceInfo.m_surfaceNormal, output.m_velocity);
			output.m_velocity.setCross(c, input.m_up);

				// Scale the velocity to maintain the speed on the slope
			output.m_velocity.mul(horizLen);
		}
		output.m_velocity.add(input.m_surfaceInfo.m_surfaceVelocity);
	}


	// HVK-1362 : The following code is also used in the inAir state.
	// Its purpose is to allow gravity to affect the character by stopping
	// the hkpCharacterMovementUtil culling velocity in the direction of m_up.
	// However leaving this code in means that characters can start sliding
	// down gentle slopes. 
	// The more common use case is that a character should not slide at all 
	// on slopes that are shallow enough to support them. Therefore the 
	// following lines have been commented out.
	
	// Restore to original vertical component
	//output.m_velocity.addMul4(-output.m_velocity.dot3(input.m_up), input.m_up);
	//output.m_velocity.addMul4(  input.m_velocity.dot3(input.m_up) , input.m_up);
}

hkReal hkpCharacterStateOnGround::getGain() const
{
	return m_gain;
}

void hkpCharacterStateOnGround::setGain(hkReal newGain)
{
	m_gain = newGain;
}

hkReal hkpCharacterStateOnGround::getSpeed() const
{
	return m_walkSpeed;
}

void hkpCharacterStateOnGround::setSpeed(hkReal newSpeed)
{
	m_walkSpeed = newSpeed;
}

hkReal hkpCharacterStateOnGround::getMaxLinearAcceleration() const
{
	return m_maxLinearAcceleration;
}

void hkpCharacterStateOnGround::setMaxLinearAcceleration(hkReal newMaxAcceleration)
{
	m_maxLinearAcceleration = newMaxAcceleration;
}


hkBool hkpCharacterStateOnGround::getGroundHugging() const
{
	return m_killVelocityOnLaunch;
}

void hkpCharacterStateOnGround::setGroundHugging(hkBool newVal)
{
	m_killVelocityOnLaunch = newVal;
}


hkBool hkpCharacterStateOnGround::getLimitDownwardVelocity() const
{
	return m_limitVerticalVelocity;
}

void hkpCharacterStateOnGround::setLimitDownwardVelocity( hkBool newVal )
{
	m_limitVerticalVelocity = newVal;
}

hkBool hkpCharacterStateOnGround::getDisableHorizontalProjection() const
{
	return m_disableHorizontalProjection;
}

void hkpCharacterStateOnGround::setDisableHorizontalProjection( hkBool newVal )
{
	m_disableHorizontalProjection = newVal;
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
