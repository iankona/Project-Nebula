/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKNP_CHARACTER_STATE_MANAGER_H
#define HKNP_CHARACTER_STATE_MANAGER_H

#include <Physics/Physics/Extensions/CharacterControl/StateMachine/hknpCharacterState.h>

/// The character state manager. The manager allows the user to add and remove their own
/// derived states at runtime to the state machine.
/// A state manager is designed to be shared between characters that have that same control mechanism.
/// e.g., all Orcs might reuse the same single instance of a state manager.
/// If you create your own custom states be careful about placing per character data there.
/// You will be forced to instantiate one manager per character. A better alternative is to derive from
/// the hknpCharacterInput class or use its user data member to point to per character info.
class hknpCharacterStateManager : public hkReferencedObject
{
	public:

		HK_DECLARE_CLASS_ALLOCATOR( HK_MEMORY_CLASS_PHYSICS );

		/// Constructor. Initialises the array of states to return HK_NULL for all state types.
		hknpCharacterStateManager();

		/// Destructor. Removes references to all registered states.
		~hknpCharacterStateManager();

		/// Registers a state for a given state type. This adds a reference to the registered.
		/// If a state already exists for this type then the reference to the existing state is removed.
		void registerState(hknpCharacterState* m_state, hknpCharacterState::hknpCharacterStateType state);

		/// Returns the state registered for the given type.
		/// If no state has been registered this returns HK_NULL.
		hknpCharacterState* getState(hknpCharacterState::hknpCharacterStateType initialState) const;

	private:

		hknpCharacterState* m_states[hknpCharacterState::HK_CHARACTER_MAX_STATE_ID];
};

#endif // HKNP_CHARACTER_STATE_MANAGER_H

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
