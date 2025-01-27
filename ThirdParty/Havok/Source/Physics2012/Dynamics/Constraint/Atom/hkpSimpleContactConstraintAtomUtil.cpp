/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Dynamics/hkpDynamics.h>
#include <Physics2012/Dynamics/Constraint/Atom/hkpSimpleContactConstraintAtomUtil.h>

#include <Common/Base/DebugUtil/DeterminismUtil/hkCheckDeterminismUtil.h>


int atomSizeRoundUp( int size )
{
	if (size <= 16 )		return 16;
	else if (size <= 32 )	return 32;
	else if (size <= 48 )	return 48;
	else if (size <= 64 )	return 64;
	else if (size <= 96 )	return 96;
	else if (size <= 128 )	return 128;
	else if (size <= 160 )	return 160;
	else if (size <= 192 )	return 192;
	else if (size <= 256 )	return 256;
	else if (size <= 320 )	return 320;
	else if (size <= 512 )	return 512;
	else if (size <= 640 )  return 640; 
	else if (size <= 1024)	return 1024;
	else if (size <= 2048)	return 2048;
	else if (size <= 4096)	return 4096;
	else if (size <= 8192)	return 8192; // end large blocks.
	else
	{
		return size;
	}
}

#if !defined(HK_PLATFORM_PS3_SPU)
	#include <Common/Base/Memory/Allocator/Thread/hkThreadMemory.h>
	HK_COMPILE_TIME_ASSERT( 640 == hkThreadMemory::MEMORY_MAX_SIZE_SMALL_BLOCK );
#else
	#include <Common/Base/Memory/PlatformUtils/Spu/hkMemoryRouterSpu.h>
	HK_COMPILE_TIME_ASSERT( 640 == hkMemoryRouterSpuUtil::MEMORY_MAX_SIZE_SMALL_BLOCK );
#endif


// On SPU this allocates an atom in place, no need to transfer all the data
HK_ON_PLATFORM_SPU( inline )
hkpSimpleContactConstraintAtom* hkpSimpleContactConstraintAtomUtil::allocateAtom( int numReservedContactPoints , int numExtraUserDatasA, int numExtraUserDatasB
#if !defined(HK_PLATFORM_SPU) 
																				 , int maxNumContactPoints
#endif
																				 )
{
	const int sizePerProperty = HK_NEXT_MULTIPLE_OF(sizeof(hkReal),sizeof(hkpContactPointProperties) + (numExtraUserDatasA+numExtraUserDatasB) * sizeof(hkpContactPointProperties::UserData));
	const int sizePerContactPoint = sizeof(hkContactPoint) + sizePerProperty;
	int size = HK_NEXT_MULTIPLE_OF(HK_REAL_ALIGNMENT,sizeof(hkpSimpleContactConstraintAtom)) + (numReservedContactPoints * sizePerContactPoint);
	size = HK_NEXT_MULTIPLE_OF(HK_REAL_ALIGNMENT, size);

	int allocsize = atomSizeRoundUp( size );
	hkpSimpleContactConstraintAtom* atom = static_cast<hkpSimpleContactConstraintAtom*>( hkAllocateChunk<void>(allocsize, HK_MEMORY_CLASS_DYNAMICS) );


	HK_CONTACT_ATOM_SET_PPU(atom);

	// on the SPU this will return a pointer to an existing atom buffer 
	hkpSimpleContactConstraintAtom* localAtom = HK_GET_LOCAL_CONTACT_ATOM(atom);

#if !defined(HK_PLATFORM_SPU)
	HK_ON_DETERMINISM_CHECKS_ENABLED( hkString::memSet(localAtom, 0, size); )
#endif
	localAtom->m_sizeOfAllAtoms				= hkUint16(size);
	localAtom->m_numReservedContactPoints	= hkUint16(numReservedContactPoints);

#if !defined(HK_PLATFORM_SPU)
	// on the SPU this alloc does not return a new buffer on the SPU. As a result we are not allowed
	// to override the existing data.
	localAtom->m_numUserDatasForBodyA       = hkUint8(numExtraUserDatasA);
	localAtom->m_numUserDatasForBodyB       = hkUint8(numExtraUserDatasB);
	localAtom->m_maxNumContactPoints        = hkUint16(maxNumContactPoints);
	localAtom->m_contactPointPropertiesStriding = hkUint8(sizePerProperty);

	localAtom->m_info						. init();
	localAtom->m_type						= hkpConstraintAtom::TYPE_CONTACT;
	localAtom->m_numContactPoints			= 0;
#endif

	// return the PPU address!
	return atom;
}



