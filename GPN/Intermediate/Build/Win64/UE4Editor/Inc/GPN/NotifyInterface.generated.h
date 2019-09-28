// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyPlayerCharacter;
#ifdef GPN_NotifyInterface_generated_h
#error "NotifyInterface.generated.h already included, missing '#pragma once' in NotifyInterface.h"
#endif
#define GPN_NotifyInterface_generated_h

#define GPN_Source_GPN_NotifyInterface_h_14_RPC_WRAPPERS
#define GPN_Source_GPN_NotifyInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GPN_Source_GPN_NotifyInterface_h_14_EVENT_PARMS \
	struct NotifyInterface_eventNotifyDead_Parms \
	{ \
		const AMyPlayerCharacter* Context; \
	}; \
	struct NotifyInterface_eventNotifyVictory_Parms \
	{ \
		const AMyPlayerCharacter* Context; \
	};


#define GPN_Source_GPN_NotifyInterface_h_14_CALLBACK_WRAPPERS
#define GPN_Source_GPN_NotifyInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNotifyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotifyInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNotifyInterface(UNotifyInterface&&); \
	NO_API UNotifyInterface(const UNotifyInterface&); \
public:


#define GPN_Source_GPN_NotifyInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNotifyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNotifyInterface(UNotifyInterface&&); \
	NO_API UNotifyInterface(const UNotifyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotifyInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyInterface)


#define GPN_Source_GPN_NotifyInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNotifyInterface(); \
	friend struct Z_Construct_UClass_UNotifyInterface_Statics; \
public: \
	DECLARE_CLASS(UNotifyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GPN"), NO_API) \
	DECLARE_SERIALIZER(UNotifyInterface)


#define GPN_Source_GPN_NotifyInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GPN_Source_GPN_NotifyInterface_h_14_GENERATED_UINTERFACE_BODY() \
	GPN_Source_GPN_NotifyInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_NotifyInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GPN_Source_GPN_NotifyInterface_h_14_GENERATED_UINTERFACE_BODY() \
	GPN_Source_GPN_NotifyInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_NotifyInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INotifyInterface() {} \
public: \
	typedef UNotifyInterface UClassType; \
	typedef INotifyInterface ThisClass; \
	static void Execute_NotifyDead(UObject* O, const AMyPlayerCharacter* Context); \
	static void Execute_NotifyVictory(UObject* O, const AMyPlayerCharacter* Context); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GPN_Source_GPN_NotifyInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INotifyInterface() {} \
public: \
	typedef UNotifyInterface UClassType; \
	typedef INotifyInterface ThisClass; \
	static void Execute_NotifyDead(UObject* O, const AMyPlayerCharacter* Context); \
	static void Execute_NotifyVictory(UObject* O, const AMyPlayerCharacter* Context); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GPN_Source_GPN_NotifyInterface_h_11_PROLOG \
	GPN_Source_GPN_NotifyInterface_h_14_EVENT_PARMS


#define GPN_Source_GPN_NotifyInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_NotifyInterface_h_14_RPC_WRAPPERS \
	GPN_Source_GPN_NotifyInterface_h_14_CALLBACK_WRAPPERS \
	GPN_Source_GPN_NotifyInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GPN_Source_GPN_NotifyInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GPN_Source_GPN_NotifyInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GPN_Source_GPN_NotifyInterface_h_14_CALLBACK_WRAPPERS \
	GPN_Source_GPN_NotifyInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPN_API UClass* StaticClass<class UNotifyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GPN_Source_GPN_NotifyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
