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

#ifndef HEADER_SurfaceTraceSetParameters_0p0_h
#define HEADER_SurfaceTraceSetParameters_0p0_h

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

namespace SurfaceTraceSetParameters_0p0NS
{


struct REF_DynamicArray1D_Type
{
	NxParameterized::Interface** buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};


struct ParametersStruct
{

	REF_DynamicArray1D_Type traces;

};

static const physx::PxU32 checksum[] = { 0x670003c1, 0x423421b5, 0x28339fb2, 0x38efed3a, };

} // namespace SurfaceTraceSetParameters_0p0NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class SurfaceTraceSetParameters_0p0 : public NxParameterized::NxParameters, public SurfaceTraceSetParameters_0p0NS::ParametersStruct
{
public:
	SurfaceTraceSetParameters_0p0(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~SurfaceTraceSetParameters_0p0();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("SurfaceTraceSetParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)0;

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
		bits = 8 * sizeof(SurfaceTraceSetParameters_0p0NS::checksum);
		return SurfaceTraceSetParameters_0p0NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const SurfaceTraceSetParameters_0p0NS::ParametersStruct& parameters(void) const
	{
		SurfaceTraceSetParameters_0p0* tmpThis = const_cast<SurfaceTraceSetParameters_0p0*>(this);
		return *(static_cast<SurfaceTraceSetParameters_0p0NS::ParametersStruct*>(tmpThis));
	}

	SurfaceTraceSetParameters_0p0NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<SurfaceTraceSetParameters_0p0NS::ParametersStruct*>(this));
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

class SurfaceTraceSetParameters_0p0Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(SurfaceTraceSetParameters_0p0), SurfaceTraceSetParameters_0p0::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, SurfaceTraceSetParameters_0p0::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SurfaceTraceSetParameters_0p0");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(SurfaceTraceSetParameters_0p0)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, SurfaceTraceSetParameters_0p0)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, SurfaceTraceSetParameters_0p0::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, SurfaceTraceSetParameters_0p0::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SurfaceTraceSetParameters_0p0");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of SurfaceTraceSetParameters_0p0 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (SurfaceTraceSetParameters_0p0*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (SurfaceTraceSetParameters_0p0::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (SurfaceTraceSetParameters_0p0::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (SurfaceTraceSetParameters_0p0::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (SurfaceTraceSetParameters_0p0::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
