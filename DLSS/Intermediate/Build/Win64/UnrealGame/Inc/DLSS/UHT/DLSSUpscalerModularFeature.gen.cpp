// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSSUpscalerModularFeature.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDLSSUpscalerModularFeature() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DLSS(ETypeConstructPhase);
DLSS_API UScriptStruct* Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings(ETypeConstructPhase);
DLSS_API UEnum* Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDLSSUpscalerModularFeatureQuality ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality_Statics
template<> DLSS_NON_ATTRIBUTED_API UEnum* StaticEnum<EDLSSUpscalerModularFeatureQuality>()
{
	return Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EDLSSUpscalerModularFeatureQuality::Auto" },
		{ "Auto.ToolTip", "Use Auto to select best quality setting for a given resolution" },
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EDLSSUpscalerModularFeatureQuality::Balanced" },
		{ "Comment", "/** DLSS Quality modes. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EDLSSUpscalerModularFeatureQuality::Count" },
		{ "DLAA.DisplayName", "DLAA" },
		{ "DLAA.Name", "EDLSSUpscalerModularFeatureQuality::DLAA" },
		{ "ModuleRelativePath", "Private/DLSSUpscalerModularFeature.h" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "EDLSSUpscalerModularFeatureQuality::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EDLSSUpscalerModularFeatureQuality::Quality" },
		{ "ToolTip", "DLSS Quality modes." },
		{ "UltraPerformance.DisplayName", "Ultra Performance" },
		{ "UltraPerformance.Name", "EDLSSUpscalerModularFeatureQuality::UltraPerformance" },
		{ "UltraQuality.DisplayName", "Ultra Quality" },
		{ "UltraQuality.Name", "EDLSSUpscalerModularFeatureQuality::UltraQuality" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDLSSUpscalerModularFeatureQuality::Auto", (int64)EDLSSUpscalerModularFeatureQuality::Auto },
		{ "EDLSSUpscalerModularFeatureQuality::UltraQuality", (int64)EDLSSUpscalerModularFeatureQuality::UltraQuality },
		{ "EDLSSUpscalerModularFeatureQuality::Quality", (int64)EDLSSUpscalerModularFeatureQuality::Quality },
		{ "EDLSSUpscalerModularFeatureQuality::Balanced", (int64)EDLSSUpscalerModularFeatureQuality::Balanced },
		{ "EDLSSUpscalerModularFeatureQuality::Performance", (int64)EDLSSUpscalerModularFeatureQuality::Performance },
		{ "EDLSSUpscalerModularFeatureQuality::UltraPerformance", (int64)EDLSSUpscalerModularFeatureQuality::UltraPerformance },
		{ "EDLSSUpscalerModularFeatureQuality::DLAA", (int64)EDLSSUpscalerModularFeatureQuality::DLAA },
		{ "EDLSSUpscalerModularFeatureQuality::Count", (int64)EDLSSUpscalerModularFeatureQuality::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DLSS,
	nullptr,
	"EDLSSUpscalerModularFeatureQuality",
	"EDLSSUpscalerModularFeatureQuality",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDLSSUpscalerModularFeatureQuality;
UEnum* Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDLSSUpscalerModularFeatureQuality.OuterSingleton)
		{
			ZRIE_EDLSSUpscalerModularFeatureQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality, (UObject*)Z_Construct_UPackage__Script_DLSS(ETypeConstructPhase::Outer), TEXT("EDLSSUpscalerModularFeatureQuality"));
		}
		return ZRIE_EDLSSUpscalerModularFeatureQuality.OuterSingleton;
	}
	if (!ZRIE_EDLSSUpscalerModularFeatureQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDLSSUpscalerModularFeatureQuality.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDLSSUpscalerModularFeatureQuality.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDLSSUpscalerModularFeatureQuality ******************************************

// ********** Begin ScriptStruct FDLSSUpscalerModularFeatureSettings *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDLSSUpscalerModularFeatureSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDLSSUpscalerModularFeatureSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* DLSS settings used by the Modular Feature.\n*/" },
		{ "ModuleRelativePath", "Private/DLSSUpscalerModularFeature.h" },
		{ "ToolTip", "DLSS settings used by the Modular Feature." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** DLSS quality. */" },
		{ "DisplayName", "Quality" },
		{ "ModuleRelativePath", "Private/DLSSUpscalerModularFeature.h" },
		{ "ToolTip", "DLSS quality." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDLSSUpscalerModularFeatureSettings constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDLSSUpscalerModularFeatureSettings constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDLSSUpscalerModularFeatureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDLSSUpscalerModularFeatureSettings Property Definitions **********
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDLSSUpscalerModularFeatureSettings, Quality), Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) }; // 5c181b94cba8195cc19b6008532c2cdcdc2a5d86
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Quality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDLSSUpscalerModularFeatureSettings Property Definitions ************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DLSS,
	nullptr,
	&NewStructOps,
	"DLSSUpscalerModularFeatureSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDLSSUpscalerModularFeatureSettings>(),
	alignof(FDLSSUpscalerModularFeatureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings;
UScriptStruct* Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings, (UObject*)Z_Construct_UPackage__Script_DLSS(ETypeConstructPhase::Outer), TEXT("DLSSUpscalerModularFeatureSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDLSSUpscalerModularFeatureSettings *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_DLSS_Source_DLSS_Private_DLSSUpscalerModularFeature_h__Script_DLSS_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality, TEXT("EDLSSUpscalerModularFeatureQuality"), &ZRIE_EDLSSUpscalerModularFeatureQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1545083796U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings, Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings_Statics::NewStructOps, TEXT("DLSSUpscalerModularFeatureSettings"),&Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDLSSUpscalerModularFeatureSettings), 4232183894U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DLSS_Source_DLSS_Private_DLSSUpscalerModularFeature_h__Script_DLSS_fe2eb5ee3259bb679f227cf35545b2cda77fc69e{
	TEXT("/Script/DLSS"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
