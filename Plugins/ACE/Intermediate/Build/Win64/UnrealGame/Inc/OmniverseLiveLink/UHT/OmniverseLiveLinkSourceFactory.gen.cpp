// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniverseLiveLink/Private/OmniverseLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmniverseLiveLinkSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory();
	OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OmniverseLiveLink();
// End Cross Module References
	void UOmniverseLiveLinkSourceFactory::StaticRegisterNativesUOmniverseLiveLinkSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOmniverseLiveLinkSourceFactory);
	UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_NoRegister()
	{
		return UOmniverseLiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OmniverseLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OmniverseLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/OmniverseLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOmniverseLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniverseLiveLinkSourceFactory>::IsAbstract,
	};
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
	template<> OMNIVERSELIVELINK_API UClass* StaticClass<UOmniverseLiveLinkSourceFactory>()
	{
		return UOmniverseLiveLinkSourceFactory::StaticClass();
	}
	UOmniverseLiveLinkSourceFactory::UOmniverseLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOmniverseLiveLinkSourceFactory);
	UOmniverseLiveLinkSourceFactory::~UOmniverseLiveLinkSourceFactory() {}
	struct Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOmniverseLiveLinkSourceFactory, UOmniverseLiveLinkSourceFactory::StaticClass, TEXT("UOmniverseLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UOmniverseLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniverseLiveLinkSourceFactory), 244276230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h_963652928(TEXT("/Script/OmniverseLiveLink"),
		Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__stage_Plugins_ACE_HostProject_Plugins_OmniverseLiveLink_Source_OmniverseLiveLink_Private_OmniverseLiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
