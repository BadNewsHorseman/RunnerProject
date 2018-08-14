// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAdType : uint8;
class UPlayRewardVideoCallbackProxy;
#ifdef ADCOLLECTION_PlayRewardVideoCallbackProxy_generated_h
#error "PlayRewardVideoCallbackProxy.generated.h already included, missing '#pragma once' in PlayRewardVideoCallbackProxy.h"
#endif
#define ADCOLLECTION_PlayRewardVideoCallbackProxy_generated_h

#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayRewardedVideo) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_AdType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlayRewardVideoCallbackProxy**)Z_Param__Result=UPlayRewardVideoCallbackProxy::PlayRewardedVideo(EAdType(Z_Param_AdType)); \
		P_NATIVE_END; \
	}


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayRewardedVideo) \
	{ \
		P_GET_ENUM(EAdType,Z_Param_AdType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlayRewardVideoCallbackProxy**)Z_Param__Result=UPlayRewardVideoCallbackProxy::PlayRewardedVideo(EAdType(Z_Param_AdType)); \
		P_NATIVE_END; \
	}


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayRewardVideoCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayRewardVideoCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdCollection"), ADCOLLECTION_API) \
	DECLARE_SERIALIZER(UPlayRewardVideoCallbackProxy)


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPlayRewardVideoCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayRewardVideoCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayRewardVideoCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdCollection"), ADCOLLECTION_API) \
	DECLARE_SERIALIZER(UPlayRewardVideoCallbackProxy)


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADCOLLECTION_API UPlayRewardVideoCallbackProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayRewardVideoCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADCOLLECTION_API, UPlayRewardVideoCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayRewardVideoCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADCOLLECTION_API UPlayRewardVideoCallbackProxy(UPlayRewardVideoCallbackProxy&&); \
	ADCOLLECTION_API UPlayRewardVideoCallbackProxy(const UPlayRewardVideoCallbackProxy&); \
public:


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADCOLLECTION_API UPlayRewardVideoCallbackProxy(UPlayRewardVideoCallbackProxy&&); \
	ADCOLLECTION_API UPlayRewardVideoCallbackProxy(const UPlayRewardVideoCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADCOLLECTION_API, UPlayRewardVideoCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayRewardVideoCallbackProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayRewardVideoCallbackProxy)


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_PRIVATE_PROPERTY_OFFSET
#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_17_PROLOG
#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_RPC_WRAPPERS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_INCLASS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_INCLASS_NO_PURE_DECLS \
	ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectRunner_Plugins_AdCollection_Source_AdCollection_Public_PlayRewardVideoCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
