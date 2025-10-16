// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniverseLiveLink/Public/OmniverseLiveLinkSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmniverseLiveLinkSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings();
	OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OmniverseLiveLink();
// End Cross Module References
	void UOmniverseLiveLinkSourceSettings::StaticRegisterNativesUOmniverseLiveLinkSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOmniverseLiveLinkSourceSettings);
	UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister()
	{
		return UOmniverseLiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AnimationDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioDelayTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OmniverseLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class for Omniverse live link source settings */" },
		{ "IncludePath", "OmniverseLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/OmniverseLiveLinkSourceSettings.h" },
		{ "ToolTip", "Class for Omniverse live link source settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**  Milliseconds delay to wait before playing blendshapes animation. */" },
		{ "ModuleRelativePath", "Public/OmniverseLiveLinkSourceSettings.h" },
		{ "ToolTip", "Milliseconds delay to wait before playing blendshapes animation." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime = { "AnimationDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniverseLiveLinkSourceSettings, AnimationDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime_MetaData), Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**  Milliseconds delay to wait before playing audio. */" },
		{ "ModuleRelativePath", "Public/OmniverseLiveLinkSourceSettings.h" },
		{ "ToolTip", "Milliseconds delay to wait before playing audio." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime = { "AudioDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniverseLiveLinkSourceSettings, AudioDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime_MetaData), Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniverseLiveLinkSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::ClassParams = {
		&UOmniverseLiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.OuterSingleton;
	}
	template<> OMNIVERSELIVELINK_API UClass* StaticClass<UOmniverseLiveLinkSourceSettings>()
	{
		return UOmniverseLiveLinkSourceSettings::StaticClass();
	}
	UOmniverseLiveLinkSourceSettings::UOmniverseLiveLinkSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOmniverseLiveLinkSourceSettings);
	UOmniverseLiveLinkSourceSettings::~UOmniverseLiveLinkSourceSettings() {}
	struct Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOmniverseLiveLinkSourceSettings, UOmniverseLiveLinkSourceSettings::StaticClass, TEXT("UOmniverseLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniverseLiveLinkSourceSettings), 2198914332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_2467230201(TEXT("/Script/OmniverseLiveLink"),
		Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
