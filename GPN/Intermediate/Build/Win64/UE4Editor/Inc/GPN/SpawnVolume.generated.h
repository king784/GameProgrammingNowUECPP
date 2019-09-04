// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GPN_SpawnVolume_generated_h
#error "SpawnVolume.generated.h already included, missing '#pragma once' in SpawnVolume.h"
#endif
#define GPN_SpawnVolume_generated_h

#define GPN_Source_GPN_SpawnVolume_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define GPN_Source_GPN_SpawnVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define GPN_Source_GPN_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public:


#define GPN_Source_GPN_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnVolume)


#define GPN_Source_GPN_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhatToSpawn() { return STRUCT_OFFSET(ASpawnVolume, WhatToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnTimeMin() { return STRUCT_OFFSET(ASpawnVolume, SpawnTimeMin); } \
	FORCEINLINE static uint32 __PPO__SpawnTimeMax() { return STRUCT_OFFSET(ASpawnVolume, SpawnTimeMax); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(ASpawnVolume, WhereToSpawn); }


#define GPN_Source_GPN_SpawnVolume_h_9_PROLOG
#define GPN_Source_GPN_SpawnVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_SpawnVolume_h_12_RPC_WRAPPERS \
	GPN_Source_GPN_SpawnVolume_h_12_INCLASS \
	GPN_Source_GPN_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_SpawnVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
	GPN_Source_GPN_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class ASpawnVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_SpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
