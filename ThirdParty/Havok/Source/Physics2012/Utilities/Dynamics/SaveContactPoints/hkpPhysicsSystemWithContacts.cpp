/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Physics2012/Dynamics/hkpDynamics.h>
#include <Physics2012/Utilities/Dynamics/SaveContactPoints/hkpPhysicsSystemWithContacts.h>
#include <Physics2012/Dynamics/Phantom/hkpPhantom.h>
#include <Physics2012/Dynamics/Entity/hkpRigidBody.h>
#include <Physics2012/Dynamics/Action/hkpAction.h>
#include <Common/Base/Container/LocalArray/hkLocalArray.h>
#include <Common/Base/Algorithm/Sort/hkSort.h>
#include <Physics2012/Utilities/Dynamics/SaveContactPoints/hkpSaveContactPointsUtil.h>


hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts()
{
	int numContacts = m_contacts.getSize();
	for (int c = 0; c < numContacts; ++c)
	{
		m_contacts[c]->removeReference();
	}
}

void hkpPhysicsSystemWithContacts::copy(const hkpPhysicsSystemWithContacts& toCopy)
{
	hkpPhysicsSystem::copy(toCopy);
	m_contacts = toCopy.m_contacts;
}


hkpPhysicsSystem* hkpPhysicsSystemWithContacts::clone(hkpPhysicsSystem::CloneConstraintMode cloneMode) const
{
	HK_ASSERT2(0xad7654dd, false, "Cloning of hkpPhysicsSystemWithContacts is not supported.");
	return HK_NULL;
}


void hkpPhysicsSystemWithContacts::addContact( hkpSerializedAgentNnEntry* c )
{
	if (c)
	{
		c->addReference();
		m_contacts.pushBack(c);
	}
}

void hkpPhysicsSystemWithContacts::removeContact( int i )
{
	m_contacts[i]->removeReference();
	m_contacts.removeAt(i);
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
