// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPN/NotifyInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyInterface() {}
// Cross Module References
	GPN_API UClass* Z_Construct_UClass_UNotifyInterface_NoRegister();
	GPN_API UClass* Z_Construct_UClass_UNotifyInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GPN();
	GPN_API UFunction* Z_Construct_UFunction_UNotifyInterface_NotifyDead();
	GPN_API UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister();
	GPN_API UFunction* Z_Construct_UFunction_UNotifyInterface_NotifyVictory();
// End Cross Module References
	void INotifyInterface::NotifyDead(const AMyPlayerCharacter* Context)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyDead instead.");
	}
	void INotifyInterface::NotifyVictory(const AMyPlayerCharacter* Context)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyVictory instead.");
	}
	void UNotifyInterface::StaticRegisterNativesUNotifyInterface()
	{
	}
	struct Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NotifyInterface_eventNotifyDead_Parms, Context), Z_Construct_UClass_AMyPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotifyInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotifyInterface, nullptr, "NotifyDead", sizeof(NotifyInterface_eventNotifyDead_Parms), Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotifyInterface_NotifyDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotifyInterface_NotifyDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NotifyInterface_eventNotifyVictory_Parms, Context), Z_Construct_UClass_AMyPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotifyInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotifyInterface, nullptr, "NotifyVictory", sizeof(NotifyInterface_eventNotifyVictory_Parms), Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotifyInterface_NotifyVictory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotifyInterface_NotifyVictory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNotifyInterface_NoRegister()
	{
		return UNotifyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GPN,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNotifyInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotifyInterface_NotifyDead, "NotifyDead" }, // 1861505617
		{ &Z_Construct_UFunction_UNotifyInterface_NotifyVictory, "NotifyVictory" }, // 2119184373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NotifyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INotifyInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNotifyInterface_Statics::ClassParams = {
		&UNotifyInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNotifyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNotifyInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNotifyInterface, 917429238);
	template<> GPN_API UClass* StaticClass<UNotifyInterface>()
	{
		return UNotifyInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNotifyInterface(Z_Construct_UClass_UNotifyInterface, &UNotifyInterface::StaticClass, TEXT("/Script/GPN"), TEXT("UNotifyInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyInterface);
	static FName NAME_UNotifyInterface_NotifyDead = FName(TEXT("NotifyDead"));
	void INotifyInterface::Execute_NotifyDead(UObject* O, const AMyPlayerCharacter* Context)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UNotifyInterface::StaticClass()));
		NotifyInterface_eventNotifyDead_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UNotifyInterface_NotifyDead);
		if (Func)
		{
			Parms.Context=Context;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UNotifyInterface_NotifyVictory = FName(TEXT("NotifyVictory"));
	void INotifyInterface::Execute_NotifyVictory(UObject* O, const AMyPlayerCharacter* Context)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UNotifyInterface::StaticClass()));
		NotifyInterface_eventNotifyVictory_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UNotifyInterface_NotifyVictory);
		if (Func)
		{
			Parms.Context=Context;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
