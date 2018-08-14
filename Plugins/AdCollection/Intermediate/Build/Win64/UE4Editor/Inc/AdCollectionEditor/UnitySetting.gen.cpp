// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdCollectionEditor/Public/AdCollectionEditor.h"
#include "AdCollectionEditor/Private/UnitySetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitySetting() {}
// Cross Module References
	ADCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UUnitySetting_NoRegister();
	ADCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UUnitySetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdCollectionEditor();
// End Cross Module References
	void UUnitySetting::StaticRegisterNativesUUnitySetting()
	{
	}
	UClass* Z_Construct_UClass_UUnitySetting_NoRegister()
	{
		return UUnitySetting::StaticClass();
	}
	struct Z_Construct_UClass_UUnitySetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIOSEnabled_MetaData[];
#endif
		static void NewProp_bIsIOSEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIOSEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAndroidEnabled_MetaData[];
#endif
		static void NewProp_bIsAndroidEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAndroidEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitySetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollectionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitySetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnitySetting.h" },
		{ "ModuleRelativePath", "Private/UnitySetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitySetting_Statics::NewProp_IOSAppId_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Unity IOS AppID" },
		{ "ModuleRelativePath", "Private/UnitySetting.h" },
		{ "ToolTip", "the ios unity appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnitySetting_Statics::NewProp_IOSAppId = { UE4CodeGen_Private::EPropertyClass::Str, "IOSAppId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UUnitySetting, IOSAppId), METADATA_PARAMS(Z_Construct_UClass_UUnitySetting_Statics::NewProp_IOSAppId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnitySetting_Statics::NewProp_IOSAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "If Is Unity IOS Enable" },
		{ "ModuleRelativePath", "Private/UnitySetting.h" },
		{ "ToolTip", "if the ios unity ads enable" },
	};
#endif
	void Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled_SetBit(void* Obj)
	{
		((UUnitySetting*)Obj)->bIsIOSEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsIOSEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UUnitySetting), &Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitySetting_Statics::NewProp_AndroidAppId_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Unity Android AppID" },
		{ "ModuleRelativePath", "Private/UnitySetting.h" },
		{ "ToolTip", "the android unity appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnitySetting_Statics::NewProp_AndroidAppId = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidAppId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UUnitySetting, AndroidAppId), METADATA_PARAMS(Z_Construct_UClass_UUnitySetting_Statics::NewProp_AndroidAppId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnitySetting_Statics::NewProp_AndroidAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "If Is Unity Android Enable" },
		{ "ModuleRelativePath", "Private/UnitySetting.h" },
		{ "ToolTip", "if the android unity ads enable" },
	};
#endif
	void Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled_SetBit(void* Obj)
	{
		((UUnitySetting*)Obj)->bIsAndroidEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAndroidEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UUnitySetting), &Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitySetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitySetting_Statics::NewProp_IOSAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsIOSEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitySetting_Statics::NewProp_AndroidAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitySetting_Statics::NewProp_bIsAndroidEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitySetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitySetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnitySetting_Statics::ClassParams = {
		&UUnitySetting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000ACu,
		nullptr, 0,
		Z_Construct_UClass_UUnitySetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUnitySetting_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUnitySetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnitySetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitySetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnitySetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnitySetting, 1032675647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnitySetting(Z_Construct_UClass_UUnitySetting, &UUnitySetting::StaticClass, TEXT("/Script/AdCollectionEditor"), TEXT("UUnitySetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitySetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
