/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


// This file was generated by NxParameterized/scripts/GenParameterized.pl
// Created: 2015.06.02 04:12:11

#ifndef HEADER_ClothingAssetParameters_0p13_h
#define HEADER_ClothingAssetParameters_0p13_h

#include "NxParametersTypes.h"

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
#include "NxParameterized.h"
#include "NxParameters.h"
#include "NxParameterizedTraits.h"
#include "NxTraitsInternal.h"
#endif

namespace physx
{
namespace apex
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace ClothingAssetParameters_0p13NS
{

struct BoneEntry_Type;
struct ActorEntry_Type;
struct BoneSphere_Type;
struct BonePlane_Type;
struct CookedEntry_Type;
struct SimulationParams_Type;

struct REF_DynamicArray1D_Type
{
	NxParameterized::Interface** buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct BoneEntry_DynamicArray1D_Type
{
	BoneEntry_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct ActorEntry_DynamicArray1D_Type
{
	ActorEntry_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct VEC3_DynamicArray1D_Type
{
	physx::PxVec3* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct BoneSphere_DynamicArray1D_Type
{
	BoneSphere_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct U16_DynamicArray1D_Type
{
	physx::PxU16* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct BonePlane_DynamicArray1D_Type
{
	BonePlane_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct U32_DynamicArray1D_Type
{
	physx::PxU32* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct CookedEntry_DynamicArray1D_Type
{
	CookedEntry_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct BoneSphere_Type
{
	physx::PxI32 boneIndex;
	physx::PxF32 radius;
	physx::PxVec3 localPos;
};
struct SimulationParams_Type
{
	physx::PxU32 hierarchicalLevels;
	physx::PxF32 thickness;
	physx::PxF32 virtualParticleDensity;
	physx::PxVec3 gravityDirection;
	physx::PxF32 sleepLinearVelocity;
	bool disableCCD;
	bool untangling;
	bool twowayInteraction;
	physx::PxF32 restLengthScale;
};
struct BoneEntry_Type
{
	physx::PxI32 internalIndex;
	physx::PxI32 externalIndex;
	physx::PxU32 numMeshReferenced;
	physx::PxU32 numRigidBodiesReferenced;
	physx::PxI32 parentIndex;
	physx::PxMat34Legacy bindPose;
	NxParameterized::DummyStringStruct name;
};
struct ActorEntry_Type
{
	physx::PxI32 boneIndex;
	physx::PxU32 convexVerticesStart;
	physx::PxU32 convexVerticesCount;
	physx::PxF32 capsuleRadius;
	physx::PxF32 capsuleHeight;
	physx::PxMat34Legacy localPose;
};
struct BonePlane_Type
{
	physx::PxI32 boneIndex;
	physx::PxVec3 n;
	physx::PxF32 d;
};
struct CookedEntry_Type
{
	physx::PxF32 scale;
	NxParameterized::Interface* cookedData;
};

struct ParametersStruct
{

	REF_DynamicArray1D_Type physicalMeshes;
	REF_DynamicArray1D_Type graphicalLods;
	SimulationParams_Type simulation;
	BoneEntry_DynamicArray1D_Type bones;
	physx::PxU32 bonesReferenced;
	physx::PxU32 bonesReferencedByMesh;
	physx::PxU32 rootBoneIndex;
	ActorEntry_DynamicArray1D_Type boneActors;
	VEC3_DynamicArray1D_Type boneVertices;
	BoneSphere_DynamicArray1D_Type boneSpheres;
	U16_DynamicArray1D_Type boneSphereConnections;
	BonePlane_DynamicArray1D_Type bonePlanes;
	U32_DynamicArray1D_Type collisionConvexes;
	CookedEntry_DynamicArray1D_Type cookedData;
	physx::PxBounds3 boundingBox;
	NxParameterized::Interface* materialLibrary;
	physx::PxU32 materialIndex;
	physx::PxU32 interCollisionChannels;
	NxParameterized::DummyStringStruct toolString;

};

static const physx::PxU32 checksum[] = { 0x1c07d2c0, 0xa436dad5, 0xb2c1e2a5, 0xcf467a82, };

} // namespace ClothingAssetParameters_0p13NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ClothingAssetParameters_0p13 : public NxParameterized::NxParameters, public ClothingAssetParameters_0p13NS::ParametersStruct
{
public:
	ClothingAssetParameters_0p13(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ClothingAssetParameters_0p13();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingAssetParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)13;

	static physx::PxU32 staticVersion(void)
	{
		return ClassVersion;
	}

	physx::PxU32 version(void) const
	{
		return(staticVersion());
	}

	static const physx::PxU32 ClassAlignment = 8;

	static const physx::PxU32* staticChecksum(physx::PxU32& bits)
	{
		bits = 8 * sizeof(ClothingAssetParameters_0p13NS::checksum);
		return ClothingAssetParameters_0p13NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingAssetParameters_0p13NS::ParametersStruct& parameters(void) const
	{
		ClothingAssetParameters_0p13* tmpThis = const_cast<ClothingAssetParameters_0p13*>(this);
		return *(static_cast<ClothingAssetParameters_0p13NS::ParametersStruct*>(tmpThis));
	}

	ClothingAssetParameters_0p13NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingAssetParameters_0p13NS::ParametersStruct*>(this));
	}

	virtual NxParameterized::ErrorType getParameterHandle(const char* long_name, NxParameterized::Handle& handle) const;
	virtual NxParameterized::ErrorType getParameterHandle(const char* long_name, NxParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NxParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NxParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NxParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NxParameterized::MutexType mBuiltFlagMutex;
};

class ClothingAssetParameters_0p13Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingAssetParameters_0p13), ClothingAssetParameters_0p13::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ClothingAssetParameters_0p13::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingAssetParameters_0p13");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingAssetParameters_0p13)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ClothingAssetParameters_0p13)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ClothingAssetParameters_0p13::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ClothingAssetParameters_0p13::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingAssetParameters_0p13");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ClothingAssetParameters_0p13 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingAssetParameters_0p13*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingAssetParameters_0p13::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ClothingAssetParameters_0p13::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ClothingAssetParameters_0p13::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ClothingAssetParameters_0p13::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
