// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdCollection/Public/AdCollection.h"
#include "AdCollection/Public/AdCollectionBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdCollectionBPLibrary() {}
// Cross Module References
	ADCOLLECTION_API UFunction* Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdCollection();
	ADCOLLECTION_API UScriptStruct* Z_Construct_UScriptStruct_FRewardedStatus();
	ADCOLLECTION_API UEnum* Z_Construct_UEnum_AdCollection_EAdType();
	ADCOLLECTION_API UScriptStruct* Z_Construct_UScriptStruct_FAdMobRewardItem();
	ADCOLLECTION_API UClass* Z_Construct_UClass_UAdCollectionBPLibrary_NoRegister();
	ADCOLLECTION_API UClass* Z_Construct_UClass_UAdCollectionBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics
	{
		struct _Script_AdCollection_eventPlayRewardedDelegate_Parms
		{
			FRewardedStatus RewardStatus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::NewProp_RewardStatus = { UE4CodeGen_Private::EPropertyClass::Struct, "RewardStatus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdCollection_eventPlayRewardedDelegate_Parms, RewardStatus), Z_Construct_UScriptStruct_FRewardedStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::NewProp_RewardStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdCollection, "PlayRewardedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdCollection_eventPlayRewardedDelegate_Parms), Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAdType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdCollection_EAdType, Z_Construct_UPackage__Script_AdCollection(), TEXT("EAdType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdType(EAdType_StaticEnum, TEXT("/Script/AdCollection"), TEXT("EAdType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdCollection_EAdType_CRC() { return 2794578612U; }
	UEnum* Z_Construct_UEnum_AdCollection_EAdType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdCollection();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdType"), 0, Get_Z_Construct_UEnum_AdCollection_EAdType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdType::AdMob", (int64)EAdType::AdMob },
				{ "EAdType::Unity", (int64)EAdType::Unity },
				{ "EAdType::ChartBoost", (int64)EAdType::ChartBoost },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AdMob.DisplayName", "AdMob" },
				{ "BlueprintType", "true" },
				{ "ChartBoost.DisplayName", "ChartBoost" },
				{ "ChartBoost.ToolTip", "the unity ads type" },
				{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
				{ "Unity.DisplayName", "Unity" },
				{ "Unity.ToolTip", "the admob ads type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdCollection,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAdType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAdType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRewardedStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADCOLLECTION_API uint32 Get_Z_Construct_UScriptStruct_FRewardedStatus_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardedStatus, Z_Construct_UPackage__Script_AdCollection(), TEXT("RewardedStatus"), sizeof(FRewardedStatus), Get_Z_Construct_UScriptStruct_FRewardedStatus_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardedStatus(FRewardedStatus::StaticStruct, TEXT("/Script/AdCollection"), TEXT("RewardedStatus"), false, nullptr, nullptr);
static struct FScriptStruct_AdCollection_StaticRegisterNativesFRewardedStatus
{
	FScriptStruct_AdCollection_StaticRegisterNativesFRewardedStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RewardedStatus")),new UScriptStruct::TCppStructOps<FRewardedStatus>);
	}
} ScriptStruct_AdCollection_StaticRegisterNativesFRewardedStatus;
	struct Z_Construct_UScriptStruct_FRewardedStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartBoostReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChartBoostReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdMobItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdMobItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardedStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardedStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_ChartBoostReward_MetaData[] = {
		{ "Category", "RewardedStatus" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "if the AdType is ChartBoost the value is the reward value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_ChartBoostReward = { UE4CodeGen_Private::EPropertyClass::Int, "ChartBoostReward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FRewardedStatus, ChartBoostReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_ChartBoostReward_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_ChartBoostReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdMobItem_MetaData[] = {
		{ "Category", "RewardedStatus" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "if the AdType is AdMob, the AdmobItem is valid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdMobItem = { UE4CodeGen_Private::EPropertyClass::Struct, "AdMobItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FRewardedStatus, AdMobItem), Z_Construct_UScriptStruct_FAdMobRewardItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdMobItem_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdMobItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType_MetaData[] = {
		{ "Category", "RewardedStatus" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "the rewarded ads type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType = { UE4CodeGen_Private::EPropertyClass::Enum, "AdType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FRewardedStatus, AdType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardedStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_ChartBoostReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdMobItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardedStatus_Statics::NewProp_AdType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardedStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollection,
		nullptr,
		&NewStructOps,
		"RewardedStatus",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRewardedStatus),
		alignof(FRewardedStatus),
		Z_Construct_UScriptStruct_FRewardedStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardedStatus_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardedStatus_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardedStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardedStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardedStatus_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdCollection();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardedStatus"), sizeof(FRewardedStatus), Get_Z_Construct_UScriptStruct_FRewardedStatus_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardedStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardedStatus_CRC() { return 2080747894U; }
class UScriptStruct* FAdMobRewardItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADCOLLECTION_API uint32 Get_Z_Construct_UScriptStruct_FAdMobRewardItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdMobRewardItem, Z_Construct_UPackage__Script_AdCollection(), TEXT("AdMobRewardItem"), sizeof(FAdMobRewardItem), Get_Z_Construct_UScriptStruct_FAdMobRewardItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdMobRewardItem(FAdMobRewardItem::StaticStruct, TEXT("/Script/AdCollection"), TEXT("AdMobRewardItem"), false, nullptr, nullptr);
static struct FScriptStruct_AdCollection_StaticRegisterNativesFAdMobRewardItem
{
	FScriptStruct_AdCollection_StaticRegisterNativesFAdMobRewardItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdMobRewardItem")),new UScriptStruct::TCppStructOps<FAdMobRewardItem>);
	}
} ScriptStruct_AdCollection_StaticRegisterNativesFAdMobRewardItem;
	struct Z_Construct_UScriptStruct_FAdMobRewardItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdMobRewardItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "AdMobRewardItem" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "the admob rewarded item value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAdMobRewardItem, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "AdMobRewardItem" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "the admob rewarded item type" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Str, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAdMobRewardItem, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollection,
		nullptr,
		&NewStructOps,
		"AdMobRewardItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAdMobRewardItem),
		alignof(FAdMobRewardItem),
		Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdMobRewardItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdMobRewardItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdCollection();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdMobRewardItem"), sizeof(FAdMobRewardItem), Get_Z_Construct_UScriptStruct_FAdMobRewardItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdMobRewardItem_CRC() { return 3911038341U; }
	void UAdCollectionBPLibrary::StaticRegisterNativesUAdCollectionBPLibrary()
	{
		UClass* Class = UAdCollectionBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideBanner", &UAdCollectionBPLibrary::execHideBanner },
			{ "IsBannerReady", &UAdCollectionBPLibrary::execIsBannerReady },
			{ "IsInterstitialReady", &UAdCollectionBPLibrary::execIsInterstitialReady },
			{ "IsRewardedVideoReady", &UAdCollectionBPLibrary::execIsRewardedVideoReady },
			{ "PlayAdVideo", &UAdCollectionBPLibrary::execPlayAdVideo },
			{ "ShowBanner", &UAdCollectionBPLibrary::execShowBanner },
			{ "ShowInterstitial", &UAdCollectionBPLibrary::execShowInterstitial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics
	{
		struct AdCollectionBPLibrary_eventHideBanner_Parms
		{
			EAdType adType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventHideBanner_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "HideBanner" },
		{ "Keywords", "AdCollection Hide Banner" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "hide  banner\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "HideBanner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdCollectionBPLibrary_eventHideBanner_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics
	{
		struct AdCollectionBPLibrary_eventIsBannerReady_Parms
		{
			EAdType adType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdCollectionBPLibrary_eventIsBannerReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdCollectionBPLibrary_eventIsBannerReady_Parms), &Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventIsBannerReady_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "IsBannerAdsReady" },
		{ "Keywords", "AdCollection Check Banner Ads Ready" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "check is the banner is load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "IsBannerReady", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AdCollectionBPLibrary_eventIsBannerReady_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics
	{
		struct AdCollectionBPLibrary_eventIsInterstitialReady_Parms
		{
			EAdType adType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdCollectionBPLibrary_eventIsInterstitialReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdCollectionBPLibrary_eventIsInterstitialReady_Parms), &Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventIsInterstitialReady_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "IsInterstitialAdsReady" },
		{ "Keywords", "AdCollection Check Interstital Ads Ready" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "check is the interstitial is load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "IsInterstitialReady", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AdCollectionBPLibrary_eventIsInterstitialReady_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics
	{
		struct AdCollectionBPLibrary_eventIsRewardedVideoReady_Parms
		{
			EAdType adType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdCollectionBPLibrary_eventIsRewardedVideoReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdCollectionBPLibrary_eventIsRewardedVideoReady_Parms), &Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventIsRewardedVideoReady_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "IsRewardedVideoAdsReady" },
		{ "Keywords", "AdCollection Check RewardedVideo Ads Ready" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "check is the rewardedvideo ads load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "IsRewardedVideoReady", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AdCollectionBPLibrary_eventIsRewardedVideoReady_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics
	{
		struct AdCollectionBPLibrary_eventPlayAdVideo_Parms
		{
			EAdType adType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventPlayAdVideo_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "SimplePlayRewardedVideo" },
		{ "Keywords", "AdCollection Play" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "play rewardedvideo ads\n@param        adType                  the ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "PlayAdVideo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdCollectionBPLibrary_eventPlayAdVideo_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics
	{
		struct AdCollectionBPLibrary_eventShowBanner_Parms
		{
			EAdType adType;
			bool isOnBottom;
		};
		static void NewProp_isOnBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnBottom;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_isOnBottom_SetBit(void* Obj)
	{
		((AdCollectionBPLibrary_eventShowBanner_Parms*)Obj)->isOnBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_isOnBottom = { UE4CodeGen_Private::EPropertyClass::Bool, "isOnBottom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdCollectionBPLibrary_eventShowBanner_Parms), &Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_isOnBottom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventShowBanner_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_isOnBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "ShowBanner" },
		{ "Keywords", "AdCollection Show Banner" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "Show  banner\n@param        isOnBottom              if the banner show on the bottom of the screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "ShowBanner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdCollectionBPLibrary_eventShowBanner_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics
	{
		struct AdCollectionBPLibrary_eventShowInterstitial_Parms
		{
			EAdType adType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::NewProp_adType = { UE4CodeGen_Private::EPropertyClass::Enum, "adType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdCollectionBPLibrary_eventShowInterstitial_Parms, adType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::NewProp_adType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::NewProp_adType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdCollection" },
		{ "DisplayName", "ShowInterstitial" },
		{ "Keywords", "AdCollection Show Interstitial Ads" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
		{ "ToolTip", "show interstitial ads\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdCollectionBPLibrary, "ShowInterstitial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdCollectionBPLibrary_eventShowInterstitial_Parms), Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdCollectionBPLibrary_NoRegister()
	{
		return UAdCollectionBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdCollectionBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdCollectionBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdCollectionBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_HideBanner, "HideBanner" }, // 3013933794
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_IsBannerReady, "IsBannerReady" }, // 4165240628
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_IsInterstitialReady, "IsInterstitialReady" }, // 1754112554
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_IsRewardedVideoReady, "IsRewardedVideoReady" }, // 3131074517
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_PlayAdVideo, "PlayAdVideo" }, // 2782563203
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_ShowBanner, "ShowBanner" }, // 1246248468
		{ &Z_Construct_UFunction_UAdCollectionBPLibrary_ShowInterstitial, "ShowInterstitial" }, // 4073329119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdCollectionBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdCollectionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AdCollectionBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdCollectionBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdCollectionBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdCollectionBPLibrary_Statics::ClassParams = {
		&UAdCollectionBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdCollectionBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdCollectionBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdCollectionBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdCollectionBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdCollectionBPLibrary, 2238099748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdCollectionBPLibrary(Z_Construct_UClass_UAdCollectionBPLibrary, &UAdCollectionBPLibrary::StaticClass, TEXT("/Script/AdCollection"), TEXT("UAdCollectionBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdCollectionBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