#if defined(HK_PLATFORM_SPU)
inline void hkpSimpleContactConstraintAtomUtil::copyContents(hkpSimpleContactConstraintAtom* srcAndDstAtom, int numNewReservedContactPoints)
{
	// note: on SPU we don't need to copy the contact points at all as the same buffer is re-used and the contact points
	//       are thus still in place;
	// note: as we only 'allocate' the new atom (and thus increase the capacity) AFTER we copied the contents,
	//       getContactPointProperties() will give us the OLD position and we have to adjust for the new position
	//       manually

	hkpSimpleContactConstraintAtom* srcAndDstAtomOnSpu = HK_GET_LOCAL_CONTACT_ATOM(srcAndDstAtom);

	// get the end of the contact point properties array for the OLD array capacity
	int numContactPoints = srcAndDstAtomOnSpu->m_numContactPoints;
	hkpContactPointPropertiesStream* srcCpp = srcAndDstAtomOnSpu->getContactPointPropertiesStream(numContactPoints);

	// manually force the array to its new capacity, so that getContactPointProperties() will work properly
	srcAndDstAtomOnSpu->m_numReservedContactPoints	= hkUint16(numNewReservedContactPoints);

	// get the end of the contact point properties array for the NEW array capacity
	hkpContactPointPropertiesStream* dstCpp = srcAndDstAtomOnSpu->getContactPointPropertiesStream(numContactPoints);

	int cppStriding = srcAndDstAtomOnSpu->getContactPointPropertiesStriding();

	HK_ASSERT2(0xad7655aa, srcCpp < dstCpp, "Corrupting data while expanding array inplace.");

	
	for (int i = numContactPoints-1; i >=0 ; i--)
	{
		srcCpp = hkAddByteOffset(srcCpp, -cppStriding);
		dstCpp = hkAddByteOffset(dstCpp, -cppStriding);
		hkString::memCpy4(dstCpp, srcCpp, cppStriding >> 2);
	}
}
#else
void hkpSimpleContactConstraintAtomUtil::copyContents(hkpSimpleContactConstraintAtom* dst, const hkpSimpleContactConstraintAtom* src)
{
	HK_ASSERT2(0xad76d88a, dst->m_numReservedContactPoints >= src->m_numContactPoints, "Destination atom does not have enough space.");
	HK_ASSERT2(0xad875a5a, dst->m_numUserDatasForBodyA + dst->m_numUserDatasForBodyB == src->m_numUserDatasForBodyA + src->m_numUserDatasForBodyB, "Num of extended user datas doesn't match.");

	dst->m_info = src->m_info;
	dst->m_numContactPoints = src->m_numContactPoints;

	{
		hkContactPoint*             dstCp  = dst->getContactPoints();
		hkpContactPointPropertiesStream* dstCpp = dst->getContactPointPropertiesStream();
		hkContactPoint*             srcCp  = src->getContactPoints();
		hkpContactPointPropertiesStream* srcCpp = src->getContactPointPropertiesStream();
		int cppStriding = src->getContactPointPropertiesStriding();
		HK_ASSERT(0x823892, (cppStriding & 0x3) == 0);
		for (int i = 0; i < src->m_numContactPoints; i++)
		{
			*(dstCp++) = *(srcCp++);
			hkString::memCpy4(dstCpp, srcCpp, cppStriding >> 2);
			dstCpp = hkAddByteOffset(dstCpp, cppStriding);
			srcCpp = hkAddByteOffset(srcCpp, cppStriding);
		}
	}
}
#endif


