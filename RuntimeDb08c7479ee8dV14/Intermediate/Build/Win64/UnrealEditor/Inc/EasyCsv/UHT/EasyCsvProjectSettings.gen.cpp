// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCsvProjectSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEasyCsvProjectSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_EasyCsv(ETypeConstructPhase);
EASYCSV_API UClass* Z_Construct_UClass_UEasyCsvProjectSettings(ETypeConstructPhase);
EASYCSV_API UClass* Z_Construct_UClass_UEasyCsvProjectSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UEasyCsvProjectSettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEasyCsvProjectSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "EasyCsvProjectSettings.h" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogCharacterLimit_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * The number of characters that can be printed in any given print. -1 means no limit.\n\x09 * This is useful when printing responses which can be enormous with very large sheets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "The number of characters that can be printed in any given print. -1 means no limit.\nThis is useful when printing responses which can be enormous with very large sheets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintDisplayMessagesToLog_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * If true, \"Display\" type messages will be printed to the log. These will not display on screen.\n\x09 * \"Display\" type messages are informational messages most end users don't have much interest in seeing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "If true, \"Display\" type messages will be printed to the log. These will not display on screen.\n\"Display\" type messages are informational messages most end users don't have much interest in seeing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintDisplayMessagesToScreen_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * If true, \"Display\" type messages will be printed to the screen. These will not appear in the output log.\n\x09 * \"Display\" type messages are informational messages most end users don't have much interest in seeing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "If true, \"Display\" type messages will be printed to the screen. These will not appear in the output log.\n\"Display\" type messages are informational messages most end users don't have much interest in seeing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMessagesOnScreenLifetime_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintWarningMessagesToLog_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * If true, \"Warning\" type messages will be printed to the log. These will not display on screen.\n\x09 * \"Warning\" type messages are important to most end users, but warnings are not fatal.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "If true, \"Warning\" type messages will be printed to the log. These will not display on screen.\n\"Warning\" type messages are important to most end users, but warnings are not fatal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintWarningMessagesToScreen_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * If true, \"Warning\" type messages will be printed to the screen. These will not appear in the output log.\n\x09 * \"Warning\" type messages are important to most end users, but warnings are not fatal.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "If true, \"Warning\" type messages will be printed to the screen. These will not appear in the output log.\n\"Warning\" type messages are important to most end users, but warnings are not fatal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningMessagesOnScreenLifetime_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintErrorMessagesToLog_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * If true, \"Error\" type messages will be printed to the log. These will not display on screen.\n\x09 * \"Error\" type messages are very important to the end user as they explain fatal issues.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "If true, \"Error\" type messages will be printed to the log. These will not display on screen.\n\"Error\" type messages are very important to the end user as they explain fatal issues." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintErrorMessagesToScreen_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "Comment", "/**\n\x09 * If true, \"Error\" type messages will be printed to the screen. These will not appear in the output log.\n\x09 * \"Error\" type messages are very important to the end user as they explain fatal issues.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
		{ "ToolTip", "If true, \"Error\" type messages will be printed to the screen. These will not appear in the output log.\n\"Error\" type messages are very important to the end user as they explain fatal issues." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessagesOnScreenLifetime_MetaData[] = {
		{ "Category", "easyCSV|Logging" },
		{ "ModuleRelativePath", "Public/EasyCsvProjectSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEasyCsvProjectSettings constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogCharacterLimit;
	static void NewProp_bPrintDisplayMessagesToLog_SetBit(void* Obj)
	{
		((UEasyCsvProjectSettings*)Obj)->bPrintDisplayMessagesToLog = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintDisplayMessagesToLog;
	static void NewProp_bPrintDisplayMessagesToScreen_SetBit(void* Obj)
	{
		((UEasyCsvProjectSettings*)Obj)->bPrintDisplayMessagesToScreen = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintDisplayMessagesToScreen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayMessagesOnScreenLifetime;
	static void NewProp_bPrintWarningMessagesToLog_SetBit(void* Obj)
	{
		((UEasyCsvProjectSettings*)Obj)->bPrintWarningMessagesToLog = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintWarningMessagesToLog;
	static void NewProp_bPrintWarningMessagesToScreen_SetBit(void* Obj)
	{
		((UEasyCsvProjectSettings*)Obj)->bPrintWarningMessagesToScreen = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintWarningMessagesToScreen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarningMessagesOnScreenLifetime;
	static void NewProp_bPrintErrorMessagesToLog_SetBit(void* Obj)
	{
		((UEasyCsvProjectSettings*)Obj)->bPrintErrorMessagesToLog = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintErrorMessagesToLog;
	static void NewProp_bPrintErrorMessagesToScreen_SetBit(void* Obj)
	{
		((UEasyCsvProjectSettings*)Obj)->bPrintErrorMessagesToScreen = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintErrorMessagesToScreen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorMessagesOnScreenLifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEasyCsvProjectSettings constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyCsvProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEasyCsvProjectSettings Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LogCharacterLimit = { "LogCharacterLimit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyCsvProjectSettings, LogCharacterLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogCharacterLimit_MetaData), NewProp_LogCharacterLimit_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrintDisplayMessagesToLog = { "bPrintDisplayMessagesToLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyCsvProjectSettings), &UHT_STATICS::NewProp_bPrintDisplayMessagesToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintDisplayMessagesToLog_MetaData), NewProp_bPrintDisplayMessagesToLog_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrintDisplayMessagesToScreen = { "bPrintDisplayMessagesToScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyCsvProjectSettings), &UHT_STATICS::NewProp_bPrintDisplayMessagesToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintDisplayMessagesToScreen_MetaData), NewProp_bPrintDisplayMessagesToScreen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DisplayMessagesOnScreenLifetime = { "DisplayMessagesOnScreenLifetime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyCsvProjectSettings, DisplayMessagesOnScreenLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayMessagesOnScreenLifetime_MetaData), NewProp_DisplayMessagesOnScreenLifetime_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrintWarningMessagesToLog = { "bPrintWarningMessagesToLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyCsvProjectSettings), &UHT_STATICS::NewProp_bPrintWarningMessagesToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintWarningMessagesToLog_MetaData), NewProp_bPrintWarningMessagesToLog_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrintWarningMessagesToScreen = { "bPrintWarningMessagesToScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyCsvProjectSettings), &UHT_STATICS::NewProp_bPrintWarningMessagesToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintWarningMessagesToScreen_MetaData), NewProp_bPrintWarningMessagesToScreen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WarningMessagesOnScreenLifetime = { "WarningMessagesOnScreenLifetime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyCsvProjectSettings, WarningMessagesOnScreenLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningMessagesOnScreenLifetime_MetaData), NewProp_WarningMessagesOnScreenLifetime_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrintErrorMessagesToLog = { "bPrintErrorMessagesToLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyCsvProjectSettings), &UHT_STATICS::NewProp_bPrintErrorMessagesToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintErrorMessagesToLog_MetaData), NewProp_bPrintErrorMessagesToLog_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrintErrorMessagesToScreen = { "bPrintErrorMessagesToScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyCsvProjectSettings), &UHT_STATICS::NewProp_bPrintErrorMessagesToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintErrorMessagesToScreen_MetaData), NewProp_bPrintErrorMessagesToScreen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ErrorMessagesOnScreenLifetime = { "ErrorMessagesOnScreenLifetime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyCsvProjectSettings, ErrorMessagesOnScreenLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessagesOnScreenLifetime_MetaData), NewProp_ErrorMessagesOnScreenLifetime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LogCharacterLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrintDisplayMessagesToLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrintDisplayMessagesToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DisplayMessagesOnScreenLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrintWarningMessagesToLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrintWarningMessagesToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarningMessagesOnScreenLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrintErrorMessagesToLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrintErrorMessagesToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ErrorMessagesOnScreenLifetime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEasyCsvProjectSettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EasyCsv,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEasyCsvProjectSettings,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UEasyCsvProjectSettings;
UClass* Z_Construct_UClass_UEasyCsvProjectSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEasyCsvProjectSettings;
		if (!Z_Registration_Info_UClass_UEasyCsvProjectSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EasyCsvProjectSettings"),
				Z_Registration_Info_UClass_UEasyCsvProjectSettings.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
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
		return Z_Registration_Info_UClass_UEasyCsvProjectSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEasyCsvProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyCsvProjectSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyCsvProjectSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEasyCsvProjectSettings);
UEasyCsvProjectSettings::~UEasyCsvProjectSettings() {}
// ********** End Class UEasyCsvProjectSettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsvProjectSettings_h__Script_EasyCsv_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyCsvProjectSettings, TEXT("UEasyCsvProjectSettings"), &Z_Registration_Info_UClass_UEasyCsvProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyCsvProjectSettings), 1986862560U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsvProjectSettings_h__Script_EasyCsv_d41a7996872558829a5f2ee6c7812c2ef2579eb7{
	TEXT("/Script/EasyCsv"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
