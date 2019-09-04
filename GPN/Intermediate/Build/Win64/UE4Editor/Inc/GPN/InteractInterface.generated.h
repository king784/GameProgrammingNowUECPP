// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GPN_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define GPN_InteractInterface_generated_h

#define GPN_Source_GPN_InteractInterface_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define GPN_Source_GPN_InteractInterface_h_13_EVENT_PARMS
#define GPN_Source_GPN_InteractInterface_h_13_CALLBACK_WRAPPERS
#define GPN_Source_GPN_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractInterface(UInteractInterface&&); \
	NO_API UInteractInterface(const UInteractInterface&); \
public:


#define GPN_Source_GPN_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractInterface(UInteractInterface&&); \
	NO_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define GPN_Source_GPN_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define GPN_Source_GPN_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GPN_Source_GPN_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	GPN_Source_GPN_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GPN_Source_GPN_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	GPN_Source_GPN_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GPN_Source_GPN_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GPN_Source_GPN_InteractInterface_h_10_PROLOG \
	GPN_Source_GPN_InteractInterface_h_13_EVENT_PARMS


#define GPN_Source_GPN_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_InteractInterface_h_13_RPC_WRAPPERS \
	GPN_Source_GPN_InteractInterface_h_13_CALLBACK_WRAPPERS \
	GPN_Source_GPN_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_InteractInterface_h_13_CALLBACK_WRAPPERS \
	GPN_Source_GPN_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
