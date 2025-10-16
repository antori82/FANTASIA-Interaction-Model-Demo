// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniverseLiveLinkSourceSettings.h"

#ifdef OMNIVERSELIVELINK_OmniverseLiveLinkSourceSettings_generated_h
#error "OmniverseLiveLinkSourceSettings.generated.h already included, missing '#pragma once' in OmniverseLiveLinkSourceSettings.h"
#endif
#define OMNIVERSELIVELINK_OmniverseLiveLinkSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOmniverseLiveLinkSourceSettings *****************************************
OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister();

#define FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOmniverseLiveLinkSourceSettings(); \
	friend struct Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNIVERSELIVELINK_API UClass* Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOmniverseLiveLinkSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OmniverseLiveLink"), Z_Construct_UClass_UOmniverseLiveLinkSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(UOmniverseLiveLinkSourceSettings)


#define FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOmniverseLiveLinkSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOmniverseLiveLinkSourceSettings(UOmniverseLiveLinkSourceSettings&&) = delete; \
	UOmniverseLiveLinkSourceSettings(const UOmniverseLiveLinkSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOmniverseLiveLinkSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOmniverseLiveLinkSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOmniverseLiveLinkSourceSettings) \
	NO_API virtual ~UOmniverseLiveLinkSourceSettings();


#define FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_16_PROLOG
#define FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOmniverseLiveLinkSourceSettings;

// ********** End Class UOmniverseLiveLinkSourceSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FANTASIATemplate_Plugins_ACE_Source_OmniverseLiveLink_Public_OmniverseLiveLinkSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
