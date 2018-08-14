// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdCollection/Public/AdCollection.h"
#include "AdCollection/Public/PlayRewardVideoCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayRewardVideoCallbackProxy() {}
// Cross Module References
	ADCOLLECTION_API UClass* Z_Construct_UClass_UPlayRewardVideoCallbackProxy_NoRegister();
	ADCOLLECTION_API UClass* Z_Construct_UClass_UPlayRewardVideoCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AdCollection();
	ADCOLLECTION_API UFunction* Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo();
	ADCOLLECTION_API UEnum* Z_Construct_UEnum_AdCollection_EAdType();
	ADCOLLECTION_API UFunction* Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature();
// End Cross Module References
	void UPlayRewardVideoCallbackProxy::StaticRegisterNativesUPlayRewardVideoCallbackProxy()
	{
		UClass* Class = UPlayRewardVideoCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayRewardedVideo", &UPlayRewardVideoCallbackProxy::execPlayRewardedVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics
	{
		struct PlayRewardVideoCallbackProxy_eventPlayRewardedVideo_Parms
		{
			EAdType AdType;
			UPlayRewardVideoCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayRewardVideoCallbackProxy_eventPlayRewardedVideo_Parms, ReturnValue), Z_Construct_UClass_UPlayRewardVideoCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::NewProp_AdType = { UE4CodeGen_Private::EPropertyClass::Enum, "AdType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayRewardVideoCallbackProxy_eventPlayRewardedVideo_Parms, AdType), Z_Construct_UEnum_AdCollection_EAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::NewProp_AdType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::NewProp_AdType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::NewProp_AdType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AdCollection" },
		{ "DisplayName", "PlayRewardedVideo" },
		{ "ModuleRelativePath", "Public/PlayRewardVideoCallbackProxy.h" },
		{ "ToolTip", "play rewarded video ads\n@param        AdType          the type of the ads" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayRewardVideoCallbackProxy, "PlayRewardedVideo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PlayRewardVideoCallbackProxy_eventPlayRewardedVideo_Parms), Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayRewardVideoCallbackProxy_NoRegister()
	{
		return UPlayRewardVideoCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdCollection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayRewardVideoCallbackProxy_PlayRewardedVideo, "PlayRewardedVideo" }, // 3185251605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayRewardVideoCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/PlayRewardVideoCallbackProxy.h" },
		{ "ToolTip", "Async play rewarded video action, when play finished success, the OnSuccess will be called." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayRewardVideoCallbackProxy.h" },
		{ "ToolTip", "Called when the Rewarded video ads complete" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlayRewardVideoCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdCollection_PlayRewardedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayRewardVideoCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::ClassParams = {
		&UPlayRewardVideoCallbackProxy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayRewardVideoCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayRewardVideoCallbackProxy, 3717639757);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayRewardVideoCallbackProxy(Z_Construct_UClass_UPlayRewardVideoCallbackProxy, &UPlayRewardVideoCallbackProxy::StaticClass, TEXT("/Script/AdCollection"), TEXT("UPlayRewardVideoCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayRewardVideoCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
