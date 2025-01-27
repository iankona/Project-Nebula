/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics/Physics/hknpPhysics.h>
#include <Physics/Physics/Extensions/Vehicle/hknpVehicleInstance.h>
#include <Physics/Physics/Extensions/Vehicle/Suspension/Default/hknpVehicleDefaultSuspension.h>

void hknpVehicleDefaultSuspension::calcSuspension( const hkReal deltaTime, const hknpVehicleInstance* vehicle, const hknpVehicleWheelCollide::CollisionDetectionWheelOutput* cdInfo, hkReal* suspensionForceOut )
{
	const hkReal chassisMass = vehicle->getChassisMotion().getMass().getReal();

	for (int w_it=0; w_it< vehicle->m_data->m_numWheels; w_it++)
	{
		//const hknpVehicleInstance::WheelInfo &wheel_info = vehicle->m_wheelsInfo[ w_it ];

		if ( cdInfo[w_it].m_contactBodyId.isValid() )
		{
			hkReal force;
			//
			//	Spring constant component
			//
			{
				const hkReal susp_length			= m_wheelParams[w_it].m_length;
				const hkReal current_length = cdInfo[w_it].m_currentSuspensionLength;

				const hkReal length_diff = (susp_length - current_length);

				force = m_wheelSpringParams[w_it].m_strength * length_diff * cdInfo[w_it].m_suspensionScalingFactor;
			}

			//
			// From hknpVehicleWheelCollide::CollisionDetectionWheelOutput
			//


			//
			// damping
			//
			{
				const hkReal projected_rel_vel = cdInfo[w_it].m_suspensionClosingSpeed;
				{
					hkReal susp_damping;
					if ( projected_rel_vel < 0.0f )
					{
						susp_damping = m_wheelSpringParams[w_it].m_dampingCompression;
					}
					else
					{
						susp_damping = m_wheelSpringParams[w_it].m_dampingRelaxation;
					}
					force -= susp_damping * projected_rel_vel;
				}
			}

			// RESULT
			suspensionForceOut [w_it] = force * chassisMass;
		}
		else
		{
			suspensionForceOut [w_it] = 0.0f;
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
