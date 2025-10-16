// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniverseLiveLinkSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOmniverseLiveLinkSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory();
OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_OmniverseLiveLink();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOmniverseLiveLinkSourceFactory ******************************************
void UOmniverseLiveLinkSourceFactory::StaticRegisterNativesUOmniverseLiveLinkSourceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory;
UClass* UOmniverseLiveLinkSourceFactory::GetPrivateStaticClass()
{
	using TClass = UOmniverseLiveLinkSourceFactory;
	if (!Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OmniverseLiveLinkSourceFactory"),
			Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory.InnerSingleton,
			StaticRegisterNativesUOmniverseLiveLinkSourceFactory,
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
	return Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_NoRegister()
{
	return UOmniverseLiveLinkSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OmniverseLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/OmniverseLiveLinkSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniverseLiveLinkSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniverseLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::ClassParams = {
	&UOmniverseLiveLinkSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory()
{
	if (!Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory.OuterSingleton;
}
UOmniverseLiveLinkSourceFactory::UOmniverseLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOmniverseLiveLinkSourceFactory);
UOmniverseLiveLinkSourceFactory::~UOmniverseLiveLinkSourceFactory() {}
// ********** End Class UOmniverseLiveLinkSourceFactory ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h__Script_OmniverseLiveLink_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmniverseLiveLinkSourceFactory, UOmniverseLiveLinkSourceFactory::StaticClass, TEXT("UOmniverseLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniverseLiveLinkSourceFactory), 2883432986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h__Script_OmniverseLiveLink_4049311950(TEXT("/Script/OmniverseLiveLink"),
	Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h__Script_OmniverseLiveLink_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h__Script_OmniverseLiveLink_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