hkpSimpleContactConstraintAtom* hkpSimpleContactConstraintAtomUtil::expandOne(hkpSimpleContactConstraintAtom* oldAtom_mightGetDeallocated, hkPadSpu<bool>& atomReallocated)
{
	HK_ASSERT2(0xad806032, !atomReallocated.val(), "atomReallocated must be initialized to false");

	hkpSimpleContactConstraintAtom* atom = oldAtom_mightGetDeallocated;
	hkpSimpleContactConstraintAtom* localAtom = HK_GET_LOCAL_CONTACT_ATOM(atom);

	int numContactPoints = localAtom->m_numContactPoints;
	if ( numContactPoints >= localAtom->m_numReservedContactPoints )
	{
		int numNewContactPoints = hkMath::max2( int(numContactPoints), 2 );
		numNewContactPoints += numNewContactPoints;
		numNewContactPoints = hkMath::min2( numNewContactPoints, int(localAtom->m_maxNumContactPoints) );
		HK_ASSERT2( 0xf04f0234, localAtom->m_numContactPoints < numNewContactPoints, "hkpSimpleContactConstraintAtom cannot have more than m_maxNumContactPoints contacts");
		
#if !defined(HK_PLATFORM_SPU)
		atom = hkpSimpleContactConstraintAtomUtil::allocateAtom( numNewContactPoints, localAtom->m_numUserDatasForBodyA, localAtom->m_numUserDatasForBodyB, localAtom->m_maxNumContactPoints );
		hkpSimpleContactConstraintAtomUtil::copyContents(atom, oldAtom_mightGetDeallocated);
		hkpSimpleContactConstraintAtomUtil::deallocateAtom(oldAtom_mightGetDeallocated);	
#else
		// we need the reverse order so that the simulator's check for the original PPU atom will work!
		hkpSimpleContactConstraintAtomUtil::deallocateAtom(oldAtom_mightGetDeallocated);	
		hkpSimpleContactConstraintAtomUtil::copyContents(atom, numNewContactPoints);
		atom = hkpSimpleContactConstraintAtomUtil::allocateAtom( numNewContactPoints, localAtom->m_numUserDatasForBodyA, localAtom->m_numUserDatasForBodyB );
#endif

		// we need to re-assign this so that subsequent accesses below will actually access the newly allocated atom!
		localAtom = HK_GET_LOCAL_CONTACT_ATOM(atom);

		atomReallocated = true;
	}

	localAtom->m_numContactPoints = hkUint16(numContactPoints+1);

	// clear new property
	const int propertiesStriding = localAtom->getContactPointPropertiesStriding();
	hkpContactPointPropertiesStream* properties = hkAddByteOffset(localAtom->getContactPointPropertiesStream(),  HK_HINT_SIZE16(numContactPoints) * HK_HINT_SIZE16(propertiesStriding));
	HK_ASSERT(0x823893, (propertiesStriding & 0x3) == 0);
	hkString::memSet4(properties, 0x0, propertiesStriding >> 2);

	return atom;
}




#if !defined(HK_PLATFORM_SPU)

hkpSimpleContactConstraintAtom* hkpSimpleContactConstraintAtomUtil::optimizeCapacity(hkpSimpleContactConstraintAtom* oldAtom_mightGetDeallocated, int numFreeElemsLeft, hkPadSpu<bool>& atomReallocated)
{
	HK_ASSERT2(0xad806031, !atomReallocated.val(), "atomReallocated must be initialized to false");
	hkpSimpleContactConstraintAtom* atom = oldAtom_mightGetDeallocated;
	const int size = atom->m_numContactPoints + numFreeElemsLeft;
	if ( size*2 <= atom->m_numReservedContactPoints )
	{
		const int newSize = atom->m_numReservedContactPoints >> 1;
		atom = hkpSimpleContactConstraintAtomUtil::allocateAtom(newSize, atom->m_numUserDatasForBodyA, atom->m_numUserDatasForBodyB, atom->m_maxNumContactPoints);
		hkpSimpleContactConstraintAtomUtil::copyContents(atom, oldAtom_mightGetDeallocated);
		hkpSimpleContactConstraintAtomUtil::deallocateAtom(oldAtom_mightGetDeallocated);

		atomReallocated = true;
	}
	return atom;
}

#endif

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
