// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GPN_GPNGameModeBase_generated_h
#error "GPNGameModeBase.generated.h already included, missing '#pragma once' in GPNGameModeBase.h"
#endif
#define GPN_GPNGameModeBase_generated_h

#define GPN_Source_GPN_GPNGameModeBase_h_15_RPC_WRAPPERS
#define GPN_Source_GPN_GPNGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GPN_Source_GPN_GPNGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGPNGameModeBase(); \
	friend struct Z_Construct_UClass_AGPNGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGPNGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(AGPNGameModeBase)


#define GPN_Source_GPN_GPNGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGPNGameModeBase(); \
	friend struct Z_Construct_UClass_AGPNGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGPNGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(AGPNGameModeBase)


#define GPN_Source_GPN_GPNGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGPNGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGPNGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGPNGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGPNGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGPNGameModeBase(AGPNGameModeBase&&); \
	NO_API AGPNGameModeBase(const AGPNGameModeBase&); \
public:


#define GPN_Source_GPN_GPNGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGPNGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGPNGameModeBase(AGPNGameModeBase&&); \
	NO_API AGPNGameModeBase(const AGPNGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGPNGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGPNGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGPNGameModeBase)


#define GPN_Source_GPN_GPNGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define GPN_Source_GPN_GPNGameModeBase_h_12_PROLOG
#define GPN_Source_GPN_GPNGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_GPNGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_GPNGameModeBase_h_15_RPC_WRAPPERS \
	GPN_Source_GPN_GPNGameModeBase_h_15_INCLASS \
	GPN_Source_GPN_GPNGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_GPNGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_GPNGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_GPNGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_GPNGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	GPN_Source_GPN_GPNGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class AGPNGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_GPNGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
