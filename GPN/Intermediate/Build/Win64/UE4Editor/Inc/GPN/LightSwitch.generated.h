// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GPN_LightSwitch_generated_h
#error "LightSwitch.generated.h already included, missing '#pragma once' in LightSwitch.h"
#endif
#define GPN_LightSwitch_generated_h

#define GPN_Source_GPN_LightSwitch_h_15_RPC_WRAPPERS \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_LightSwitch_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_LightSwitch_h_15_EVENT_PARMS
#define GPN_Source_GPN_LightSwitch_h_15_CALLBACK_WRAPPERS
#define GPN_Source_GPN_LightSwitch_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend struct Z_Construct_UClass_ALightSwitch_Statics; \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch) \
	virtual UObject* _getUObject() const override { return const_cast<ALightSwitch*>(this); }


#define GPN_Source_GPN_LightSwitch_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend struct Z_Construct_UClass_ALightSwitch_Statics; \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch) \
	virtual UObject* _getUObject() const override { return const_cast<ALightSwitch*>(this); }


#define GPN_Source_GPN_LightSwitch_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitch(ALightSwitch&&); \
	NO_API ALightSwitch(const ALightSwitch&); \
public:


#define GPN_Source_GPN_LightSwitch_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitch(ALightSwitch&&); \
	NO_API ALightSwitch(const ALightSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitch)


#define GPN_Source_GPN_LightSwitch_h_15_PRIVATE_PROPERTY_OFFSET
#define GPN_Source_GPN_LightSwitch_h_12_PROLOG \
	GPN_Source_GPN_LightSwitch_h_15_EVENT_PARMS


#define GPN_Source_GPN_LightSwitch_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_LightSwitch_h_15_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_LightSwitch_h_15_RPC_WRAPPERS \
	GPN_Source_GPN_LightSwitch_h_15_CALLBACK_WRAPPERS \
	GPN_Source_GPN_LightSwitch_h_15_INCLASS \
	GPN_Source_GPN_LightSwitch_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_LightSwitch_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_LightSwitch_h_15_PRIVATE_PROPERTY_OFFSET \
	GPN_Source_GPN_LightSwitch_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_LightSwitch_h_15_CALLBACK_WRAPPERS \
	GPN_Source_GPN_LightSwitch_h_15_INCLASS_NO_PURE_DECLS \
	GPN_Source_GPN_LightSwitch_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class ALightSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_LightSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
