// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCsv.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEasyCsv() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_EasyCsv(ETypeConstructPhase);
EASYCSV_API UClass* Z_Construct_UClass_UEasyCsv(ETypeConstructPhase);
EASYCSV_API UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvInfo(ETypeConstructPhase);
EASYCSV_API UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvStringValueArray(ETypeConstructPhase);
EASYCSV_API UClass* Z_Construct_UClass_UEasyCsv(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FEasyCsvStringValueArray ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEasyCsvStringValueArray_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEasyCsvStringValueArray>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEasyCsvStringValueArray); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValues_MetaData[] = {
		{ "Category", "easyCSV" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEasyCsvStringValueArray constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEasyCsvStringValueArray constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEasyCsvStringValueArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEasyCsvStringValueArray Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringValues_Inner = { "StringValues", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StringValues = { "StringValues", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEasyCsvStringValueArray, StringValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValues_MetaData), NewProp_StringValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringValues,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEasyCsvStringValueArray Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EasyCsv,
	nullptr,
	&NewStructOps,
	"EasyCsvStringValueArray",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEasyCsvStringValueArray>(),
	alignof(FEasyCsvStringValueArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray;
UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvStringValueArray(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEasyCsvStringValueArray, (UObject*)Z_Construct_UPackage__Script_EasyCsv(ETypeConstructPhase::Outer), TEXT("EasyCsvStringValueArray"));
		}
		return Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEasyCsvStringValueArray ********************************************

// ********** Begin ScriptStruct FEasyCsvInfo ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEasyCsvInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEasyCsvInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEasyCsvInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Map_MetaData[] = {
		{ "Category", "easyCSV" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Keys_MetaData[] = {
		{ "Category", "easyCSV" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Headers_MetaData[] = {
		{ "Category", "easyCSV" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEasyCsvInfo constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Map_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CSV_Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CSV_Map;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CSV_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CSV_Keys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CSV_Headers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CSV_Headers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEasyCsvInfo constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEasyCsvInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEasyCsvInfo Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Map_ValueProp = { "CSV_Map", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEasyCsvStringValueArray, METADATA_PARAMS(0, nullptr) }; // 34464c2f46159ffa4fdaecbed94913469c1d478a
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CSV_Map_Key_KeyProp = { "CSV_Map_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_CSV_Map = { "CSV_Map", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FEasyCsvInfo, CSV_Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Map_MetaData), NewProp_CSV_Map_MetaData) }; // 34464c2f46159ffa4fdaecbed94913469c1d478a
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CSV_Keys_Inner = { "CSV_Keys", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CSV_Keys = { "CSV_Keys", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEasyCsvInfo, CSV_Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Keys_MetaData), NewProp_CSV_Keys_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CSV_Headers_Inner = { "CSV_Headers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CSV_Headers = { "CSV_Headers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEasyCsvInfo, CSV_Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Headers_MetaData), NewProp_CSV_Headers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Headers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Headers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEasyCsvInfo Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EasyCsv,
	nullptr,
	&NewStructOps,
	"EasyCsvInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEasyCsvInfo>(),
	alignof(FEasyCsvInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEasyCsvInfo;
UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEasyCsvInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEasyCsvInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEasyCsvInfo, (UObject*)Z_Construct_UPackage__Script_EasyCsv(ETypeConstructPhase::Outer), TEXT("EasyCsvInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FEasyCsvInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEasyCsvInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEasyCsvInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEasyCsvInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEasyCsvInfo ********************************************************

// ********** Begin Class UEasyCsv Function ConvertQuatStringToRotator *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ConvertQuatStringToRotator_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventConvertQuatStringToRotator_Parms
	{
		FString InString;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Conversion" },
		{ "Comment", "/**\n\x09 * Convert a string that represents an FQuat into an FRotator.\n\x09 * @return FRotator\n\x09 * @param InString An FQuat expressed as a string (ex: \"X=0 Y=0 Z=0 W=0\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Convert a string that represents an FQuat into an FRotator.\n@return FRotator\n@param InString An FQuat expressed as a string (ex: \"X=0 Y=0 Z=0 W=0\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertQuatStringToRotator constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertQuatStringToRotator constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertQuatStringToRotator Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertQuatStringToRotator_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertQuatStringToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertQuatStringToRotator Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ConvertQuatStringToRotator", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventConvertQuatStringToRotator_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventConvertQuatStringToRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ConvertQuatStringToRotator(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execConvertQuatStringToRotator)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UEasyCsv::ConvertQuatStringToRotator(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ConvertQuatStringToRotator *******************************

// ********** Begin Class UEasyCsv Function ConvertQuatStringToRotatorArray ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ConvertQuatStringToRotatorArray_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventConvertQuatStringToRotatorArray_Parms
	{
		FString InString;
		TArray<FRotator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Conversion" },
		{ "Comment", "/**\n\x09 * Convert a string into an array of FRotators.\n\x09 * @return Array of FRotator\n\x09 * @param InString An array of FQuats expressed as a string (ex: \"(\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\")\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Convert a string into an array of FRotators.\n@return Array of FRotator\n@param InString An array of FQuats expressed as a string (ex: \"(\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\")\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertQuatStringToRotatorArray constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertQuatStringToRotatorArray constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertQuatStringToRotatorArray Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertQuatStringToRotatorArray_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertQuatStringToRotatorArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertQuatStringToRotatorArray Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ConvertQuatStringToRotatorArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventConvertQuatStringToRotatorArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventConvertQuatStringToRotatorArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ConvertQuatStringToRotatorArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execConvertQuatStringToRotatorArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRotator>*)Z_Param__Result=UEasyCsv::ConvertQuatStringToRotatorArray(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ConvertQuatStringToRotatorArray **************************

// ********** Begin Class UEasyCsv Function ConvertStringToQuat ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ConvertStringToQuat_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventConvertStringToQuat_Parms
	{
		FString InString;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Conversion" },
		{ "Comment", "/**\n\x09 * Convert a string into an FQuat.\n\x09 * @return FQuat\n\x09 * @param InString An FQuat expressed as a string (ex: \"X=0 Y=0 Z=0 W=0\"). ConvertQuatStringToRotator can convert quaternions to FRotators.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Convert a string into an FQuat.\n@return FQuat\n@param InString An FQuat expressed as a string (ex: \"X=0 Y=0 Z=0 W=0\"). ConvertQuatStringToRotator can convert quaternions to FRotators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertStringToQuat constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertStringToQuat constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertStringToQuat Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToQuat_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertStringToQuat Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ConvertStringToQuat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventConvertStringToQuat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventConvertStringToQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ConvertStringToQuat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execConvertStringToQuat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=UEasyCsv::ConvertStringToQuat(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ConvertStringToQuat **************************************

// ********** Begin Class UEasyCsv Function ConvertStringToQuatArray *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ConvertStringToQuatArray_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventConvertStringToQuatArray_Parms
	{
		FString InString;
		TArray<FQuat> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Conversion" },
		{ "Comment", "/**\n\x09 * Convert a string into an array of FQuats.\n\x09 * @return Array of FQuat\n\x09 * @param InString An array of FQuats expressed as a string (ex: \"(\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\")\"). ConvertQuatStringToRotatorArray can convert quaternions to FRotators.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Convert a string into an array of FQuats.\n@return Array of FQuat\n@param InString An array of FQuats expressed as a string (ex: \"(\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\",\"X=0 Y=0 Z=0 W=0\")\"). ConvertQuatStringToRotatorArray can convert quaternions to FRotators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertStringToQuatArray constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertStringToQuatArray constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertStringToQuatArray Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToQuatArray_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToQuatArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertStringToQuatArray Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ConvertStringToQuatArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventConvertStringToQuatArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventConvertStringToQuatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ConvertStringToQuatArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execConvertStringToQuatArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FQuat>*)Z_Param__Result=UEasyCsv::ConvertStringToQuatArray(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ConvertStringToQuatArray *********************************

// ********** Begin Class UEasyCsv Function ConvertStringToRotator *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ConvertStringToRotator_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventConvertStringToRotator_Parms
	{
		FString InString;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Conversion" },
		{ "Comment", "/**\n\x09 * Convert a string into an FRotator. Supports more formats than the built-in engine conversion.\n\x09 * @return FRotator\n\x09 * @param InString A rotator expressed as a string (ex: \"P=0 Y=0 R=0\" or \"Pitch=0 Yaw=0 Roll=0\"). Does not work for Quaternions expressed as string (use ConvertStringToQuat or ConvertQuatStringToRotator for that).\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Convert a string into an FRotator. Supports more formats than the built-in engine conversion.\n@return FRotator\n@param InString A rotator expressed as a string (ex: \"P=0 Y=0 R=0\" or \"Pitch=0 Yaw=0 Roll=0\"). Does not work for Quaternions expressed as string (use ConvertStringToQuat or ConvertQuatStringToRotator for that)." },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertStringToRotator constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertStringToRotator constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertStringToRotator Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToRotator_Parms, InString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertStringToRotator Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ConvertStringToRotator", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventConvertStringToRotator_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventConvertStringToRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ConvertStringToRotator(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execConvertStringToRotator)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UEasyCsv::ConvertStringToRotator(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ConvertStringToRotator ***********************************

// ********** Begin Class UEasyCsv Function ConvertStringToRotatorArray ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ConvertStringToRotatorArray_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventConvertStringToRotatorArray_Parms
	{
		FString InString;
		TArray<FRotator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Conversion" },
		{ "Comment", "/**\n\x09 * Converts a string into an array of FRotators. Supports more formats than the built-in engine conversion.\n\x09 * @return Array of FRotators\n\x09 * @param InString An array of rotators expressed as a string (ex: \"(\"P=0 Y=0 R=0\",\"P=1 Y=1 R=1\",\"P=2 Y=2 R=2\")\"). Does not work for Quaternions expressed as string (use ConvertStringToQuatArray or ConvertQuatStringToRotatorArray for that).\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Converts a string into an array of FRotators. Supports more formats than the built-in engine conversion.\n@return Array of FRotators\n@param InString An array of rotators expressed as a string (ex: \"(\"P=0 Y=0 R=0\",\"P=1 Y=1 R=1\",\"P=2 Y=2 R=2\")\"). Does not work for Quaternions expressed as string (use ConvertStringToQuatArray or ConvertQuatStringToRotatorArray for that)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertStringToRotatorArray constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertStringToRotatorArray constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertStringToRotatorArray Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToRotatorArray_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventConvertStringToRotatorArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertStringToRotatorArray Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ConvertStringToRotatorArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventConvertStringToRotatorArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventConvertStringToRotatorArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ConvertStringToRotatorArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execConvertStringToRotatorArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRotator>*)Z_Param__Result=UEasyCsv::ConvertStringToRotatorArray(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ConvertStringToRotatorArray ******************************

// ********** Begin Class UEasyCsv Function DoesStringRepresentContainer ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_DoesStringRepresentContainer_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventDoesStringRepresentContainer_Parms
	{
		FString InString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|String" },
		{ "Comment", "/**\n\x09 * Returns true if the specified string represents a struct, array, map or set.\n\x09 * @return bool\n\x09 * @param InString A string that may represent a container. If you've already parsed a CSV and have nested structs, arrays, maps or sets in specific cells this method will detect them.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns true if the specified string represents a struct, array, map or set.\n@return bool\n@param InString A string that may represent a container. If you've already parsed a CSV and have nested structs, arrays, maps or sets in specific cells this method will detect them." },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesStringRepresentContainer constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyCsv_eventDoesStringRepresentContainer_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesStringRepresentContainer constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesStringRepresentContainer Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventDoesStringRepresentContainer_Parms, InString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventDoesStringRepresentContainer_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoesStringRepresentContainer Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "DoesStringRepresentContainer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventDoesStringRepresentContainer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventDoesStringRepresentContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_DoesStringRepresentContainer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execDoesStringRepresentContainer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEasyCsv::DoesStringRepresentContainer(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function DoesStringRepresentContainer *****************************

// ********** Begin Class UEasyCsv Function EscapeCharacters ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_EscapeCharacters_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventEscapeCharacters_Parms
	{
		FString InString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|String" },
		{ "Comment", "/**\n\x09 * Returns an const FString& with all characters that could be escaped turned into escaped characters ('\\\"', '\\r', '\\n', etc)\n\x09 * @return const FString& A string with all escaped characters converted into standard characters ('\\\"', '\\r', '\\n', etc)\n\x09 * @param InString A string that may contain escaped characters ('\\\"', '\\r', '\\n', etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns an const FString& with all characters that could be escaped turned into escaped characters ('\\\"', '\\r', '\\n', etc)\n@return const FString& A string with all escaped characters converted into standard characters ('\\\"', '\\r', '\\n', etc)\n@param InString A string that may contain escaped characters ('\\\"', '\\r', '\\n', etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EscapeCharacters constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EscapeCharacters constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EscapeCharacters Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventEscapeCharacters_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventEscapeCharacters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EscapeCharacters Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "EscapeCharacters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventEscapeCharacters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventEscapeCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_EscapeCharacters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execEscapeCharacters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEasyCsv::EscapeCharacters(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function EscapeCharacters *****************************************

// ********** Begin Class UEasyCsv Function GetColumnAsStringArray *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetColumnAsStringArray_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetColumnAsStringArray_Parms
	{
		FEasyCsvInfo CSV_Info;
		FString ColumnName;
		bool Success;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns all values in a column, given the name of said column in the CSV, as an array of strings.\n\x09 * @return All values in a column, given the name of said column in the CSV, as an array of strings\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 * @param ColumnName The name of the column in the CSV\n\x09 * @param Success Whether or not the column could be found by name\n\x09 */" },
		{ "Keywords", "headers, cells, columns" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns all values in a column, given the name of said column in the CSV, as an array of strings.\n@return All values in a column, given the name of said column in the CSV, as an array of strings\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n@param ColumnName The name of the column in the CSV\n@param Success Whether or not the column could be found by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetColumnAsStringArray constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
	static void NewProp_Success_SetBit(void* Obj)
	{
		((EasyCsv_eventGetColumnAsStringArray_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetColumnAsStringArray constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetColumnAsStringArray Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetColumnAsStringArray_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetColumnAsStringArray_Parms, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventGetColumnAsStringArray_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetColumnAsStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColumnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetColumnAsStringArray Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetColumnAsStringArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetColumnAsStringArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetColumnAsStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetColumnAsStringArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetColumnAsStringArray)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_GET_PROPERTY(FStrProperty,Z_Param_ColumnName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UEasyCsv::GetColumnAsStringArray(Z_Param_Out_CSV_Info,Z_Param_ColumnName,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetColumnAsStringArray ***********************************

// ********** Begin Class UEasyCsv Function GetColumnCount *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetColumnCount_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetColumnCount_Parms
	{
		FEasyCsvInfo CSV_Info;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns the number of columns in a given CSV, not counting the Row Keys.\n\x09 * If no valid CSV_Info struct is passed in, this will return -1.\n\x09 * @return An integer reflecting the number of columns in a given CSV_Info struct's CSV map.\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 */" },
		{ "Keywords", "headers, columns" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns the number of columns in a given CSV, not counting the Row Keys.\nIf no valid CSV_Info struct is passed in, this will return -1.\n@return An integer reflecting the number of columns in a given CSV_Info struct's CSV map.\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetColumnCount constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetColumnCount constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetColumnCount Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetColumnCount_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetColumnCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetColumnCount Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetColumnCount", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetColumnCount_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetColumnCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetColumnCount(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetColumnCount)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEasyCsv::GetColumnCount(Z_Param_Out_CSV_Info);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetColumnCount *******************************************

// ********** Begin Class UEasyCsv Function GetFTextComponentsFromRepresentativeFString ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetFTextComponentsFromRepresentativeFString_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms
	{
		FString InString;
		FString Namespace;
		FString Key;
		FString SourceString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|String" },
		{ "Comment", "/**\n\x09 * Returns the namespace (if applicable), key (if applicable), and source string from an const FString& that represents a localizable FText with metadata (NSLOCTEXT, LOCTEXT, INVTEXT).\n\x09 * This function can be used to strip the metadata out of an const FString& that represents a localizable FText if you just use the return value 'SourceString.'\n\x09 * @param InString A string that represents a localizable FText with metadata (NSLOCTEXT, LOCTEXT, INVTEXT)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns the namespace (if applicable), key (if applicable), and source string from an const FString& that represents a localizable FText with metadata (NSLOCTEXT, LOCTEXT, INVTEXT).\nThis function can be used to strip the metadata out of an const FString& that represents a localizable FText if you just use the return value 'SourceString.'\n@param InString A string that represents a localizable FText with metadata (NSLOCTEXT, LOCTEXT, INVTEXT)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFTextComponentsFromRepresentativeFString constinit property declarations 
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFTextComponentsFromRepresentativeFString constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFTextComponentsFromRepresentativeFString Property Definitions ******
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms, InString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms, Namespace), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceString = { "SourceString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms, SourceString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceString,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFTextComponentsFromRepresentativeFString Property Definitions ********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetFTextComponentsFromRepresentativeFString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetFTextComponentsFromRepresentativeFString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetFTextComponentsFromRepresentativeFString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetFTextComponentsFromRepresentativeFString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Namespace);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceString);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEasyCsv::GetFTextComponentsFromRepresentativeFString(Z_Param_InString,Z_Param_Out_Namespace,Z_Param_Out_Key,Z_Param_Out_SourceString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetFTextComponentsFromRepresentativeFString **************

// ********** Begin Class UEasyCsv Function GetMapHeaders ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetMapHeaders_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetMapHeaders_Parms
	{
		FEasyCsvInfo CSV_Info;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns the headers/column names for the given CSV as an array of FString, not counting the \"Key\" header.\n\x09 * If no CSV is loaded, this array will be blank.\n\x09 * @return An array of column names / headers as FString\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 */" },
		{ "Keywords", "columns" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns the headers/column names for the given CSV as an array of FString, not counting the \"Key\" header.\nIf no CSV is loaded, this array will be blank.\n@return An array of column names / headers as FString\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMapHeaders constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMapHeaders constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMapHeaders Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapHeaders_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMapHeaders Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetMapHeaders", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetMapHeaders_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetMapHeaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetMapHeaders(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetMapHeaders)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UEasyCsv::GetMapHeaders(Z_Param_Out_CSV_Info);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetMapHeaders ********************************************

// ********** Begin Class UEasyCsv Function GetMapKeyIndex *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetMapKeyIndex_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetMapKeyIndex_Parms
	{
		FEasyCsvInfo CSV_Info;
		FName Key;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns the index of the given key in the CSV. -1 will be returned if the key is not found or if the CSV is not loaded.\n\x09 * This function can be used to find a specific row index in the CSV given the row key.\n\x09 * @return The index of the given key in the CSV\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 * @param Key The key for the given row in the CSV\n\x09 */" },
		{ "Keywords", "rows, keys" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns the index of the given key in the CSV. -1 will be returned if the key is not found or if the CSV is not loaded.\nThis function can be used to find a specific row index in the CSV given the row key.\n@return The index of the given key in the CSV\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n@param Key The key for the given row in the CSV" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMapKeyIndex constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMapKeyIndex constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMapKeyIndex Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapKeyIndex_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapKeyIndex_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapKeyIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMapKeyIndex Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetMapKeyIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetMapKeyIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetMapKeyIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetMapKeyIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetMapKeyIndex)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEasyCsv::GetMapKeyIndex(Z_Param_Out_CSV_Info,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetMapKeyIndex *******************************************

// ********** Begin Class UEasyCsv Function GetMapKeys *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetMapKeys_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetMapKeys_Parms
	{
		FEasyCsvInfo CSV_Info;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns the keys for the given CSV as an array of FNames. \n\x09 * This is deterministic; the keys will always be in the same order and will correspond to the order of the CSV. \n\x09 * If no CSV is loaded, this array will be blank.\n\x09 * @return An array of FNames corresponding to the CSV's row keys\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 */" },
		{ "Keywords", "rows" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns the keys for the given CSV as an array of FNames.\nThis is deterministic; the keys will always be in the same order and will correspond to the order of the CSV.\nIf no CSV is loaded, this array will be blank.\n@return An array of FNames corresponding to the CSV's row keys\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMapKeys constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMapKeys constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMapKeys Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapKeys_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetMapKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMapKeys Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetMapKeys", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetMapKeys_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetMapKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetMapKeys(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetMapKeys)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UEasyCsv::GetMapKeys(Z_Param_Out_CSV_Info);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetMapKeys ***********************************************

// ********** Begin Class UEasyCsv Function GetRowAsStringArray ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetRowAsStringArray_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetRowAsStringArray_Parms
	{
		FEasyCsvInfo CSV_Info;
		FName RowKey;
		bool Success;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns all values in a row given the key of a row in the CSV, as an array of strings.\n\x09 * @return All values in a row given the key of a row in the CSV, as an array of strings\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 * @param RowKey The key of the row in the CSV\n\x09 * @param Success Whether or not the row could be found by key\n\x09 */" },
		{ "Keywords", "keys, cells, rows" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns all values in a row given the key of a row in the CSV, as an array of strings.\n@return All values in a row given the key of a row in the CSV, as an array of strings\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n@param RowKey The key of the row in the CSV\n@param Success Whether or not the row could be found by key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRowAsStringArray constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowKey;
	static void NewProp_Success_SetBit(void* Obj)
	{
		((EasyCsv_eventGetRowAsStringArray_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRowAsStringArray constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRowAsStringArray Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowAsStringArray_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RowKey = { "RowKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowAsStringArray_Parms, RowKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowKey_MetaData), NewProp_RowKey_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventGetRowAsStringArray_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowAsStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RowKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRowAsStringArray Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetRowAsStringArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetRowAsStringArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetRowAsStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetRowAsStringArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetRowAsStringArray)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowKey);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UEasyCsv::GetRowAsStringArray(Z_Param_Out_CSV_Info,Z_Param_RowKey,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetRowAsStringArray **************************************

// ********** Begin Class UEasyCsv Function GetRowCount ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetRowCount_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetRowCount_Parms
	{
		FEasyCsvInfo CSV_Info;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns the number of rows in a given CSV, not counting the column headers.\n\x09 * If no valid CSV_Info struct is passed in, this will return -1.\n\x09 * @return An integer reflecting the number of rows in a given CSV_Info struct's CSV map.\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 */" },
		{ "Keywords", "keys, rows" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns the number of rows in a given CSV, not counting the column headers.\nIf no valid CSV_Info struct is passed in, this will return -1.\n@return An integer reflecting the number of rows in a given CSV_Info struct's CSV map.\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRowCount constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRowCount constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRowCount Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowCount_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRowCount Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetRowCount", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetRowCount_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetRowCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetRowCount(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetRowCount)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEasyCsv::GetRowCount(Z_Param_Out_CSV_Info);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetRowCount **********************************************

// ********** Begin Class UEasyCsv Function GetRowValueAsString ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_GetRowValueAsString_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventGetRowValueAsString_Parms
	{
		FEasyCsvInfo CSV_Info;
		FString ColumnName;
		FName RowKey;
		bool Success;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Post-Parse Operations" },
		{ "Comment", "/**\n\x09 * Returns a single value given a column name and a row key as a string.\n\x09 * @return A single value given a column name and a row key as a string\n\x09 * @param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n\x09 * @param ColumnName The name of the column in the CSV\n\x09 * @param RowKey The key for the given row in the CSV\n\x09 * @param Success Whether or not the value could be found by column name and/or row key\n\x09 */" },
		{ "Keywords", "cells, keys, headers, columns" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns a single value given a column name and a row key as a string.\n@return A single value given a column name and a row key as a string\n@param CSV_Info A structure containing parsed CSV data. Can be created using MakeCSV_InfoFromString.\n@param ColumnName The name of the column in the CSV\n@param RowKey The key for the given row in the CSV\n@param Success Whether or not the value could be found by column name and/or row key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSV_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRowValueAsString constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSV_Info;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowKey;
	static void NewProp_Success_SetBit(void* Obj)
	{
		((EasyCsv_eventGetRowValueAsString_Parms*)Obj)->Success = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRowValueAsString constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRowValueAsString Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSV_Info = { "CSV_Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowValueAsString_Parms, CSV_Info), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSV_Info_MetaData), NewProp_CSV_Info_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowValueAsString_Parms, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RowKey = { "RowKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowValueAsString_Parms, RowKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowKey_MetaData), NewProp_RowKey_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventGetRowValueAsString_Parms), &UHT_STATICS::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventGetRowValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSV_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColumnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RowKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRowValueAsString Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "GetRowValueAsString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventGetRowValueAsString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventGetRowValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_GetRowValueAsString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execGetRowValueAsString)
{
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_CSV_Info);
	P_GET_PROPERTY(FStrProperty,Z_Param_ColumnName);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowKey);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEasyCsv::GetRowValueAsString(Z_Param_Out_CSV_Info,Z_Param_ColumnName,Z_Param_RowKey,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function GetRowValueAsString **************************************

// ********** Begin Class UEasyCsv Function LoadStringFromLocalFile ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_LoadStringFromLocalFile_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventLoadStringFromLocalFile_Parms
	{
		FString InPath;
		FString OutString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Google Sheets Operator|Utilities" },
		{ "Comment", "/**\n\x09 * Loads a text-based file from the specified path and outputs its contents as a string.\n\x09 * @return Whether or not the file could be successfully loaded\n\x09 * @param InPath The file path to the file you'd like to load\n\x09 * @param OutString The contents of the file as a string \n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Loads a text-based file from the specified path and outputs its contents as a string.\n@return Whether or not the file could be successfully loaded\n@param InPath The file path to the file you'd like to load\n@param OutString The contents of the file as a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadStringFromLocalFile constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyCsv_eventLoadStringFromLocalFile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadStringFromLocalFile constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadStringFromLocalFile Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventLoadStringFromLocalFile_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventLoadStringFromLocalFile_Parms, OutString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventLoadStringFromLocalFile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadStringFromLocalFile Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "LoadStringFromLocalFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventLoadStringFromLocalFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventLoadStringFromLocalFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_LoadStringFromLocalFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execLoadStringFromLocalFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEasyCsv::LoadStringFromLocalFile(Z_Param_InPath,Z_Param_Out_OutString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function LoadStringFromLocalFile **********************************

// ********** Begin Class UEasyCsv Function MakeCsvInfoStructFromFile ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_MakeCsvInfoStructFromFile_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventMakeCsvInfoStructFromFile_Parms
	{
		FString InPath;
		FEasyCsvInfo OutCsvInfo;
		bool ParseHeaders;
		bool ParseKeys;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Main" },
		{ "Comment", "/**\n\x09 * Used to parse a CSV into a map containing each cell's data as part of an array of FString. This is the node you want to start with.\n\x09 * @return Whether or not the parsing was successful\n\x09 * @param OutCsvInfo A struct with parsed CSV information. This can be used to access the information directly or pass into other easyCSV functions.\n\x09 * @param InPath This is the path to the CSV file\n\x09 * @param ParseHeaders If true, the parser will expect the first row of the CSV to be column labels, or headers. If false, vales will be generated.\n\x09 * @param ParseKeys If true, the parser will expect the first column of the CSV to be row labels, or keys. If false, values will be generated.\n\x09 */" },
		{ "CPP_Default_ParseHeaders", "true" },
		{ "CPP_Default_ParseKeys", "true" },
		{ "DisplayName", "Make CSV Info From File" },
		{ "Keywords", "parse" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ScriptName", "MakeCsvInfoStructFromFile" },
		{ "ToolTip", "Used to parse a CSV into a map containing each cell's data as part of an array of FString. This is the node you want to start with.\n@return Whether or not the parsing was successful\n@param OutCsvInfo A struct with parsed CSV information. This can be used to access the information directly or pass into other easyCSV functions.\n@param InPath This is the path to the CSV file\n@param ParseHeaders If true, the parser will expect the first row of the CSV to be column labels, or headers. If false, vales will be generated.\n@param ParseKeys If true, the parser will expect the first column of the CSV to be row labels, or keys. If false, values will be generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeCsvInfoStructFromFile constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCsvInfo;
	static void NewProp_ParseHeaders_SetBit(void* Obj)
	{
		((EasyCsv_eventMakeCsvInfoStructFromFile_Parms*)Obj)->ParseHeaders = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ParseHeaders;
	static void NewProp_ParseKeys_SetBit(void* Obj)
	{
		((EasyCsv_eventMakeCsvInfoStructFromFile_Parms*)Obj)->ParseKeys = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ParseKeys;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyCsv_eventMakeCsvInfoStructFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeCsvInfoStructFromFile constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeCsvInfoStructFromFile Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventMakeCsvInfoStructFromFile_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutCsvInfo = { "OutCsvInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventMakeCsvInfoStructFromFile_Parms, OutCsvInfo), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(0, nullptr) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ParseHeaders = { "ParseHeaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventMakeCsvInfoStructFromFile_Parms), &UHT_STATICS::NewProp_ParseHeaders_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ParseKeys = { "ParseKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventMakeCsvInfoStructFromFile_Parms), &UHT_STATICS::NewProp_ParseKeys_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventMakeCsvInfoStructFromFile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCsvInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParseHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParseKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeCsvInfoStructFromFile Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "MakeCsvInfoStructFromFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventMakeCsvInfoStructFromFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventMakeCsvInfoStructFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_MakeCsvInfoStructFromFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execMakeCsvInfoStructFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_OutCsvInfo);
	P_GET_UBOOL(Z_Param_ParseHeaders);
	P_GET_UBOOL(Z_Param_ParseKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEasyCsv::MakeCsvInfoStructFromFile(Z_Param_InPath,Z_Param_Out_OutCsvInfo,Z_Param_ParseHeaders,Z_Param_ParseKeys);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function MakeCsvInfoStructFromFile ********************************

// ********** Begin Class UEasyCsv Function MakeCsvInfoStructFromString ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_MakeCsvInfoStructFromString_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventMakeCsvInfoStructFromString_Parms
	{
		FString InString;
		FEasyCsvInfo OutCsvInfo;
		bool ParseHeaders;
		bool ParseKeys;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Main" },
		{ "Comment", "/**\n\x09 * Used to parse a CSV into a map containing each cell's data as part of an array of FString. This is the node you want to start with.\n\x09 * @return Whether or not the parsing was successful\n\x09 * @param OutCsvInfo A struct with parsed CSV information. This can be used to access the information directly or pass into other easyCSV functions.\n\x09 * @param InString This is the string data found inside the CSV file. Can be loaded from a file using LoadStringFromFile.\n\x09 * @param ParseHeaders If true, the parser will expect the first row of the CSV to be column labels, or headers. If false, vales will be generated.\n\x09 * @param ParseKeys If true, the parser will expect the first column of the CSV to be row labels, or keys. If false, values will be generated.\n\x09 */" },
		{ "CPP_Default_ParseHeaders", "true" },
		{ "CPP_Default_ParseKeys", "true" },
		{ "DisplayName", "Make CSV Info From String" },
		{ "Keywords", "parse" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ScriptName", "MakeCsvInfoStructFromString" },
		{ "ToolTip", "Used to parse a CSV into a map containing each cell's data as part of an array of FString. This is the node you want to start with.\n@return Whether or not the parsing was successful\n@param OutCsvInfo A struct with parsed CSV information. This can be used to access the information directly or pass into other easyCSV functions.\n@param InString This is the string data found inside the CSV file. Can be loaded from a file using LoadStringFromFile.\n@param ParseHeaders If true, the parser will expect the first row of the CSV to be column labels, or headers. If false, vales will be generated.\n@param ParseKeys If true, the parser will expect the first column of the CSV to be row labels, or keys. If false, values will be generated." },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeCsvInfoStructFromString constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCsvInfo;
	static void NewProp_ParseHeaders_SetBit(void* Obj)
	{
		((EasyCsv_eventMakeCsvInfoStructFromString_Parms*)Obj)->ParseHeaders = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ParseHeaders;
	static void NewProp_ParseKeys_SetBit(void* Obj)
	{
		((EasyCsv_eventMakeCsvInfoStructFromString_Parms*)Obj)->ParseKeys = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ParseKeys;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyCsv_eventMakeCsvInfoStructFromString_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeCsvInfoStructFromString constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeCsvInfoStructFromString Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventMakeCsvInfoStructFromString_Parms, InString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutCsvInfo = { "OutCsvInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventMakeCsvInfoStructFromString_Parms, OutCsvInfo), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(0, nullptr) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ParseHeaders = { "ParseHeaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventMakeCsvInfoStructFromString_Parms), &UHT_STATICS::NewProp_ParseHeaders_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ParseKeys = { "ParseKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventMakeCsvInfoStructFromString_Parms), &UHT_STATICS::NewProp_ParseKeys_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventMakeCsvInfoStructFromString_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCsvInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParseHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParseKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeCsvInfoStructFromString Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "MakeCsvInfoStructFromString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventMakeCsvInfoStructFromString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventMakeCsvInfoStructFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_MakeCsvInfoStructFromString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execMakeCsvInfoStructFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_OutCsvInfo);
	P_GET_UBOOL(Z_Param_ParseHeaders);
	P_GET_UBOOL(Z_Param_ParseKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEasyCsv::MakeCsvInfoStructFromString(Z_Param_InString,Z_Param_Out_OutCsvInfo,Z_Param_ParseHeaders,Z_Param_ParseKeys);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function MakeCsvInfoStructFromString ******************************

// ********** Begin Class UEasyCsv Function ReplaceEscapedCharacters *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_ReplaceEscapedCharacters_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventReplaceEscapedCharacters_Parms
	{
		FString InString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|String" },
		{ "Comment", "/**\n\x09 * Returns an const FString& with all escaped characters turned into characters ('\\\"', '\\r', '\\n', etc). Also removes all leading backslashes.\n\x09 * @return const FString& A string with all escaped characters converted into standard characters ('\\\"', '\\r', '\\n', etc)\n\x09 * @param InString A string that may contain escaped characters ('\\\"', '\\r', '\\n', etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Returns an const FString& with all escaped characters turned into characters ('\\\"', '\\r', '\\n', etc). Also removes all leading backslashes.\n@return const FString& A string with all escaped characters converted into standard characters ('\\\"', '\\r', '\\n', etc)\n@param InString A string that may contain escaped characters ('\\\"', '\\r', '\\n', etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReplaceEscapedCharacters constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReplaceEscapedCharacters constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReplaceEscapedCharacters Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventReplaceEscapedCharacters_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventReplaceEscapedCharacters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReplaceEscapedCharacters Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "ReplaceEscapedCharacters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventReplaceEscapedCharacters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventReplaceEscapedCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_ReplaceEscapedCharacters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execReplaceEscapedCharacters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEasyCsv::ReplaceEscapedCharacters(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function ReplaceEscapedCharacters *********************************

// ********** Begin Class UEasyCsv Function SaveStringToFile ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_SaveStringToFile_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventSaveStringToFile_Parms
	{
		FString InString;
		FString InDirectory;
		FString Filename;
		FString Extension;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Utlities" },
		{ "Comment", "/**\n\x09 * Saves a new file using an input string. Always overwrites and does not validate paths, so please be sure the directory exists. \n\x09 * Meant for saving a CSV, but can be used for any text-based file. Returns true if write is successful.\n\x09 * @param InString The string to save to a file\n\x09 * @param InDirectory The folder in which to save the new file\n\x09 * @param Filename The new file's name\n\x09 * @param Extension The file extension for the new file\n\x09 */" },
		{ "CPP_Default_Extension", ".csv" },
		{ "CPP_Default_Filename", "New_CSV" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Saves a new file using an input string. Always overwrites and does not validate paths, so please be sure the directory exists.\nMeant for saving a CSV, but can be used for any text-based file. Returns true if write is successful.\n@param InString The string to save to a file\n@param InDirectory The folder in which to save the new file\n@param Filename The new file's name\n@param Extension The file extension for the new file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveStringToFile constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyCsv_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveStringToFile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveStringToFile Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventSaveStringToFile_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InDirectory = { "InDirectory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventSaveStringToFile_Parms, InDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirectory_MetaData), NewProp_InDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventSaveStringToFile_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventSaveStringToFile_Parms, Extension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extension_MetaData), NewProp_Extension_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventSaveStringToFile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Extension,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveStringToFile Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "SaveStringToFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventSaveStringToFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventSaveStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_SaveStringToFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execSaveStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_PROPERTY(FStrProperty,Z_Param_InDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEasyCsv::SaveStringToFile(Z_Param_InString,Z_Param_InDirectory,Z_Param_Filename,Z_Param_Extension);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function SaveStringToFile *****************************************

// ********** Begin Class UEasyCsv Function SaveStringToFileWithFullPath ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEasyCsv_SaveStringToFileWithFullPath_Statics
struct UHT_STATICS
{
	struct EasyCsv_eventSaveStringToFileWithFullPath_Parms
	{
		FString InString;
		FString InFullPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "easyCSV|Utlities" },
		{ "Comment", "/**\n\x09 * Saves a new file using an input string. Always overwrites and does not validate paths, so please be sure the directory exists. \n\x09 * Meant for saving a CSV, but can be used for any text-based file. Returns true if write is successful.\n\x09 * @param InString The string to save to a file\n\x09 * @param InFullPath The folder, filename and extension used to save the new file\n\x09 */" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
		{ "ToolTip", "Saves a new file using an input string. Always overwrites and does not validate paths, so please be sure the directory exists.\nMeant for saving a CSV, but can be used for any text-based file. Returns true if write is successful.\n@param InString The string to save to a file\n@param InFullPath The folder, filename and extension used to save the new file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveStringToFileWithFullPath constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFullPath;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyCsv_eventSaveStringToFileWithFullPath_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveStringToFileWithFullPath constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveStringToFileWithFullPath Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventSaveStringToFileWithFullPath_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InFullPath = { "InFullPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EasyCsv_eventSaveStringToFileWithFullPath_Parms, InFullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFullPath_MetaData), NewProp_InFullPath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyCsv_eventSaveStringToFileWithFullPath_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InFullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveStringToFileWithFullPath Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEasyCsv, nullptr, "SaveStringToFileWithFullPath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EasyCsv_eventSaveStringToFileWithFullPath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EasyCsv_eventSaveStringToFileWithFullPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyCsv_SaveStringToFileWithFullPath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEasyCsv::execSaveStringToFileWithFullPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_PROPERTY(FStrProperty,Z_Param_InFullPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEasyCsv::SaveStringToFileWithFullPath(Z_Param_InString,Z_Param_InFullPath);
	P_NATIVE_END;
}
// ********** End Class UEasyCsv Function SaveStringToFileWithFullPath *****************************

// ********** Begin Class UEasyCsv *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEasyCsv_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "EasyCsv.h" },
		{ "ModuleRelativePath", "Public/EasyCsv.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEasyCsv constinit property declarations *********************************
// ********** End Class UEasyCsv constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertQuatStringToRotator"), .Pointer = &UEasyCsv::execConvertQuatStringToRotator },
		{ .NameUTF8 = UTF8TEXT("ConvertQuatStringToRotatorArray"), .Pointer = &UEasyCsv::execConvertQuatStringToRotatorArray },
		{ .NameUTF8 = UTF8TEXT("ConvertStringToQuat"), .Pointer = &UEasyCsv::execConvertStringToQuat },
		{ .NameUTF8 = UTF8TEXT("ConvertStringToQuatArray"), .Pointer = &UEasyCsv::execConvertStringToQuatArray },
		{ .NameUTF8 = UTF8TEXT("ConvertStringToRotator"), .Pointer = &UEasyCsv::execConvertStringToRotator },
		{ .NameUTF8 = UTF8TEXT("ConvertStringToRotatorArray"), .Pointer = &UEasyCsv::execConvertStringToRotatorArray },
		{ .NameUTF8 = UTF8TEXT("DoesStringRepresentContainer"), .Pointer = &UEasyCsv::execDoesStringRepresentContainer },
		{ .NameUTF8 = UTF8TEXT("EscapeCharacters"), .Pointer = &UEasyCsv::execEscapeCharacters },
		{ .NameUTF8 = UTF8TEXT("GetColumnAsStringArray"), .Pointer = &UEasyCsv::execGetColumnAsStringArray },
		{ .NameUTF8 = UTF8TEXT("GetColumnCount"), .Pointer = &UEasyCsv::execGetColumnCount },
		{ .NameUTF8 = UTF8TEXT("GetFTextComponentsFromRepresentativeFString"), .Pointer = &UEasyCsv::execGetFTextComponentsFromRepresentativeFString },
		{ .NameUTF8 = UTF8TEXT("GetMapHeaders"), .Pointer = &UEasyCsv::execGetMapHeaders },
		{ .NameUTF8 = UTF8TEXT("GetMapKeyIndex"), .Pointer = &UEasyCsv::execGetMapKeyIndex },
		{ .NameUTF8 = UTF8TEXT("GetMapKeys"), .Pointer = &UEasyCsv::execGetMapKeys },
		{ .NameUTF8 = UTF8TEXT("GetRowAsStringArray"), .Pointer = &UEasyCsv::execGetRowAsStringArray },
		{ .NameUTF8 = UTF8TEXT("GetRowCount"), .Pointer = &UEasyCsv::execGetRowCount },
		{ .NameUTF8 = UTF8TEXT("GetRowValueAsString"), .Pointer = &UEasyCsv::execGetRowValueAsString },
		{ .NameUTF8 = UTF8TEXT("LoadStringFromLocalFile"), .Pointer = &UEasyCsv::execLoadStringFromLocalFile },
		{ .NameUTF8 = UTF8TEXT("MakeCsvInfoStructFromFile"), .Pointer = &UEasyCsv::execMakeCsvInfoStructFromFile },
		{ .NameUTF8 = UTF8TEXT("MakeCsvInfoStructFromString"), .Pointer = &UEasyCsv::execMakeCsvInfoStructFromString },
		{ .NameUTF8 = UTF8TEXT("ReplaceEscapedCharacters"), .Pointer = &UEasyCsv::execReplaceEscapedCharacters },
		{ .NameUTF8 = UTF8TEXT("SaveStringToFile"), .Pointer = &UEasyCsv::execSaveStringToFile },
		{ .NameUTF8 = UTF8TEXT("SaveStringToFileWithFullPath"), .Pointer = &UEasyCsv::execSaveStringToFileWithFullPath },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyCsv_ConvertQuatStringToRotator, "ConvertQuatStringToRotator" }, // df3731dc60026afaf6f8b8ac6c46028ad12b4bad
		{ &Z_Construct_UFunction_UEasyCsv_ConvertQuatStringToRotatorArray, "ConvertQuatStringToRotatorArray" }, // a14903803b7237f8bb20a1cd78189ba405305a49
		{ &Z_Construct_UFunction_UEasyCsv_ConvertStringToQuat, "ConvertStringToQuat" }, // e1e83317253335a9d800496bc9b1b58aa078d65e
		{ &Z_Construct_UFunction_UEasyCsv_ConvertStringToQuatArray, "ConvertStringToQuatArray" }, // 4ce245058a85b9be6b9a594c29e9a451079f489e
		{ &Z_Construct_UFunction_UEasyCsv_ConvertStringToRotator, "ConvertStringToRotator" }, // 9149b188701a899528ef673720b59c2ea1e1c648
		{ &Z_Construct_UFunction_UEasyCsv_ConvertStringToRotatorArray, "ConvertStringToRotatorArray" }, // 99bcff44f8b82bbdf1c3219e9829591bef5d3ba7
		{ &Z_Construct_UFunction_UEasyCsv_DoesStringRepresentContainer, "DoesStringRepresentContainer" }, // fbcc4f989ddb2fc9af6d5a443fd0838edf961d83
		{ &Z_Construct_UFunction_UEasyCsv_EscapeCharacters, "EscapeCharacters" }, // 1686976d0ef928fdbf72b650c24d775da49445fa
		{ &Z_Construct_UFunction_UEasyCsv_GetColumnAsStringArray, "GetColumnAsStringArray" }, // 71c865dd816fe2a89e277b009b267800c8ade839
		{ &Z_Construct_UFunction_UEasyCsv_GetColumnCount, "GetColumnCount" }, // dc282efc2382db532636e8105467793dff4d0160
		{ &Z_Construct_UFunction_UEasyCsv_GetFTextComponentsFromRepresentativeFString, "GetFTextComponentsFromRepresentativeFString" }, // 2cb7797f0e5519c2a0db1cc30d0710868c95814f
		{ &Z_Construct_UFunction_UEasyCsv_GetMapHeaders, "GetMapHeaders" }, // ad0e71662b77d8a78a1a911877e20a8f5799ab0b
		{ &Z_Construct_UFunction_UEasyCsv_GetMapKeyIndex, "GetMapKeyIndex" }, // 368310e8b2c10741edc1d02e50ac9d0465ad9a1b
		{ &Z_Construct_UFunction_UEasyCsv_GetMapKeys, "GetMapKeys" }, // a6bf429b4b09d0744aa17d99463fdf476451e337
		{ &Z_Construct_UFunction_UEasyCsv_GetRowAsStringArray, "GetRowAsStringArray" }, // 33010d726958623375c474bf203ad9fcd8e65e9f
		{ &Z_Construct_UFunction_UEasyCsv_GetRowCount, "GetRowCount" }, // 4b22cfcc9b0eb7684c4e5d0eade1a36ef31444ae
		{ &Z_Construct_UFunction_UEasyCsv_GetRowValueAsString, "GetRowValueAsString" }, // ef3d024c5bdfc756efe7a09e0712b2744f4db794
		{ &Z_Construct_UFunction_UEasyCsv_LoadStringFromLocalFile, "LoadStringFromLocalFile" }, // 556a2de2397a3d51477f7d2b5dbcfa5de46cf530
		{ &Z_Construct_UFunction_UEasyCsv_MakeCsvInfoStructFromFile, "MakeCsvInfoStructFromFile" }, // 683531fbaa1df3bd63f9e9533ded6388694479f6
		{ &Z_Construct_UFunction_UEasyCsv_MakeCsvInfoStructFromString, "MakeCsvInfoStructFromString" }, // bddc181a4261250f02048af5e4a5e429f6f907d8
		{ &Z_Construct_UFunction_UEasyCsv_ReplaceEscapedCharacters, "ReplaceEscapedCharacters" }, // 07a09b708ef9a47d03bdb327f8b04d7a9fb5ea19
		{ &Z_Construct_UFunction_UEasyCsv_SaveStringToFile, "SaveStringToFile" }, // 26be8be7e22e649cc06a932a3c5d47e2a187bfd2
		{ &Z_Construct_UFunction_UEasyCsv_SaveStringToFileWithFullPath, "SaveStringToFileWithFullPath" }, // d6e43dcb2c5574877a882f766cd08c4ab53cc702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyCsv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EasyCsv,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEasyCsv,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UEasyCsv_StaticRegisterNativesUEasyCsv()
{
	UClass* Class = UEasyCsv::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEasyCsv;
UClass* Z_Construct_UClass_UEasyCsv(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEasyCsv;
		if (!Z_Registration_Info_UClass_UEasyCsv.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EasyCsv"),
				Z_Registration_Info_UClass_UEasyCsv.InnerSingleton,
				UEasyCsv_StaticRegisterNativesUEasyCsv,
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
		return Z_Registration_Info_UClass_UEasyCsv.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEasyCsv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyCsv.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyCsv.OuterSingleton;
}
#undef UHT_STATICS
UEasyCsv::UEasyCsv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEasyCsv);
UEasyCsv::~UEasyCsv() {}
// ********** End Class UEasyCsv *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h__Script_EasyCsv_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FEasyCsvStringValueArray, Z_Construct_UScriptStruct_FEasyCsvStringValueArray_Statics::NewStructOps, TEXT("EasyCsvStringValueArray"),&Z_Registration_Info_UScriptStruct_FEasyCsvStringValueArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEasyCsvStringValueArray), 877022255U) },
		{ Z_Construct_UScriptStruct_FEasyCsvInfo, Z_Construct_UScriptStruct_FEasyCsvInfo_Statics::NewStructOps, TEXT("EasyCsvInfo"),&Z_Registration_Info_UScriptStruct_FEasyCsvInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEasyCsvInfo), 3518580318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyCsv, TEXT("UEasyCsv"), &Z_Registration_Info_UClass_UEasyCsv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyCsv), 1211424338U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h__Script_EasyCsv_c1d1de3073e046e1c20c926a09fc4e7182ad2596{
	TEXT("/Script/EasyCsv"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
