// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdCollectionEditor/Public/AdCollectionEditor.h"
#include "AdCollectionEditor/Private/ChartBoostSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChartBoostSetting() {}
// Cross Module References
	ADCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UChartBoostSetting_NoRegister();
	ADCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UChartBoostSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdCollectionEditor();
// End Cross Module References
	void UChartBoostSetting::StaticRegisterNativesUChartBoostSetting()
	{
	}
	UClass* Z_Construct_UClass_UChartBoostSetting_NoRegister()
	{
		return UChartBoostSetting::StaticClass();
	}
	struct Z_Construct_UClass_UChartBoostSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSSignature;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidSignature;
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
	UObject* (*const Z_Construct_UClass_UChartBoostSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollectionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChartBoostSetting.h" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSSignature_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS Signature" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
		{ "ToolTip", "the ios chartboost signature" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSSignature = { UE4CodeGen_Private::EPropertyClass::Str, "IOSSignature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UChartBoostSetting, IOSSignature), METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSSignature_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSAppId_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS AppID" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
		{ "ToolTip", "the ios chartboost appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSAppId = { UE4CodeGen_Private::EPropertyClass::Str, "IOSAppId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UChartBoostSetting, IOSAppId), METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSAppId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "If IOS Enable" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
		{ "ToolTip", "if the ios chartboost enable" },
	};
#endif
	void Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled_SetBit(void* Obj)
	{
		((UChartBoostSetting*)Obj)->bIsIOSEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsIOSEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UChartBoostSetting), &Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidSignature_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android Signature" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
		{ "ToolTip", "the android app signature" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidSignature = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidSignature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UChartBoostSetting, AndroidSignature), METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidSignature_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidAppId_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android AppID" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
		{ "ToolTip", "the android chartboost appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidAppId = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidAppId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UChartBoostSetting, AndroidAppId), METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidAppId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "If Android Enable" },
		{ "ModuleRelativePath", "Private/ChartBoostSetting.h" },
		{ "ToolTip", "if the android chartboost enable" },
	};
#endif
	void Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled_SetBit(void* Obj)
	{
		((UChartBoostSetting*)Obj)->bIsAndroidEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAndroidEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UChartBoostSetting), &Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChartBoostSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_IOSAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsIOSEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_AndroidAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChartBoostSetting_Statics::NewProp_bIsAndroidEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChartBoostSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChartBoostSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChartBoostSetting_Statics::ClassParams = {
		&UChartBoostSetting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000ACu,
		nullptr, 0,
		Z_Construct_UClass_UChartBoostSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UChartBoostSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChartBoostSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChartBoostSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChartBoostSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChartBoostSetting, 590105491);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChartBoostSetting(Z_Construct_UClass_UChartBoostSetting, &UChartBoostSetting::StaticClass, TEXT("/Script/AdCollectionEditor"), TEXT("UChartBoostSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChartBoostSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
