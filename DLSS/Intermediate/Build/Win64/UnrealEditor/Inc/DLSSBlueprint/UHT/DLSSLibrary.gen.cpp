// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSSLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDLSSLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DLSSBlueprint(ETypeConstructPhase);
DLSSBLUEPRINT_API UClass* Z_Construct_UClass_UDLSSLibrary(ETypeConstructPhase);
DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode(ETypeConstructPhase);
DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport(ETypeConstructPhase);
DLSSBLUEPRINT_API UClass* Z_Construct_UClass_UDLSSLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum UDLSSSupport **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics
template<> DLSSBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<UDLSSSupport>()
{
	return Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "NotSupported.DisplayName", "Not Supported" },
		{ "NotSupported.Name", "UDLSSSupport::NotSupported" },
		{ "NotSupportedByPlatformAtBuildTime.DisplayName", "Platform Not Supported At Build Time" },
		{ "NotSupportedByPlatformAtBuildTime.Name", "UDLSSSupport::NotSupportedByPlatformAtBuildTime" },
		{ "NotSupportedByPlatformAtBuildTime.ToolTip", "This platform doesn't not support DLSS at build time. Currently DLSS is only supported on Windows 64" },
		{ "NotSupportedDriverOutOfDate.DisplayName", "Driver Out of Date" },
		{ "NotSupportedDriverOutOfDate.Name", "UDLSSSupport::NotSupportedDriverOutOfDate" },
		{ "NotSupportedDriverOutOfDate.ToolTip", "The driver is outdated. Also see GetDLSSMinimumDriverVersion" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.DisplayName", "Incompatible API Capture Tool Active" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.Name", "UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.ToolTip", "DLSS is not compatible with an active API capture tool such as RenderDoc." },
		{ "NotSupportedIncompatibleHardware.DisplayName", "Incompatible Hardware" },
		{ "NotSupportedIncompatibleHardware.Name", "UDLSSSupport::NotSupportedIncompatibleHardware" },
		{ "NotSupportedIncompatibleHardware.ToolTip", "DLSS requires an NVIDIA RTX GPU" },
		{ "NotSupportedOperatingSystemOutOfDate.DisplayName", "Operating System Out of Date" },
		{ "NotSupportedOperatingSystemOutOfDate.Name", "UDLSSSupport::NotSupportedOperatingSystemOutOfDate" },
		{ "NotSupportedOperatingSystemOutOfDate.ToolTip", "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)" },
		{ "Supported.DisplayName", "Supported" },
		{ "Supported.Name", "UDLSSSupport::Supported" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UDLSSSupport::Supported", (int64)UDLSSSupport::Supported },
		{ "UDLSSSupport::NotSupported", (int64)UDLSSSupport::NotSupported },
		{ "UDLSSSupport::NotSupportedIncompatibleHardware", (int64)UDLSSSupport::NotSupportedIncompatibleHardware },
		{ "UDLSSSupport::NotSupportedDriverOutOfDate", (int64)UDLSSSupport::NotSupportedDriverOutOfDate },
		{ "UDLSSSupport::NotSupportedOperatingSystemOutOfDate", (int64)UDLSSSupport::NotSupportedOperatingSystemOutOfDate },
		{ "UDLSSSupport::NotSupportedByPlatformAtBuildTime", (int64)UDLSSSupport::NotSupportedByPlatformAtBuildTime },
		{ "UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive", (int64)UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DLSSBlueprint,
	nullptr,
	"UDLSSSupport",
	"UDLSSSupport",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_UDLSSSupport;
UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_UDLSSSupport.OuterSingleton)
		{
			ZRIE_UDLSSSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, (UObject*)Z_Construct_UPackage__Script_DLSSBlueprint(ETypeConstructPhase::Outer), TEXT("UDLSSSupport"));
		}
		return ZRIE_UDLSSSupport.OuterSingleton;
	}
	if (!ZRIE_UDLSSSupport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_UDLSSSupport.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_UDLSSSupport.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum UDLSSSupport ****************************************************************

// ********** Begin Enum UDLSSMode *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics
template<> DLSSBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<UDLSSMode>()
{
	return Z_Construct_UEnum_DLSSBlueprint_UDLSSMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "UDLSSMode::Auto" },
		{ "Auto.ToolTip", "Not a real quality mode. Use Auto to query best settings for a given resolution with GetDLSSModeInformation" },
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "UDLSSMode::Balanced" },
		{ "BlueprintType", "true" },
		{ "DLAA.DisplayName", "DLAA" },
		{ "DLAA.Name", "UDLSSMode::DLAA" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "UDLSSMode::Off" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "UDLSSMode::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "UDLSSMode::Quality" },
		{ "UltraPerformance.DisplayName", "Ultra Performance" },
		{ "UltraPerformance.Name", "UDLSSMode::UltraPerformance" },
		{ "UltraQuality.DisplayName", "Ultra Quality" },
		{ "UltraQuality.Name", "UDLSSMode::UltraQuality" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UDLSSMode::Off", (int64)UDLSSMode::Off },
		{ "UDLSSMode::Auto", (int64)UDLSSMode::Auto },
		{ "UDLSSMode::DLAA", (int64)UDLSSMode::DLAA },
		{ "UDLSSMode::UltraQuality", (int64)UDLSSMode::UltraQuality },
		{ "UDLSSMode::Quality", (int64)UDLSSMode::Quality },
		{ "UDLSSMode::Balanced", (int64)UDLSSMode::Balanced },
		{ "UDLSSMode::Performance", (int64)UDLSSMode::Performance },
		{ "UDLSSMode::UltraPerformance", (int64)UDLSSMode::UltraPerformance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DLSSBlueprint,
	nullptr,
	"UDLSSMode",
	"UDLSSMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_UDLSSMode;
UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_UDLSSMode.OuterSingleton)
		{
			ZRIE_UDLSSMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, (UObject*)Z_Construct_UPackage__Script_DLSSBlueprint(ETypeConstructPhase::Outer), TEXT("UDLSSMode"));
		}
		return ZRIE_UDLSSMode.OuterSingleton;
	}
	if (!ZRIE_UDLSSMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_UDLSSMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_UDLSSMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum UDLSSMode *******************************************************************

// ********** Begin Class UDLSSLibrary Function EnableDLAA *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventEnableDLAA_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Enable/disable DLAA. Note that while DLAA is enabled, DLSS will be automatically disabled */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Enable DLSS-SR' instead" },
		{ "DisplayName", "Enable DLAA" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Enable/disable DLAA. Note that while DLAA is enabled, DLSS will be automatically disabled" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableDLAA constinit property declarations ****************************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((DLSSLibrary_eventEnableDLAA_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableDLAA constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableDLAA Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventEnableDLAA_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableDLAA Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "EnableDLAA", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventEnableDLAA_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventEnableDLAA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_EnableDLAA(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execEnableDLAA)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::EnableDLAA(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function EnableDLAA *******************************************

// ********** Begin Class UDLSSLibrary Function EnableDLSS *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventEnableDLSS_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/**\n\x09 * Enable/disable DLSS Super Resolution/DLAA\n\x09 * To select a DLSS-SR quality mode, set an appropriate upscale screen percentage with r.ScreenPercentage. Use GetDlssModeInformation to find optimal screen percentage\n\x09 * To select DLAA, set the upscale screen percentage to 100 (r.ScreenPercentage=100)\n\x09 */" },
		{ "DisplayName", "Enable DLSS-SR" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Enable/disable DLSS Super Resolution/DLAA\nTo select a DLSS-SR quality mode, set an appropriate upscale screen percentage with r.ScreenPercentage. Use GetDlssModeInformation to find optimal screen percentage\nTo select DLAA, set the upscale screen percentage to 100 (r.ScreenPercentage=100)" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableDLSS constinit property declarations ****************************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((DLSSLibrary_eventEnableDLSS_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableDLSS constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableDLSS Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventEnableDLSS_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableDLSS Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "EnableDLSS", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventEnableDLSS_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventEnableDLSS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_EnableDLSS(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execEnableDLSS)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::EnableDLSS(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function EnableDLSS *******************************************

// ********** Begin Class UDLSSLibrary Function EnableDLSSRR ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventEnableDLSSRR_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Enable/disable DLSS Ray Reconstruction */" },
		{ "DisplayName", "Enable DLSS-RR" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Enable/disable DLSS Ray Reconstruction" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableDLSSRR constinit property declarations **************************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((DLSSLibrary_eventEnableDLSSRR_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableDLSSRR constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableDLSSRR Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventEnableDLSSRR_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableDLSSRR Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "EnableDLSSRR", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventEnableDLSSRR_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventEnableDLSSRR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execEnableDLSSRR)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::EnableDLSSRR(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function EnableDLSSRR *****************************************

// ********** Begin Class UDLSSLibrary Function GetDefaultDLSSMode *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetDefaultDLSSMode_Parms
	{
		UDLSSMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/* Find a reasonable default DLSS mode based on current hardware */" },
		{ "DisplayName", "Get Default DLSS Mode" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Find a reasonable default DLSS mode based on current hardware" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultDLSSMode constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultDLSSMode constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultDLSSMode Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDefaultDLSSMode_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDefaultDLSSMode Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDefaultDLSSMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetDefaultDLSSMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetDefaultDLSSMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetDefaultDLSSMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSMode*)Z_Param__Result=UDLSSLibrary::GetDefaultDLSSMode();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetDefaultDLSSMode ***********************************

// ********** Begin Class UDLSSLibrary Function GetDLSSMinimumDriverVersion ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms
	{
		int32 MinDriverVersionMajor;
		int32 MinDriverVersionMinor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** If QueryDLSSSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version.*/" },
		{ "DisplayName", "Get DLSS-SR Minimum DriverVersion" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "If QueryDLSSSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDLSSMinimumDriverVersion constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMajor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMinor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDLSSMinimumDriverVersion constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDLSSMinimumDriverVersion Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinDriverVersionMajor = { "MinDriverVersionMajor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms, MinDriverVersionMajor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinDriverVersionMinor = { "MinDriverVersionMinor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms, MinDriverVersionMinor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDriverVersionMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDriverVersionMinor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDLSSMinimumDriverVersion Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSMinimumDriverVersion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSMinimumDriverVersion)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMajor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMinor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSMinimumDriverVersion(Z_Param_Out_MinDriverVersionMajor,Z_Param_Out_MinDriverVersionMinor);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetDLSSMinimumDriverVersion **************************

// ********** Begin Class UDLSSLibrary Function GetDLSSMode ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetDLSSMode_Parms
	{
		UDLSSMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/* Read the current DLSS mode */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Is DLSS-SR Enabled' instead" },
		{ "DisplayName", "Get DLSS Mode" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Read the current DLSS mode" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDLSSMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDLSSMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDLSSMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSMode_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDLSSMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetDLSSMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetDLSSMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSMode*)Z_Param__Result=UDLSSLibrary::GetDLSSMode();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetDLSSMode ******************************************

// ********** Begin Class UDLSSLibrary Function GetDLSSModeInformation *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetDLSSModeInformation_Parms
	{
		UDLSSMode DLSSMode;
		FVector2D ScreenResolution;
		bool bIsSupported;
		float OptimalScreenPercentage;
		bool bIsFixedScreenPercentage;
		float MinScreenPercentage;
		float MaxScreenPercentage;
		float OptimalSharpness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Provide additional details (such as screen percentage ranges) about a DLSS mode. Screen Resolution is required for Auto mode */" },
		{ "DisplayName", "Get DLSS-SR Mode Information" },
		{ "HidePin", "OptimalSharpness" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Provide additional details (such as screen percentage ranges) about a DLSS mode. Screen Resolution is required for Auto mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimalSharpness_MetaData[] = {
		{ "DisplayName", "Optimal Sharpness DEPRECATED" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDLSSModeInformation constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenResolution;
	static void NewProp_bIsSupported_SetBit(void* Obj)
	{
		((DLSSLibrary_eventGetDLSSModeInformation_Parms*)Obj)->bIsSupported = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSupported;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalScreenPercentage;
	static void NewProp_bIsFixedScreenPercentage_SetBit(void* Obj)
	{
		((DLSSLibrary_eventGetDLSSModeInformation_Parms*)Obj)->bIsFixedScreenPercentage = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFixedScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalSharpness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDLSSModeInformation constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDLSSModeInformation Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DLSSMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, DLSSMode), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, ScreenResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsSupported = { "bIsSupported", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventGetDLSSModeInformation_Parms), &UHT_STATICS::NewProp_bIsSupported_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OptimalScreenPercentage = { "OptimalScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, OptimalScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsFixedScreenPercentage = { "bIsFixedScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventGetDLSSModeInformation_Parms), &UHT_STATICS::NewProp_bIsFixedScreenPercentage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinScreenPercentage = { "MinScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, MinScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxScreenPercentage = { "MaxScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, MaxScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OptimalSharpness = { "OptimalSharpness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, OptimalSharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimalSharpness_MetaData), NewProp_OptimalSharpness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DLSSMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DLSSMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScreenResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptimalScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsFixedScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptimalSharpness,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDLSSModeInformation Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSModeInformation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetDLSSModeInformation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetDLSSModeInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSModeInformation)
{
	P_GET_ENUM(UDLSSMode,Z_Param_DLSSMode);
	P_GET_STRUCT(FVector2D,Z_Param_ScreenResolution);
	P_GET_UBOOL_REF(Z_Param_Out_bIsSupported);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OptimalScreenPercentage);
	P_GET_UBOOL_REF(Z_Param_Out_bIsFixedScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OptimalSharpness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSModeInformation(UDLSSMode(Z_Param_DLSSMode),Z_Param_ScreenResolution,Z_Param_Out_bIsSupported,Z_Param_Out_OptimalScreenPercentage,Z_Param_Out_bIsFixedScreenPercentage,Z_Param_Out_MinScreenPercentage,Z_Param_Out_MaxScreenPercentage,Z_Param_Out_OptimalSharpness);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetDLSSModeInformation *******************************

// ********** Begin Class UDLSSLibrary Function GetDLSSRRMinimumDriverVersion **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms
	{
		int32 MinDriverVersionMajor;
		int32 MinDriverVersionMinor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** If QueryDLSSRRSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version.*/" },
		{ "DisplayName", "Get DLSS-RR Minimum DriverVersion" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "If QueryDLSSRRSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDLSSRRMinimumDriverVersion constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMajor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMinor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDLSSRRMinimumDriverVersion constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDLSSRRMinimumDriverVersion Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinDriverVersionMajor = { "MinDriverVersionMajor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms, MinDriverVersionMajor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinDriverVersionMinor = { "MinDriverVersionMinor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms, MinDriverVersionMinor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDriverVersionMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDriverVersionMinor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDLSSRRMinimumDriverVersion Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSRRMinimumDriverVersion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSRRMinimumDriverVersion)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMajor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMinor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSRRMinimumDriverVersion(Z_Param_Out_MinDriverVersionMajor,Z_Param_Out_MinDriverVersionMinor);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetDLSSRRMinimumDriverVersion ************************

// ********** Begin Class UDLSSLibrary Function GetDLSSScreenPercentageRange ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms
	{
		float MinScreenPercentage;
		float MaxScreenPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** The global screen percentage range that DLSS supports. Excludes DLSS modes with fixed screen percentage. Also see GetDLSSModeInformation*/" },
		{ "DisplayName", "Get DLSS-SR Screenpercentage Range" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "The global screen percentage range that DLSS supports. Excludes DLSS modes with fixed screen percentage. Also see GetDLSSModeInformation" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDLSSScreenPercentageRange constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScreenPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDLSSScreenPercentageRange constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDLSSScreenPercentageRange Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinScreenPercentage = { "MinScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms, MinScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxScreenPercentage = { "MaxScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms, MaxScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxScreenPercentage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDLSSScreenPercentageRange Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSScreenPercentageRange", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSScreenPercentageRange)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScreenPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSScreenPercentageRange(Z_Param_Out_MinScreenPercentage,Z_Param_Out_MaxScreenPercentage);
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetDLSSScreenPercentageRange *************************

// ********** Begin Class UDLSSLibrary Function GetSupportedDLSSModes ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventGetSupportedDLSSModes_Parms
	{
		TArray<UDLSSMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Retrieve all supported DLSS modes. Can be used to populate UI */" },
		{ "DisplayName", "Get Supported DLSS-SR Modes" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Retrieve all supported DLSS modes. Can be used to populate UI" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSupportedDLSSModes constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSupportedDLSSModes constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSupportedDLSSModes Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetSupportedDLSSModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSupportedDLSSModes Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "GetSupportedDLSSModes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventGetSupportedDLSSModes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventGetSupportedDLSSModes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execGetSupportedDLSSModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDLSSMode>*)Z_Param__Result=UDLSSLibrary::GetSupportedDLSSModes();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function GetSupportedDLSSModes ********************************

// ********** Begin Class UDLSSLibrary Function IsDLAAEnabled **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsDLAAEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether DLAA is enabled */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Is DLSS-SR Enabled' instead" },
		{ "DisplayName", "Is DLAA Enabled" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether DLAA is enabled" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDLAAEnabled constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsDLAAEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDLAAEnabled constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDLAAEnabled Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLAAEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDLAAEnabled Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLAAEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsDLAAEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsDLAAEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsDLAAEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLAAEnabled();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsDLAAEnabled ****************************************

// ********** Begin Class UDLSSLibrary Function IsDLSSEnabled **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsDLSSEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether DLSS Super Resolution/DLAA is enabled */" },
		{ "DisplayName", "Is DLSS-SR Enabled" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether DLSS Super Resolution/DLAA is enabled" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDLSSEnabled constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsDLSSEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDLSSEnabled constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDLSSEnabled Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDLSSEnabled Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsDLSSEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsDLSSEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSEnabled();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsDLSSEnabled ****************************************

// ********** Begin Class UDLSSLibrary Function IsDLSSModeSupported ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsDLSSModeSupported_Parms
	{
		UDLSSMode DLSSMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether a DLSS mode is supported */" },
		{ "DisplayName", "Is DLSS-SR Mode Supported" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether a DLSS mode is supported" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDLSSModeSupported constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSMode;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsDLSSModeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDLSSModeSupported constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDLSSModeSupported Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DLSSMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventIsDLSSModeSupported_Parms, DLSSMode), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSModeSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DLSSMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DLSSMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDLSSModeSupported Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSModeSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsDLSSModeSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsDLSSModeSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSModeSupported)
{
	P_GET_ENUM(UDLSSMode,Z_Param_DLSSMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSModeSupported(UDLSSMode(Z_Param_DLSSMode));
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsDLSSModeSupported **********************************

// ********** Begin Class UDLSSLibrary Function IsDLSSRREnabled ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsDLSSRREnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether DLSS Ray Reconstruction is enabled */" },
		{ "DisplayName", "Is DLSS-RR Enabled" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether DLSS Ray Reconstruction is enabled" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDLSSRREnabled constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsDLSSRREnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDLSSRREnabled constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDLSSRREnabled Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSRREnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDLSSRREnabled Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSRREnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsDLSSRREnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsDLSSRREnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSRREnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSRREnabled();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsDLSSRREnabled **************************************

// ********** Begin Class UDLSSLibrary Function IsDLSSRRSupported **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsDLSSRRSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether NVIDIA DLSS Ray Reconstruction is supported. Further details can be retrieved via 'Query DLSS-RR Support' */" },
		{ "DisplayName", "Is DLSS-RR Supported" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether NVIDIA DLSS Ray Reconstruction is supported. Further details can be retrieved via 'Query DLSS-RR Support'" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDLSSRRSupported constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsDLSSRRSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDLSSRRSupported constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDLSSRRSupported Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSRRSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDLSSRRSupported Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSRRSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsDLSSRRSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsDLSSRRSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSRRSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSRRSupported();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsDLSSRRSupported ************************************

// ********** Begin Class UDLSSLibrary Function IsDLSSSupported ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsDLSSSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether NVIDIA DLSS Super Resolution/DLAA is supported. Further details can be retrieved via 'Query DLSS-SR Support' */" },
		{ "DisplayName", "Is DLSS-SR Supported" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether NVIDIA DLSS Super Resolution/DLAA is supported. Further details can be retrieved via 'Query DLSS-SR Support'" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDLSSSupported constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsDLSSSupported_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDLSSSupported constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDLSSSupported Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSSupported_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsDLSSSupported Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSSupported", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsDLSSSupported_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsDLSSSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSSupported();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsDLSSSupported **************************************

// ********** Begin Class UDLSSLibrary Function IsRayTracingAvailable ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventIsRayTracingAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Returns 'true' when running on RT-capable machine */" },
		{ "DisplayName", "Is RayTracing Available" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Returns 'true' when running on RT-capable machine" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsRayTracingAvailable constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLSSLibrary_eventIsRayTracingAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRayTracingAvailable constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRayTracingAvailable Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsRayTracingAvailable_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsRayTracingAvailable Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "IsRayTracingAvailable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventIsRayTracingAvailable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventIsRayTracingAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execIsRayTracingAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsRayTracingAvailable();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function IsRayTracingAvailable ********************************

// ********** Begin Class UDLSSLibrary Function QueryDLSSRRSupport *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventQueryDLSSRRSupport_Parms
	{
		UDLSSSupport ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether NVIDIA DLSS Ray Reconstruction is supported */" },
		{ "DisplayName", "Query DLSS-RR Support" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether NVIDIA DLSS Ray Reconstruction is supported" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryDLSSRRSupport constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryDLSSRRSupport constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryDLSSRRSupport Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventQueryDLSSRRSupport_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, METADATA_PARAMS(0, nullptr) }; // f0728862b1fa506739f085d4a1b4ecbc29264d5e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function QueryDLSSRRSupport Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "QueryDLSSRRSupport", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventQueryDLSSRRSupport_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventQueryDLSSRRSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execQueryDLSSRRSupport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSSupport*)Z_Param__Result=UDLSSLibrary::QueryDLSSRRSupport();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function QueryDLSSRRSupport ***********************************

// ********** Begin Class UDLSSLibrary Function QueryDLSSSupport ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventQueryDLSSSupport_Parms
	{
		UDLSSSupport ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Check whether NVIDIA DLSS Super Resolution/DLAA is supported */" },
		{ "DisplayName", "Query DLSS-SR Support" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Check whether NVIDIA DLSS Super Resolution/DLAA is supported" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryDLSSSupport constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryDLSSSupport constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryDLSSSupport Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventQueryDLSSSupport_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, METADATA_PARAMS(0, nullptr) }; // f0728862b1fa506739f085d4a1b4ecbc29264d5e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function QueryDLSSSupport Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "QueryDLSSSupport", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventQueryDLSSSupport_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventQueryDLSSSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execQueryDLSSSupport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSSupport*)Z_Param__Result=UDLSSLibrary::QueryDLSSSupport();
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function QueryDLSSSupport *************************************

// ********** Begin Class UDLSSLibrary Function SetDLSSMode ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics
struct UHT_STATICS
{
	struct DLSSLibrary_eventSetDLSSMode_Parms
	{
		UObject* WorldContextObject;
		UDLSSMode DLSSMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DLSS" },
		{ "Comment", "/** Enable/disable DLSS */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Enable DLSS-SR' instead" },
		{ "DisplayName", "Set DLSS Mode" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "ToolTip", "Enable/disable DLSS" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDLSSMode constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDLSSMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDLSSMode Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventSetDLSSMode_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DLSSMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventSetDLSSMode_Parms, DLSSMode), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 5f85c9e07aa7c62dfd320a24e40a04cc3b2d5587
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DLSSMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DLSSMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDLSSMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDLSSLibrary, nullptr, "SetDLSSMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DLSSLibrary_eventSetDLSSMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DLSSLibrary_eventSetDLSSMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDLSSLibrary::execSetDLSSMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(UDLSSMode,Z_Param_DLSSMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::SetDLSSMode(Z_Param_WorldContextObject,UDLSSMode(Z_Param_DLSSMode));
	P_NATIVE_END;
}
// ********** End Class UDLSSLibrary Function SetDLSSMode ******************************************

// ********** Begin Class UDLSSLibrary *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDLSSLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "DLSSLibrary.h" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDLSSLibrary constinit property declarations *****************************
// ********** End Class UDLSSLibrary constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnableDLAA"), .Pointer = &UDLSSLibrary::execEnableDLAA },
		{ .NameUTF8 = UTF8TEXT("EnableDLSS"), .Pointer = &UDLSSLibrary::execEnableDLSS },
		{ .NameUTF8 = UTF8TEXT("EnableDLSSRR"), .Pointer = &UDLSSLibrary::execEnableDLSSRR },
		{ .NameUTF8 = UTF8TEXT("GetDefaultDLSSMode"), .Pointer = &UDLSSLibrary::execGetDefaultDLSSMode },
		{ .NameUTF8 = UTF8TEXT("GetDLSSMinimumDriverVersion"), .Pointer = &UDLSSLibrary::execGetDLSSMinimumDriverVersion },
		{ .NameUTF8 = UTF8TEXT("GetDLSSMode"), .Pointer = &UDLSSLibrary::execGetDLSSMode },
		{ .NameUTF8 = UTF8TEXT("GetDLSSModeInformation"), .Pointer = &UDLSSLibrary::execGetDLSSModeInformation },
		{ .NameUTF8 = UTF8TEXT("GetDLSSRRMinimumDriverVersion"), .Pointer = &UDLSSLibrary::execGetDLSSRRMinimumDriverVersion },
		{ .NameUTF8 = UTF8TEXT("GetDLSSScreenPercentageRange"), .Pointer = &UDLSSLibrary::execGetDLSSScreenPercentageRange },
		{ .NameUTF8 = UTF8TEXT("GetSupportedDLSSModes"), .Pointer = &UDLSSLibrary::execGetSupportedDLSSModes },
		{ .NameUTF8 = UTF8TEXT("IsDLAAEnabled"), .Pointer = &UDLSSLibrary::execIsDLAAEnabled },
		{ .NameUTF8 = UTF8TEXT("IsDLSSEnabled"), .Pointer = &UDLSSLibrary::execIsDLSSEnabled },
		{ .NameUTF8 = UTF8TEXT("IsDLSSModeSupported"), .Pointer = &UDLSSLibrary::execIsDLSSModeSupported },
		{ .NameUTF8 = UTF8TEXT("IsDLSSRREnabled"), .Pointer = &UDLSSLibrary::execIsDLSSRREnabled },
		{ .NameUTF8 = UTF8TEXT("IsDLSSRRSupported"), .Pointer = &UDLSSLibrary::execIsDLSSRRSupported },
		{ .NameUTF8 = UTF8TEXT("IsDLSSSupported"), .Pointer = &UDLSSLibrary::execIsDLSSSupported },
		{ .NameUTF8 = UTF8TEXT("IsRayTracingAvailable"), .Pointer = &UDLSSLibrary::execIsRayTracingAvailable },
		{ .NameUTF8 = UTF8TEXT("QueryDLSSRRSupport"), .Pointer = &UDLSSLibrary::execQueryDLSSRRSupport },
		{ .NameUTF8 = UTF8TEXT("QueryDLSSSupport"), .Pointer = &UDLSSLibrary::execQueryDLSSSupport },
		{ .NameUTF8 = UTF8TEXT("SetDLSSMode"), .Pointer = &UDLSSLibrary::execSetDLSSMode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDLSSLibrary_EnableDLAA, "EnableDLAA" }, // d03cb7aeb5587f5fe6a571afff273c587943addb
		{ &Z_Construct_UFunction_UDLSSLibrary_EnableDLSS, "EnableDLSS" }, // 9ec0b874091a8ee41c4343cb907e02e6ca1d6098
		{ &Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR, "EnableDLSSRR" }, // 79860e814b35800408882858ffb9525711ef6735
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode, "GetDefaultDLSSMode" }, // bfc89c82cb509b96be72eef665ba379a2fa81571
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion, "GetDLSSMinimumDriverVersion" }, // 83fe12c69cb06778b26f1861f4a4909879b39e05
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode, "GetDLSSMode" }, // a7118ebc3694aaf91620c03ef53619654bdda12a
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation, "GetDLSSModeInformation" }, // 68bd67f3a700e00234adf872081b52d407b00a88
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion, "GetDLSSRRMinimumDriverVersion" }, // e810f1f2cb9ce2999bcaa03e22a1307a4b31843a
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange, "GetDLSSScreenPercentageRange" }, // 1c287c12ee70d630d33fec6aef655067290274b7
		{ &Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes, "GetSupportedDLSSModes" }, // d7e54e5e75b90b42b7f3b60490eb6eb5cfe7f43e
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled, "IsDLAAEnabled" }, // 0118040fcc3c2af4ba0c17eb61d1367ebde8d34c
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled, "IsDLSSEnabled" }, // c8e9139d37e08f61d655186cb77578581987a360
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported, "IsDLSSModeSupported" }, // 273d9df63f8493999d12e11fd187d0000ff274bb
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled, "IsDLSSRREnabled" }, // 357aeabb5b4f588a94d645a345030ee92dfb89a1
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported, "IsDLSSRRSupported" }, // 81830140eb50c3a07bfd2facfba8864edc1823bb
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported, "IsDLSSSupported" }, // 333fb7ef4a0b65cf8aaa1f183ec3dc26934b93ea
		{ &Z_Construct_UFunction_UDLSSLibrary_IsRayTracingAvailable, "IsRayTracingAvailable" }, // c9a2a044edc476170b26f20c24aac61f570f41e0
		{ &Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport, "QueryDLSSRRSupport" }, // 0eea3628ca9caa1940dc847f1c0661f733306135
		{ &Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport, "QueryDLSSSupport" }, // d246e11e5e6909d6d459445f718121b23837484b
		{ &Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode, "SetDLSSMode" }, // c3f6efc0c52a4f6d239ae0c5e3c9d1b4f8f2ce9f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLSSLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DLSSBlueprint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDLSSLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDLSSLibrary_StaticRegisterNativesUDLSSLibrary()
{
	UClass* Class = UDLSSLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDLSSLibrary;
UClass* Z_Construct_UClass_UDLSSLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDLSSLibrary;
		if (!Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DLSSLibrary"),
				Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton,
				UDLSSLibrary_StaticRegisterNativesUDLSSLibrary,
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
		return Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton;
}
#undef UHT_STATICS
UDLSSLibrary::UDLSSLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDLSSLibrary);
UDLSSLibrary::~UDLSSLibrary() {}
// ********** End Class UDLSSLibrary ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h__Script_DLSSBlueprint_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, TEXT("UDLSSSupport"), &ZRIE_UDLSSSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4034037858U) },
		{ Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, TEXT("UDLSSMode"), &ZRIE_UDLSSMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1602603488U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDLSSLibrary, TEXT("UDLSSLibrary"), &Z_Registration_Info_UClass_UDLSSLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLSSLibrary), 2358934088U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h__Script_DLSSBlueprint_fa72db9c65241ec7928b6367e03cbec51fb3560a{
	TEXT("/Script/DLSSBlueprint"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
