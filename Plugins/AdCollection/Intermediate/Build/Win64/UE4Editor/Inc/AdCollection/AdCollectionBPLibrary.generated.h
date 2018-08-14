// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRewardedStatus;
enum class EAdType : uint8;
#ifdef ADCOLLECTION_AdCollectionBPLibrary_generated_h
#error "AdCollectionBPLibrary.generated.h already included, missing '#pragma once' in AdCollectionBPLibrary.h"
#endif
#define ADCOLLECTION_AdCollectionBPLibrary_generated_h

#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRewardedStatus_Statics; \
	ADCOLLECTION_API static class UScriptStruct* StaticStruct();


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdMobRewardItem_Statics; \
	ADCOLLECTION_API static class UScriptStruct* StaticStruct();


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_55_DELEGATE \
struct _Script_AdCollection_eventPlayRewardedDelegate_Parms \
{ \
	FRewardedStatus RewardStatus; \
}; \
static inline void FPlayRewardedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayRewardedDelegate, FRewardedStatus RewardStatus) \
{ \
	_Script_AdCollection_eventPlayRewardedDelegate_Parms Parms; \
	Parms.RewardStatus=RewardStatus; \
	PlayRewardedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRewardedVideoReady) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdCollectionBPLibrary::IsRewardedVideoReady(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialReady) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdCollectionBPLibrary::IsInterstitialReady(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBannerReady) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdCollectionBPLibrary::IsBannerReady(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInterstitial) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::ShowInterstitial(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideBanner) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::HideBanner(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBanner) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_GET_UBOOL(Z_Param_isOnBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::ShowBanner(EAdType(Z_Param_adType),Z_Param_isOnBottom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAdVideo) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::PlayAdVideo(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	}


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRewardedVideoReady) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdCollectionBPLibrary::IsRewardedVideoReady(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialReady) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdCollectionBPLibrary::IsInterstitialReady(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBannerReady) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdCollectionBPLibrary::IsBannerReady(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInterstitial) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::ShowInterstitial(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideBanner) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::HideBanner(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBanner) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_GET_UBOOL(Z_Param_isOnBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::ShowBanner(EAdType(Z_Param_adType),Z_Param_isOnBottom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAdVideo) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_adType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdCollectionBPLibrary::PlayAdVideo(EAdType(Z_Param_adType)); \
		P_NATIVE_END; \
	}


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdCollectionBPLibrary(); \
	friend struct Z_Construct_UClass_UAdCollectionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdCollectionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdCollection"), NO_API) \
	DECLARE_SERIALIZER(UAdCollectionBPLibrary)


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUAdCollectionBPLibrary(); \
	friend struct Z_Construct_UClass_UAdCollectionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdCollectionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdCollection"), NO_API) \
	DECLARE_SERIALIZER(UAdCollectionBPLibrary)


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdCollectionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdCollectionBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdCollectionBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdCollectionBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdCollectionBPLibrary(UAdCollectionBPLibrary&&); \
	NO_API UAdCollectionBPLibrary(const UAdCollectionBPLibrary&); \
public:


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdCollectionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdCollectionBPLibrary(UAdCollectionBPLibrary&&); \
	NO_API UAdCollectionBPLibrary(const UAdCollectionBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdCollectionBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdCollectionBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdCollectionBPLibrary)


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_PRIVATE_PROPERTY_OFFSET
#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_57_PROLOG
#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_PRIVATE_PROPERTY_OFFSET \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_RPC_WRAPPERS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_INCLASS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_PRIVATE_PROPERTY_OFFSET \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_INCLASS_NO_PURE_DECLS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h_60_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AdCollectionBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_AdCollectionBPLibrary_h


#define FOREACH_ENUM_EADTYPE(op) \
	op(EAdType::AdMob) \
	op(EAdType::Unity) \
	op(EAdType::ChartBoost) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
