// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniverseLiveLinkSourceSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOmniverseLiveLinkSourceSettings() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings();
OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OmniverseLiveLink();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOmniverseLiveLinkSourceSettings *****************************************
void UOmniverseLiveLinkSourceSettings::StaticRegisterNativesUOmniverseLiveLinkSourceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings;
UClass* UOmniverseLiveLinkSourceSettings::GetPrivateStaticClass()
{
	using TClass = UOmniverseLiveLinkSourceSettings;
	if (!Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OmniverseLiveLinkSourceSettings"),
			Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.InnerSingleton,
			StaticRegisterNativesUOmniverseLiveLinkSourceSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister()
{
	return UOmniverseLiveLinkSourceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class for Omniverse live link source settings */" },
#endif
		{ "IncludePath", "OmniverseLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/OmniverseLiveLinkSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class for Omniverse live link source settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDelayTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  Milliseconds delay to wait before playing blendshapes animation. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniverseLiveLinkSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Milliseconds delay to wait before playing blendshapes animation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDelayTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  Milliseconds delay to wait before playing audio. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniverseLiveLinkSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Milliseconds delay to wait before playing audio." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AnimationDelayTime;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioDelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniverseLiveLinkSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime = { "AnimationDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniverseLiveLinkSourceSettings, AnimationDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationDelayTime_MetaData), NewProp_AnimationDelayTime_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime = { "AudioDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniverseLiveLinkSourceSettings, AudioDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDelayTime_MetaData), NewProp_AudioDelayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AnimationDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::NewProp_AudioDelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniverseLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::DependentSingletons) < 16);
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
UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings()
{
	if (!Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings.OuterSingleton;
}
UOmniverseLiveLinkSourceSettings::UOmniverseLiveLinkSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOmniverseLiveLinkSourceSettings);
UOmniverseLiveLinkSourceSettings::~UOmniverseLiveLinkSourceSettings() {}
// ********** End Class UOmniverseLiveLinkSourceSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h__Script_OmniverseLiveLink_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmniverseLiveLinkSourceSettings, UOmniverseLiveLinkSourceSettings::StaticClass, TEXT("UOmniverseLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UOmniverseLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniverseLiveLinkSourceSettings), 1797838911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h__Script_OmniverseLiveLink_3120469893(TEXT("/Script/OmniverseLiveLink"),
	Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h__Script_OmniverseLiveLink_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h__Script_OmniverseLiveLink_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
