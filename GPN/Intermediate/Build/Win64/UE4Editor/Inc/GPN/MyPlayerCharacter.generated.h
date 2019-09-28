// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GPN_MyPlayerCharacter_generated_h
#error "MyPlayerCharacter.generated.h already included, missing '#pragma once' in MyPlayerCharacter.h"
#endif
#define GPN_MyPlayerCharacter_generated_h

#define GPN_Source_GPN_MyPlayerCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCollectedBattery) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_HowMany); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCollectedBattery(Z_Param_HowMany); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Die(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_MyPlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCollectedBattery) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_HowMany); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCollectedBattery(Z_Param_HowMany); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Die(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_MyPlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMyPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter)


#define GPN_Source_GPN_MyPlayerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMyPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter)


#define GPN_Source_GPN_MyPlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public:


#define GPN_Source_GPN_MyPlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCharacter)


#define GPN_Source_GPN_MyPlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define GPN_Source_GPN_MyPlayerCharacter_h_17_PROLOG
#define GPN_Source_GPN_MyPlayerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_MyPlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_MyPlayerCharacter_h_20_RPC_WRAPPERS \
	GPN_Source_GPN_MyPlayerCharacter_h_20_INCLASS \
	GPN_Source_GPN_MyPlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_MyPlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_MyPlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_MyPlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_MyPlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	GPN_Source_GPN_MyPlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class AMyPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_MyPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
