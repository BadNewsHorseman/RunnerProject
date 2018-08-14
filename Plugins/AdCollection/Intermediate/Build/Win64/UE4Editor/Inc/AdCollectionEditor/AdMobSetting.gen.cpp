// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdCollectionEditor/Public/AdCollectionEditor.h"
#include "AdCollectionEditor/Private/AdMobSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdMobSetting() {}
// Cross Module References
	ADCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UAdMobSetting_NoRegister();
	ADCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UAdMobSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdCollectionEditor();
// End Cross Module References
	void UAdMobSetting::StaticRegisterNativesUAdMobSetting()
	{
	}
	UClass* Z_Construct_UClass_UAdMobSetting_NoRegister()
	{
		return UAdMobSetting::StaticClass();
	}
	struct Z_Construct_UClass_UAdMobSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSRewardedVideoAdUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSRewardedVideoAdUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSInterstitialUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSInterstitialUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSBannerUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSBannerUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIOSEnabled_MetaData[];
#endif
		static void NewProp_bIOSEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIOSEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidRewardedVideoAdUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidRewardedVideoAdUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidInterstitialUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidInterstitialUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidBannerUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidBannerUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAndroidEnabled_MetaData[];
#endif
		static void NewProp_bAndroidEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAndroidEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdMobSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollectionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdMobSetting.h" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSRewardedVideoAdUnit_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS RewardVideo AdUnit" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the admob ios rewardedvideo adunit" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSRewardedVideoAdUnit = { UE4CodeGen_Private::EPropertyClass::Str, "IOSRewardedVideoAdUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, IOSRewardedVideoAdUnit), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSRewardedVideoAdUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSRewardedVideoAdUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSInterstitialUnit_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS Interstitial AdUnit" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the admob ios interstitial adunit" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSInterstitialUnit = { UE4CodeGen_Private::EPropertyClass::Str, "IOSInterstitialUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, IOSInterstitialUnit), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSInterstitialUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSInterstitialUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSBannerUnit_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS Banner AdUnit" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the admob ios banner adunit" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSBannerUnit = { UE4CodeGen_Private::EPropertyClass::Str, "IOSBannerUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, IOSBannerUnit), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSBannerUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSBannerUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSAppId_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS AppID" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the admob ios app id" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSAppId = { UE4CodeGen_Private::EPropertyClass::Str, "IOSAppId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, IOSAppId), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSAppId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "If AdMob IOS Enable" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "if the ios admob enable" },
	};
#endif
	void Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled_SetBit(void* Obj)
	{
		((UAdMobSetting*)Obj)->bIOSEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIOSEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdMobSetting), &Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android RewardVideo AdUnit" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the rewardedvideo adunit" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidRewardedVideoAdUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, AndroidRewardedVideoAdUnit), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidInterstitialUnit_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android Interstitial AdUnit" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the interstitial adunit" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidInterstitialUnit = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidInterstitialUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, AndroidInterstitialUnit), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidInterstitialUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidInterstitialUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidBannerUnit_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android Banner AdUnit" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the banner adunit" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidBannerUnit = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidBannerUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, AndroidBannerUnit), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidBannerUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidBannerUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidAppId_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android AppID" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "the android admob appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidAppId = { UE4CodeGen_Private::EPropertyClass::Str, "AndroidAppId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UAdMobSetting, AndroidAppId), METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidAppId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "If AdMob Android Enable" },
		{ "ModuleRelativePath", "Private/AdMobSetting.h" },
		{ "ToolTip", "if the android admob enable" },
	};
#endif
	void Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled_SetBit(void* Obj)
	{
		((UAdMobSetting*)Obj)->bAndroidEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bAndroidEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdMobSetting), &Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdMobSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSRewardedVideoAdUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSInterstitialUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSBannerUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_IOSAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bIOSEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidInterstitialUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidBannerUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_AndroidAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdMobSetting_Statics::NewProp_bAndroidEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdMobSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdMobSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdMobSetting_Statics::ClassParams = {
		&UAdMobSetting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000ACu,
		nullptr, 0,
		Z_Construct_UClass_UAdMobSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdMobSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdMobSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdMobSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdMobSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdMobSetting, 342179432);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdMobSetting(Z_Construct_UClass_UAdMobSetting, &UAdMobSetting::StaticClass, TEXT("/Script/AdCollectionEditor"), TEXT("UAdMobSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdMobSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
