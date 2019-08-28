// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GPN_MyPlayerCharacter_generated_h
#error "MyPlayerCharacter.generated.h already included, missing '#pragma once' in MyPlayerCharacter.h"
#endif
#define GPN_MyPlayerCharacter_generated_h

#define GPN_Source_GPN_MyPlayerCharacter_h_15_RPC_WRAPPERS
#define GPN_Source_GPN_MyPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GPN_Source_GPN_MyPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMyPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter)


#define GPN_Source_GPN_MyPlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMyPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter)


#define GPN_Source_GPN_MyPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public:


#define GPN_Source_GPN_MyPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerCharacter)


#define GPN_Source_GPN_MyPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define GPN_Source_GPN_MyPlayerCharacter_h_12_PROLOG
#define GPN_Source_GPN_MyPlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_MyPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_MyPlayerCharacter_h_15_RPC_WRAPPERS \
	GPN_Source_GPN_MyPlayerCharacter_h_15_INCLASS \
	GPN_Source_GPN_MyPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_MyPlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_MyPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_MyPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_MyPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	GPN_Source_GPN_MyPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class AMyPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_MyPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
