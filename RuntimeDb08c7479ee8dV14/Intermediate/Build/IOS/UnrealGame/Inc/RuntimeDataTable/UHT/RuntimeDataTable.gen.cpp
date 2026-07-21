// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeDataTable.h"
#include "EasyCsv.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRuntimeDataTable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
EASYCSV_API UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvInfo(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RuntimeDataTable(ETypeConstructPhase);
RUNTIMEDATATABLE_API UEnum* Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode(ETypeConstructPhase);
RUNTIMEDATATABLE_API UFunction* Z_Construct_UDelegateFunction_RuntimeDataTable_RDTGetStringDelegate__DelegateSignature(ETypeConstructPhase);
RUNTIMEDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo(ETypeConstructPhase);
RUNTIMEDATATABLE_API UClass* Z_Construct_UClass_URuntimeDataTableObject(ETypeConstructPhase);
RUNTIMEDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams(ETypeConstructPhase);
RUNTIMEDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo(ETypeConstructPhase);
RUNTIMEDATATABLE_API UClass* Z_Construct_UClass_URuntimeDataTableWebToken(ETypeConstructPhase);
RUNTIMEDATATABLE_API UClass* Z_Construct_UClass_URuntimeDataTableObject(ETypeConstructPhase);
RUNTIMEDATATABLE_API UClass* Z_Construct_UClass_URuntimeDataTableWebToken(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRuntimeDataTableCallbackInfo *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRuntimeDataTableCallbackInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRuntimeDataTableCallbackInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Returned in every delegate\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returned in every delegate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationName_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseAsString_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRuntimeDataTableCallbackInfo constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_OperationName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((FRuntimeDataTableCallbackInfo*)Obj)->bWasSuccessful = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseAsString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRuntimeDataTableCallbackInfo constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeDataTableCallbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRuntimeDataTableCallbackInfo Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OperationName = { "OperationName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableCallbackInfo, OperationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationName_MetaData), NewProp_OperationName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRuntimeDataTableCallbackInfo), &UHT_STATICS::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSuccessful_MetaData), NewProp_bWasSuccessful_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ResponseAsString = { "ResponseAsString", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableCallbackInfo, ResponseAsString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseAsString_MetaData), NewProp_ResponseAsString_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableCallbackInfo, ResponseCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseCode_MetaData), NewProp_ResponseCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OperationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWasSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResponseAsString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResponseCode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRuntimeDataTableCallbackInfo Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable,
	nullptr,
	&NewStructOps,
	"RuntimeDataTableCallbackInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRuntimeDataTableCallbackInfo>(),
	alignof(FRuntimeDataTableCallbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo;
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeDataTable(ETypeConstructPhase::Outer), TEXT("RuntimeDataTableCallbackInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRuntimeDataTableCallbackInfo ***************************************

// ********** Begin Delegate FRDTGetStringDelegate *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RuntimeDataTable_RDTGetStringDelegate__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RuntimeDataTable_eventRDTGetStringDelegate_Parms
	{
		FRuntimeDataTableCallbackInfo CallbackInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRDTGetStringDelegate constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CallbackInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRDTGetStringDelegate constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRDTGetStringDelegate Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeDataTable_eventRDTGetStringDelegate_Parms, CallbackInfo), Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo, METADATA_PARAMS(0, nullptr) }; // 4753f0e0f66861e67e67975cc72b95e9b21596c5
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackInfo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRDTGetStringDelegate Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable, nullptr, "RDTGetStringDelegate__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RuntimeDataTable_eventRDTGetStringDelegate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RuntimeDataTable_eventRDTGetStringDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeDataTable_RDTGetStringDelegate__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRDTGetStringDelegate ***************************************************

// ********** Begin ScriptStruct FRuntimeDataTableOperationParams **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRuntimeDataTableOperationParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRuntimeDataTableOperationParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Sent with every operation\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Sent with every operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationName_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/** A name for your operation for tracking purposes */" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "A name for your operation for tracking purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestTimeout_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/** How long to wait for the operation to complete before a timeout is considered */" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "How long to wait for the operation to complete before a timeout is considered" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRuntimeDataTableOperationParams constinit property declarations **
	static const UECodeGen_Private::FNamePropertyParams NewProp_OperationName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestTimeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRuntimeDataTableOperationParams constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeDataTableOperationParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRuntimeDataTableOperationParams Property Definitions *************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OperationName = { "OperationName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableOperationParams, OperationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationName_MetaData), NewProp_OperationName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RequestTimeout = { "RequestTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableOperationParams, RequestTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestTimeout_MetaData), NewProp_RequestTimeout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OperationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestTimeout,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRuntimeDataTableOperationParams Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable,
	nullptr,
	&NewStructOps,
	"RuntimeDataTableOperationParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRuntimeDataTableOperationParams>(),
	alignof(FRuntimeDataTableOperationParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams;
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams, (UObject*)Z_Construct_UPackage__Script_RuntimeDataTable(ETypeConstructPhase::Outer), TEXT("RuntimeDataTableOperationParams"));
		}
		return Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRuntimeDataTableOperationParams ************************************

// ********** Begin ScriptStruct FRuntimeDataTableTokenInfo ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRuntimeDataTableTokenInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRuntimeDataTableTokenInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used to build an authentication token\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Used to build an authentication token" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateKey_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "// Maps to: private_key in the json\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Maps to: private_key in the json" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceAccountEmail_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "// Maps to: client_email in the json\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Maps to: client_email in the json" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaimUrl_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "// Only change this value if you know it needs to be changed. Not found in the json.\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Only change this value if you know it needs to be changed. Not found in the json." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenUri_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "// Maps to: token_uri in the json. Only change this value if you know it needs to be changed\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Maps to: token_uri in the json. Only change this value if you know it needs to be changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsUntilExpiration_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "// How long should this token last? Min is 1 second, Max is 3600 seconds (1 hour).\n// Generally it's best practice to keep the expiration short and generate a new token for each operation.\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "How long should this token last? Min is 1 second, Max is 3600 seconds (1 hour).\nGenerally it's best practice to keep the expiration short and generate a new token for each operation." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRuntimeDataTableTokenInfo constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceAccountEmail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClaimUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TokenUri;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsUntilExpiration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRuntimeDataTableTokenInfo constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeDataTableTokenInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRuntimeDataTableTokenInfo Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PrivateKey = { "PrivateKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableTokenInfo, PrivateKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateKey_MetaData), NewProp_PrivateKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ServiceAccountEmail = { "ServiceAccountEmail", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableTokenInfo, ServiceAccountEmail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceAccountEmail_MetaData), NewProp_ServiceAccountEmail_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ClaimUrl = { "ClaimUrl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableTokenInfo, ClaimUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaimUrl_MetaData), NewProp_ClaimUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TokenUri = { "TokenUri", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableTokenInfo, TokenUri), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenUri_MetaData), NewProp_TokenUri_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SecondsUntilExpiration = { "SecondsUntilExpiration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeDataTableTokenInfo, SecondsUntilExpiration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsUntilExpiration_MetaData), NewProp_SecondsUntilExpiration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrivateKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ServiceAccountEmail,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClaimUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TokenUri,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SecondsUntilExpiration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRuntimeDataTableTokenInfo Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable,
	nullptr,
	&NewStructOps,
	"RuntimeDataTableTokenInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRuntimeDataTableTokenInfo>(),
	alignof(FRuntimeDataTableTokenInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo;
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeDataTable(ETypeConstructPhase::Outer), TEXT("RuntimeDataTableTokenInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRuntimeDataTableTokenInfo ******************************************

// ********** Begin Enum ERuntimeDataTableBackupResultCode *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode_Statics
template<> RUNTIMEDATATABLE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeDataTableBackupResultCode>()
{
	return Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DownloadFailedAndBackupExistsBuCouldNotBeLoaded.Name", "ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupExistsBuCouldNotBeLoaded" },
		{ "DownloadFailedAndBackupLoaded.Name", "ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupLoaded" },
		{ "DownloadFailedWithoutBackup.Name", "ERuntimeDataTableBackupResultCode::DownloadFailedWithoutBackup" },
		{ "DownloadSucceededAndBackupCouldNotBeSaved.Name", "ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupCouldNotBeSaved" },
		{ "DownloadSucceededAndBackupSaved.Name", "ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupSaved" },
		{ "DownloadSucceededButCsvCouldNotBeParsed.Name", "ERuntimeDataTableBackupResultCode::DownloadSucceededButCsvCouldNotBeParsed" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimeDataTableBackupResultCode::DownloadFailedWithoutBackup", (int64)ERuntimeDataTableBackupResultCode::DownloadFailedWithoutBackup },
		{ "ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupExistsBuCouldNotBeLoaded", (int64)ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupExistsBuCouldNotBeLoaded },
		{ "ERuntimeDataTableBackupResultCode::DownloadSucceededButCsvCouldNotBeParsed", (int64)ERuntimeDataTableBackupResultCode::DownloadSucceededButCsvCouldNotBeParsed },
		{ "ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupLoaded", (int64)ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupLoaded },
		{ "ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupSaved", (int64)ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupSaved },
		{ "ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupCouldNotBeSaved", (int64)ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupCouldNotBeSaved },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable,
	nullptr,
	"ERuntimeDataTableBackupResultCode",
	"ERuntimeDataTableBackupResultCode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERuntimeDataTableBackupResultCode;
UEnum* Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERuntimeDataTableBackupResultCode.OuterSingleton)
		{
			ZRIE_ERuntimeDataTableBackupResultCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode, (UObject*)Z_Construct_UPackage__Script_RuntimeDataTable(ETypeConstructPhase::Outer), TEXT("ERuntimeDataTableBackupResultCode"));
		}
		return ZRIE_ERuntimeDataTableBackupResultCode.OuterSingleton;
	}
	if (!ZRIE_ERuntimeDataTableBackupResultCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERuntimeDataTableBackupResultCode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERuntimeDataTableBackupResultCode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERuntimeDataTableBackupResultCode *******************************************

// ********** Begin Class URuntimeDataTableWebToken Function GetNumberOfSecondsUntilExpiration *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableWebToken_GetNumberOfSecondsUntilExpiration_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableWebToken_eventGetNumberOfSecondsUntilExpiration_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Returns the number of seconds remaining until this token's authorization expiration.\n\x09 */" },
		{ "Keywords", "age, time" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns the number of seconds remaining until this token's authorization expiration." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfSecondsUntilExpiration constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfSecondsUntilExpiration constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfSecondsUntilExpiration Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableWebToken_eventGetNumberOfSecondsUntilExpiration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNumberOfSecondsUntilExpiration Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableWebToken, nullptr, "GetNumberOfSecondsUntilExpiration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableWebToken_eventGetNumberOfSecondsUntilExpiration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableWebToken_eventGetNumberOfSecondsUntilExpiration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableWebToken_GetNumberOfSecondsUntilExpiration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableWebToken::execGetNumberOfSecondsUntilExpiration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfSecondsUntilExpiration();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableWebToken Function GetNumberOfSecondsUntilExpiration *******

// ********** Begin Class URuntimeDataTableWebToken Function GetTokenText **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableWebToken_GetTokenText_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableWebToken_eventGetTokenText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/* Get the token string needed to pass into REST requests. */" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Get the token string needed to pass into REST requests." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTokenText constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTokenText constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTokenText Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableWebToken_eventGetTokenText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTokenText Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableWebToken, nullptr, "GetTokenText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableWebToken_eventGetTokenText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableWebToken_eventGetTokenText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableWebToken_GetTokenText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableWebToken::execGetTokenText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTokenText();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableWebToken Function GetTokenText ****************************

// ********** Begin Class URuntimeDataTableWebToken Function HasTokenExpired ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableWebToken_HasTokenExpired_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableWebToken_eventHasTokenExpired_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Returns true if the specified number of seconds until expiration have passed since authentication.\n\x09 */" },
		{ "Keywords", "age, time" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns true if the specified number of seconds until expiration have passed since authentication." },
	};
#endif // WITH_METADATA

// ********** Begin Function HasTokenExpired constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeDataTableWebToken_eventHasTokenExpired_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasTokenExpired constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasTokenExpired Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableWebToken_eventHasTokenExpired_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasTokenExpired Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableWebToken, nullptr, "HasTokenExpired", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableWebToken_eventHasTokenExpired_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableWebToken_eventHasTokenExpired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableWebToken_HasTokenExpired(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableWebToken::execHasTokenExpired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTokenExpired();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableWebToken Function HasTokenExpired *************************

// ********** Begin Class URuntimeDataTableWebToken Function Init **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableWebToken_Init_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableWebToken_eventInit_Parms
	{
		FString InTokenText;
		int32 SecondsUntilExpiration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/* Initialize the token with the appropriate information */" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Initialize the token with the appropriate information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTokenText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsUntilExpiration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Init constinit property declarations **********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTokenText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsUntilExpiration;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeDataTableWebToken_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Init constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Init Property Definitions *********************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InTokenText = { "InTokenText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableWebToken_eventInit_Parms, InTokenText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTokenText_MetaData), NewProp_InTokenText_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SecondsUntilExpiration = { "SecondsUntilExpiration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableWebToken_eventInit_Parms, SecondsUntilExpiration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsUntilExpiration_MetaData), NewProp_SecondsUntilExpiration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableWebToken_eventInit_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTokenText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SecondsUntilExpiration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Init Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableWebToken, nullptr, "Init", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableWebToken_eventInit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableWebToken_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableWebToken_Init(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableWebToken::execInit)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InTokenText);
	P_GET_PROPERTY(FIntProperty,Z_Param_SecondsUntilExpiration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init(Z_Param_InTokenText,Z_Param_SecondsUntilExpiration);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableWebToken Function Init ************************************

// ********** Begin Class URuntimeDataTableWebToken ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URuntimeDataTableWebToken_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// A class that contains authentication token information\n" },
		{ "IncludePath", "RuntimeDataTable.h" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "A class that contains authentication token information" },
	};
#endif // WITH_METADATA

// ********** Begin Class URuntimeDataTableWebToken constinit property declarations ****************
// ********** End Class URuntimeDataTableWebToken constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNumberOfSecondsUntilExpiration"), .Pointer = &URuntimeDataTableWebToken::execGetNumberOfSecondsUntilExpiration },
		{ .NameUTF8 = UTF8TEXT("GetTokenText"), .Pointer = &URuntimeDataTableWebToken::execGetTokenText },
		{ .NameUTF8 = UTF8TEXT("HasTokenExpired"), .Pointer = &URuntimeDataTableWebToken::execHasTokenExpired },
		{ .NameUTF8 = UTF8TEXT("Init"), .Pointer = &URuntimeDataTableWebToken::execInit },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeDataTableWebToken_GetNumberOfSecondsUntilExpiration, "GetNumberOfSecondsUntilExpiration" }, // 8022cf052001c9e3fd17ebaa02a78c8255ad714b
		{ &Z_Construct_UFunction_URuntimeDataTableWebToken_GetTokenText, "GetTokenText" }, // 2f49ed70b087b73a4085952b08f0ff8c457348e7
		{ &Z_Construct_UFunction_URuntimeDataTableWebToken_HasTokenExpired, "HasTokenExpired" }, // aeedcb3a76428cf09426f2363d33c4ce3cc82079
		{ &Z_Construct_UFunction_URuntimeDataTableWebToken_Init, "Init" }, // 93343b68a20f72edfda5e79a4925aaa4c702d69a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDataTableWebToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URuntimeDataTableWebToken,
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
static void URuntimeDataTableWebToken_StaticRegisterNativesURuntimeDataTableWebToken()
{
	UClass* Class = URuntimeDataTableWebToken::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URuntimeDataTableWebToken;
UClass* Z_Construct_UClass_URuntimeDataTableWebToken(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URuntimeDataTableWebToken;
		if (!Z_Registration_Info_UClass_URuntimeDataTableWebToken.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RuntimeDataTableWebToken"),
				Z_Registration_Info_UClass_URuntimeDataTableWebToken.InnerSingleton,
				URuntimeDataTableWebToken_StaticRegisterNativesURuntimeDataTableWebToken,
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
		return Z_Registration_Info_UClass_URuntimeDataTableWebToken.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URuntimeDataTableWebToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDataTableWebToken.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDataTableWebToken.OuterSingleton;
}
#undef UHT_STATICS
URuntimeDataTableWebToken::URuntimeDataTableWebToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URuntimeDataTableWebToken);
URuntimeDataTableWebToken::~URuntimeDataTableWebToken() {}
// ********** End Class URuntimeDataTableWebToken **************************************************

// ********** Begin Class URuntimeDataTableObject Function AutoGenerateKeys ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_AutoGenerateKeys_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventAutoGenerateKeys_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * If you want to have row keys generated for you on export, insert the return value from this function into the export function's \"Keys\" parameter. You can also use \"Make Array\" with blank entries in blueprint or create a new TArray<FName> (or simply \"{}\") in C++ if you prefer.\n\x09 * @return This is a blank array of FName. This signifies to the function that we should generate row keys on export. \n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "If you want to have row keys generated for you on export, insert the return value from this function into the export function's \"Keys\" parameter. You can also use \"Make Array\" with blank entries in blueprint or create a new TArray<FName> (or simply \"{}\") in C++ if you prefer.\n@return This is a blank array of FName. This signifies to the function that we should generate row keys on export." },
	};
#endif // WITH_METADATA

// ********** Begin Function AutoGenerateKeys constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AutoGenerateKeys constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AutoGenerateKeys Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventAutoGenerateKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AutoGenerateKeys Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "AutoGenerateKeys", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventAutoGenerateKeys_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventAutoGenerateKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_AutoGenerateKeys(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execAutoGenerateKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=URuntimeDataTableObject::AutoGenerateKeys();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function AutoGenerateKeys **************************

// ********** Begin Class URuntimeDataTableObject Function BuildGoogleSheetDownloadLinkAndGetAsCsv *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_BuildGoogleSheetDownloadLinkAndGetAsCsv_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms
	{
		FRuntimeDataTableTokenInfo InTokenInfo;
		FRuntimeDataTableOperationParams OperationParams;
		FScriptDelegate CallOnComplete;
		FString InSheetURL;
		bool bSheetIsPublic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Get any full sheet as CSV. This works for public or private sheets, provided you are authenticated. Set bSheetIsPublic to true if your sheet is public.\n\x09 * @param InTokenInfo A validated URuntimeDataTableWebToken object. Used to authenticate the Sheets operation. Can be default if the sheet is public.\n\x09 * @param OperationParams Generic request operation parameters\n\x09 * @param InSheetURL The URL at which this sheet can be found.\n\x09 * @param CallOnComplete This delegate will be called when the operation completes and tell you whether or not it was successful and return the response as a string.\n     * @param bSheetIsPublic Set this parameter to true if your sheet does not require authentication because it is public and you have not provided a valid InTokenInfo. This avoids token validation.\n\x09*/" },
		{ "CPP_Default_bSheetIsPublic", "false" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Get any full sheet as CSV. This works for public or private sheets, provided you are authenticated. Set bSheetIsPublic to true if your sheet is public.\n@param InTokenInfo A validated URuntimeDataTableWebToken object. Used to authenticate the Sheets operation. Can be default if the sheet is public.\n@param OperationParams Generic request operation parameters\n@param InSheetURL The URL at which this sheet can be found.\n@param CallOnComplete This delegate will be called when the operation completes and tell you whether or not it was successful and return the response as a string.\n@param bSheetIsPublic Set this parameter to true if your sheet does not require authentication because it is public and you have not provided a valid InTokenInfo. This avoids token validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTokenInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallOnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSheetURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSheetIsPublic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildGoogleSheetDownloadLinkAndGetAsCsv constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTokenInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperationParams;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_CallOnComplete;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSheetURL;
	static void NewProp_bSheetIsPublic_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms*)Obj)->bSheetIsPublic = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSheetIsPublic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BuildGoogleSheetDownloadLinkAndGetAsCsv constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BuildGoogleSheetDownloadLinkAndGetAsCsv Property Definitions **********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InTokenInfo = { "InTokenInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms, InTokenInfo), Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTokenInfo_MetaData), NewProp_InTokenInfo_MetaData) }; // 6396636d2538b3235220ab762819219d444dfcfc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OperationParams = { "OperationParams", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms, OperationParams), Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationParams_MetaData), NewProp_OperationParams_MetaData) }; // d01af2dfd007a9e677681fc464e202636da73606
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_CallOnComplete = { "CallOnComplete", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms, CallOnComplete), Z_Construct_UDelegateFunction_RuntimeDataTable_RDTGetStringDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallOnComplete_MetaData), NewProp_CallOnComplete_MetaData) }; // 7c409482a5756eebc9b56a2c642884a5ebfc748f
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InSheetURL = { "InSheetURL", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms, InSheetURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSheetURL_MetaData), NewProp_InSheetURL_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSheetIsPublic = { "bSheetIsPublic", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms), &UHT_STATICS::NewProp_bSheetIsPublic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSheetIsPublic_MetaData), NewProp_bSheetIsPublic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTokenInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OperationParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallOnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSheetURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSheetIsPublic,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BuildGoogleSheetDownloadLinkAndGetAsCsv Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "BuildGoogleSheetDownloadLinkAndGetAsCsv", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventBuildGoogleSheetDownloadLinkAndGetAsCsv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_BuildGoogleSheetDownloadLinkAndGetAsCsv(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execBuildGoogleSheetDownloadLinkAndGetAsCsv)
{
	P_GET_STRUCT(FRuntimeDataTableTokenInfo,Z_Param_InTokenInfo);
	P_GET_STRUCT(FRuntimeDataTableOperationParams,Z_Param_OperationParams);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_CallOnComplete);
	P_GET_PROPERTY(FStrProperty,Z_Param_InSheetURL);
	P_GET_UBOOL(Z_Param_bSheetIsPublic);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeDataTableObject::BuildGoogleSheetDownloadLinkAndGetAsCsv(Z_Param_InTokenInfo,Z_Param_OperationParams,FRDTGetStringDelegate(Z_Param_CallOnComplete),Z_Param_InSheetURL,Z_Param_bSheetIsPublic);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function BuildGoogleSheetDownloadLinkAndGetAsCsv ***

// ********** Begin Class URuntimeDataTableObject Function GenerateCsvFromArray ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GenerateCsvFromArray_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGenerateCsvFromArray_Parms
	{
		TArray<int32> ArrayToExport;
		FString OutCSV_String;
		TArray<FName> Keys;
		FString MembersToInclude;
		bool bSortColumnsAlphanumerically;
		const UObject* OwningObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "OwningObject" },
		{ "ArrayParm", "ArrayToExport" },
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Attempts to build a CSV from an array of structs/objects. Takes a set of Keys for the first column of the CSV and an array of FNames to act as a variable allowlist. Note that if you use a allowlist for a struct array, you'll need to always use MatchStructMemberNames when importing data for that struct in the future.\n\x09 * Does not return an RDT actor or call a delegate. Returns a boolean reflecting whether successfully able to write to disk.\n\x09 * @param ArrayToExport An array of the structs or objects you'd like to export.\n\x09 * @param OutCSV_String A string representing the array data in CSV form.\n\x09 * @param Keys A set of keys used in the first column of the CSV to uniquely identify rows. Does not enforce unique values, so be sure to do that prior to calling. An array is required, but you don't need to match the number of keys to the number of structs. They will be auto-generated if not supplied in matching numbers. For all generated keys, use \"AutoGenerateKeys().\"\n\x09 * @param MembersToInclude Optional: Names of variables in your structs or objects that you want to export. Separate names by comma. Leave blank to include all variables, but be careful when using objects. Leaving this blank will include EVERY variable name including inherited and engine variables. For help creating this allowlist for objects, see GetAllObjectPropertyNames().\n\x09 * @param bSortColumnsAlphanumerically If true, sort columns 0->9, A->Z\n\x09 * @param OwningObject The object or instantiation of a class that has the struct array as one of its variables. Defaults to the calling object or 'Self' and only applies to struct arrays.\n\x09 */" },
		{ "CustomThunk", "true" },
		{ "DefaultToSelf", "OwningObject" },
		{ "Keywords", "Export, String" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Attempts to build a CSV from an array of structs/objects. Takes a set of Keys for the first column of the CSV and an array of FNames to act as a variable allowlist. Note that if you use a allowlist for a struct array, you'll need to always use MatchStructMemberNames when importing data for that struct in the future.\nDoes not return an RDT actor or call a delegate. Returns a boolean reflecting whether successfully able to write to disk.\n@param ArrayToExport An array of the structs or objects you'd like to export.\n@param OutCSV_String A string representing the array data in CSV form.\n@param Keys A set of keys used in the first column of the CSV to uniquely identify rows. Does not enforce unique values, so be sure to do that prior to calling. An array is required, but you don't need to match the number of keys to the number of structs. They will be auto-generated if not supplied in matching numbers. For all generated keys, use \"AutoGenerateKeys().\"\n@param MembersToInclude Optional: Names of variables in your structs or objects that you want to export. Separate names by comma. Leave blank to include all variables, but be careful when using objects. Leaving this blank will include EVERY variable name including inherited and engine variables. For help creating this allowlist for objects, see GetAllObjectPropertyNames().\n@param bSortColumnsAlphanumerically If true, sort columns 0->9, A->Z\n@param OwningObject The object or instantiation of a class that has the struct array as one of its variables. Defaults to the calling object or 'Self' and only applies to struct arrays." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortColumnsAlphanumerically_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCsvFromArray constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayToExport_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayToExport;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCSV_String;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MembersToInclude;
	static void NewProp_bSortColumnsAlphanumerically_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGenerateCsvFromArray_Parms*)Obj)->bSortColumnsAlphanumerically = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortColumnsAlphanumerically;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCsvFromArray constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCsvFromArray Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ArrayToExport_Inner = { "ArrayToExport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ArrayToExport = { "ArrayToExport", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateCsvFromArray_Parms, ArrayToExport), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayToExport_MetaData), NewProp_ArrayToExport_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutCSV_String = { "OutCSV_String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateCsvFromArray_Parms, OutCSV_String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateCsvFromArray_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MembersToInclude = { "MembersToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateCsvFromArray_Parms, MembersToInclude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSortColumnsAlphanumerically = { "bSortColumnsAlphanumerically", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGenerateCsvFromArray_Parms), &UHT_STATICS::NewProp_bSortColumnsAlphanumerically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortColumnsAlphanumerically_MetaData), NewProp_bSortColumnsAlphanumerically_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningObject = { "OwningObject", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateCsvFromArray_Parms, OwningObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningObject_MetaData), NewProp_OwningObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayToExport_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayToExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCSV_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MembersToInclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSortColumnsAlphanumerically,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateCsvFromArray Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GenerateCsvFromArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGenerateCsvFromArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGenerateCsvFromArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GenerateCsvFromArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class URuntimeDataTableObject Function GenerateCsvFromArray **********************

// ********** Begin Class URuntimeDataTableObject Function GenerateTokenInfoFromFile ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GenerateTokenInfoFromFile_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms
	{
		FRuntimeDataTableTokenInfo OutTokenInfo;
		FString InPathToFile;
		int32 DesiredSecondsUntilExpiration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable|Token" },
		{ "Comment", "/**\n\x09 * Generate an FGoogleSheetsTokenInfo struct from a file.\n\x09 * If you have a json key file downloaded from your Google Service Account, you can create this struct by loading the file instead of copying the data into a Make node.\n\x09 * If you wish not to keep the file accessible on disk, call GenerateTokenInfoFromString() instead.\n\x09 * @param OutTokenInfo A FGoogleSheetsTokenInfo struct used to create and authenticate a URuntimeDataTableWebToken.\n\x09 * @param InPathToFile Where on disk the key file resides.\n\x09 * @param DesiredSecondsUntilExpiration How long should this token last? Min is 1 second, Max is 3600 seconds (1 hour). Generally it's best practice to keep the expiration short and generate a new token for each operation.\n\x09 * @return Returns true if the file could be loaded, parsed, and had the required information to create a token.\n\x09 */" },
		{ "CPP_Default_DesiredSecondsUntilExpiration", "60" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Generate an FGoogleSheetsTokenInfo struct from a file.\nIf you have a json key file downloaded from your Google Service Account, you can create this struct by loading the file instead of copying the data into a Make node.\nIf you wish not to keep the file accessible on disk, call GenerateTokenInfoFromString() instead.\n@param OutTokenInfo A FGoogleSheetsTokenInfo struct used to create and authenticate a URuntimeDataTableWebToken.\n@param InPathToFile Where on disk the key file resides.\n@param DesiredSecondsUntilExpiration How long should this token last? Min is 1 second, Max is 3600 seconds (1 hour). Generally it's best practice to keep the expiration short and generate a new token for each operation.\n@return Returns true if the file could be loaded, parsed, and had the required information to create a token." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPathToFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSecondsUntilExpiration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateTokenInfoFromFile constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTokenInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPathToFile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSecondsUntilExpiration;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateTokenInfoFromFile constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateTokenInfoFromFile Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTokenInfo = { "OutTokenInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms, OutTokenInfo), Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo, METADATA_PARAMS(0, nullptr) }; // 6396636d2538b3235220ab762819219d444dfcfc
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InPathToFile = { "InPathToFile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms, InPathToFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPathToFile_MetaData), NewProp_InPathToFile_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DesiredSecondsUntilExpiration = { "DesiredSecondsUntilExpiration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms, DesiredSecondsUntilExpiration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSecondsUntilExpiration_MetaData), NewProp_DesiredSecondsUntilExpiration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTokenInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPathToFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DesiredSecondsUntilExpiration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateTokenInfoFromFile Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GenerateTokenInfoFromFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGenerateTokenInfoFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GenerateTokenInfoFromFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGenerateTokenInfoFromFile)
{
	P_GET_STRUCT_REF(FRuntimeDataTableTokenInfo,Z_Param_Out_OutTokenInfo);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPathToFile);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSecondsUntilExpiration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URuntimeDataTableObject::GenerateTokenInfoFromFile(Z_Param_Out_OutTokenInfo,Z_Param_InPathToFile,Z_Param_DesiredSecondsUntilExpiration);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GenerateTokenInfoFromFile *****************

// ********** Begin Class URuntimeDataTableObject Function GenerateTokenInfoFromString *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GenerateTokenInfoFromString_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms
	{
		FRuntimeDataTableTokenInfo OutTokenInfo;
		FString InJsonString;
		int32 DesiredSecondsUntilExpiration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable|Token" },
		{ "Comment", "/**\n\x09 * Generate an FGoogleSheetsTokenInfo struct from a string. This is the same data found in the json key file downloaded from your Google Service Account.\n\x09 * If you prefer to just load the file, call GenerateTokenInfoFromFile instead.\n\x09 * This function is for users who wish to not keep the private key in an accessible file. Alternatively, you can use a Make node.\n\x09 * @param OutTokenInfo A FGoogleSheetsTokenInfo struct used to create and authenticate a URuntimeDataTableWebToken.\n\x09 * @param InJsonString The contents of a private key file\n\x09 * @param DesiredSecondsUntilExpiration How long should this token last? Min is 1 second, Max is 3600 seconds (1 hour). Generally it's best practice to keep the expiration short and generate a new token for each operation.\n\x09 * @return Returns true if the file could be loaded, parsed, and had the required information to create a token.\n\x09 */" },
		{ "CPP_Default_DesiredSecondsUntilExpiration", "60" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Generate an FGoogleSheetsTokenInfo struct from a string. This is the same data found in the json key file downloaded from your Google Service Account.\nIf you prefer to just load the file, call GenerateTokenInfoFromFile instead.\nThis function is for users who wish to not keep the private key in an accessible file. Alternatively, you can use a Make node.\n@param OutTokenInfo A FGoogleSheetsTokenInfo struct used to create and authenticate a URuntimeDataTableWebToken.\n@param InJsonString The contents of a private key file\n@param DesiredSecondsUntilExpiration How long should this token last? Min is 1 second, Max is 3600 seconds (1 hour). Generally it's best practice to keep the expiration short and generate a new token for each operation.\n@return Returns true if the file could be loaded, parsed, and had the required information to create a token." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSecondsUntilExpiration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateTokenInfoFromString constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTokenInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InJsonString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSecondsUntilExpiration;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateTokenInfoFromString constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateTokenInfoFromString Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTokenInfo = { "OutTokenInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms, OutTokenInfo), Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo, METADATA_PARAMS(0, nullptr) }; // 6396636d2538b3235220ab762819219d444dfcfc
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InJsonString = { "InJsonString", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms, InJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InJsonString_MetaData), NewProp_InJsonString_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DesiredSecondsUntilExpiration = { "DesiredSecondsUntilExpiration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms, DesiredSecondsUntilExpiration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSecondsUntilExpiration_MetaData), NewProp_DesiredSecondsUntilExpiration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTokenInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DesiredSecondsUntilExpiration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateTokenInfoFromString Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GenerateTokenInfoFromString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGenerateTokenInfoFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GenerateTokenInfoFromString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGenerateTokenInfoFromString)
{
	P_GET_STRUCT_REF(FRuntimeDataTableTokenInfo,Z_Param_Out_OutTokenInfo);
	P_GET_PROPERTY(FStrProperty,Z_Param_InJsonString);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSecondsUntilExpiration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URuntimeDataTableObject::GenerateTokenInfoFromString(Z_Param_Out_OutTokenInfo,Z_Param_InJsonString,Z_Param_DesiredSecondsUntilExpiration);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GenerateTokenInfoFromString ***************

// ********** Begin Class URuntimeDataTableObject Function GetAllObjectPropertyNames ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetAllObjectPropertyNames_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms
	{
		const UObject* Object;
		bool bIncludeOnlyConfigVariables;
		bool bIncludeInheritedVariables;
		FString MemberDenylist;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "IncludeInheritedVariables, MemberDenylist" },
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n * Returns all properties, including components, attached to a given object. Excludes \"UberGraphFrame\" & \"DefaultSceneRoot\" by default.\n * @param Object The object with the variables you want to list. Defaults to the calling object or 'Self'.\n * @param bIncludeOnlyConfigVariables If true, only members marked as \"Config\" in blueprint or given the CPF_Config PropertyFlag in C++ will be included, assuming they are not denylisted. If none are marked as Config, no variables will be included.\n * @param bIncludeInheritedVariables If true will include all variables from parent classes as well. Keep in mind this means the Super classes too, so you may end up with a lot of variables you don't want. You'll need to filter these out yourself. Try overloading a method from the desired base class all the way down.\n * @param MemberDenylist A comma-separated list of members you do NOT want to return. Useful for filtering out members that don't matter to you. Ex: \"ActorScale, ActorColor, ActorRotation\"\n */" },
		{ "CPP_Default_bIncludeInheritedVariables", "false" },
		{ "CPP_Default_bIncludeOnlyConfigVariables", "false" },
		{ "CPP_Default_MemberDenylist", "UberGraphFrame, DefaultSceneRoot" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns all properties, including components, attached to a given object. Excludes \"UberGraphFrame\" & \"DefaultSceneRoot\" by default.\n@param Object The object with the variables you want to list. Defaults to the calling object or 'Self'.\n@param bIncludeOnlyConfigVariables If true, only members marked as \"Config\" in blueprint or given the CPF_Config PropertyFlag in C++ will be included, assuming they are not denylisted. If none are marked as Config, no variables will be included.\n@param bIncludeInheritedVariables If true will include all variables from parent classes as well. Keep in mind this means the Super classes too, so you may end up with a lot of variables you don't want. You'll need to filter these out yourself. Try overloading a method from the desired base class all the way down.\n@param MemberDenylist A comma-separated list of members you do NOT want to return. Useful for filtering out members that don't matter to you. Ex: \"ActorScale, ActorColor, ActorRotation\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyConfigVariables_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInheritedVariables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllObjectPropertyNames constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_bIncludeOnlyConfigVariables_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms*)Obj)->bIncludeOnlyConfigVariables = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyConfigVariables;
	static void NewProp_bIncludeInheritedVariables_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms*)Obj)->bIncludeInheritedVariables = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInheritedVariables;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberDenylist;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllObjectPropertyNames constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllObjectPropertyNames Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeOnlyConfigVariables = { "bIncludeOnlyConfigVariables", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms), &UHT_STATICS::NewProp_bIncludeOnlyConfigVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeOnlyConfigVariables_MetaData), NewProp_bIncludeOnlyConfigVariables_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeInheritedVariables = { "bIncludeInheritedVariables", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms), &UHT_STATICS::NewProp_bIncludeInheritedVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInheritedVariables_MetaData), NewProp_bIncludeInheritedVariables_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MemberDenylist = { "MemberDenylist", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms, MemberDenylist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeOnlyConfigVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeInheritedVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MemberDenylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllObjectPropertyNames Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetAllObjectPropertyNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetAllObjectPropertyNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetAllObjectPropertyNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetAllObjectPropertyNames)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_UBOOL(Z_Param_bIncludeOnlyConfigVariables);
	P_GET_UBOOL(Z_Param_bIncludeInheritedVariables);
	P_GET_PROPERTY(FStrProperty,Z_Param_MemberDenylist);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetAllObjectPropertyNames(Z_Param_Object,Z_Param_bIncludeOnlyConfigVariables,Z_Param_bIncludeInheritedVariables,Z_Param_MemberDenylist);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetAllObjectPropertyNames *****************

// ********** Begin Class URuntimeDataTableObject Function GetAllObjectVariableNames ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetAllObjectVariableNames_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms
	{
		const UObject* Object;
		bool bIncludeOnlyConfigVariables;
		bool bIncludeInheritedVariables;
		FString MemberBlacklist;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "IncludeInheritedVariables, MemberBlacklist" },
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Returns all of the variables, including components, attached to a given object. Excludes \"UberGraphFrame\" & \"DefaultSceneRoot\" by default.\n\x09 * @param Object The object with the variables you want to list. Defaults to the calling object or 'Self'.\n\x09 * @param bIncludeOnlyConfigVariables If true, only members marked as \"Config\" in blueprint or given the CPF_Config PropertyFlag in C++ will be included, assuming they are not blacklisted. If none are marked as Config, no variables will be included.\n\x09 * @param bIncludeInheritedVariables If true will include all variables from parent classes as well. Keep in mind this means the Super classes too, so you may end up with a lot of variables you don't want. You'll need to filter these out yourself. Try overloading a method from the desired base class all the way down.\n\x09 * @param MemberBlacklist A comma-separated list of members you do NOT want to return. Useful for filtering out members that don't matter to you. Ex: \"ActorScale, ActorColor, ActorRotation\"\n\x09 */" },
		{ "CPP_Default_bIncludeInheritedVariables", "false" },
		{ "CPP_Default_bIncludeOnlyConfigVariables", "false" },
		{ "CPP_Default_MemberBlacklist", "UberGraphFrame, DefaultSceneRoot" },
		{ "DefaultToSelf", "Object" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated, Please use GetAllObjectPropertyNames" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns all of the variables, including components, attached to a given object. Excludes \"UberGraphFrame\" & \"DefaultSceneRoot\" by default.\n@param Object The object with the variables you want to list. Defaults to the calling object or 'Self'.\n@param bIncludeOnlyConfigVariables If true, only members marked as \"Config\" in blueprint or given the CPF_Config PropertyFlag in C++ will be included, assuming they are not blacklisted. If none are marked as Config, no variables will be included.\n@param bIncludeInheritedVariables If true will include all variables from parent classes as well. Keep in mind this means the Super classes too, so you may end up with a lot of variables you don't want. You'll need to filter these out yourself. Try overloading a method from the desired base class all the way down.\n@param MemberBlacklist A comma-separated list of members you do NOT want to return. Useful for filtering out members that don't matter to you. Ex: \"ActorScale, ActorColor, ActorRotation\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyConfigVariables_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInheritedVariables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllObjectVariableNames constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_bIncludeOnlyConfigVariables_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms*)Obj)->bIncludeOnlyConfigVariables = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyConfigVariables;
	static void NewProp_bIncludeInheritedVariables_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms*)Obj)->bIncludeInheritedVariables = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInheritedVariables;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberBlacklist;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllObjectVariableNames constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllObjectVariableNames Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeOnlyConfigVariables = { "bIncludeOnlyConfigVariables", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms), &UHT_STATICS::NewProp_bIncludeOnlyConfigVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeOnlyConfigVariables_MetaData), NewProp_bIncludeOnlyConfigVariables_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeInheritedVariables = { "bIncludeInheritedVariables", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms), &UHT_STATICS::NewProp_bIncludeInheritedVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInheritedVariables_MetaData), NewProp_bIncludeInheritedVariables_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MemberBlacklist = { "MemberBlacklist", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms, MemberBlacklist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeOnlyConfigVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeInheritedVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MemberBlacklist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllObjectVariableNames Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetAllObjectVariableNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetAllObjectVariableNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetAllObjectVariableNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetAllObjectVariableNames)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_UBOOL(Z_Param_bIncludeOnlyConfigVariables);
	P_GET_UBOOL(Z_Param_bIncludeInheritedVariables);
	P_GET_PROPERTY(FStrProperty,Z_Param_MemberBlacklist);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetAllObjectVariableNames(Z_Param_Object,Z_Param_bIncludeOnlyConfigVariables,Z_Param_bIncludeInheritedVariables,Z_Param_MemberBlacklist);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetAllObjectVariableNames *****************

// ********** Begin Class URuntimeDataTableObject Function GetGoogleSheetsApiUrlPrefix *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsApiUrlPrefix_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetGoogleSheetsApiUrlPrefix_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// sheets.googleapis.com/v4/spreadsheets/\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "sheets.googleapis.com/v4/spreadsheets/" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGoogleSheetsApiUrlPrefix constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGoogleSheetsApiUrlPrefix constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGoogleSheetsApiUrlPrefix Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetGoogleSheetsApiUrlPrefix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGoogleSheetsApiUrlPrefix Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetGoogleSheetsApiUrlPrefix", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsApiUrlPrefix_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsApiUrlPrefix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsApiUrlPrefix(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetGoogleSheetsApiUrlPrefix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetGoogleSheetsApiUrlPrefix();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetGoogleSheetsApiUrlPrefix ***************

// ********** Begin Class URuntimeDataTableObject Function GetGoogleSheetsBatchUpdateURL ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsBatchUpdateURL_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetGoogleSheetsBatchUpdateURL_Parms
	{
		FString InSpreadsheetId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// sheets.googleapis.com/v4/spreadsheets/{spreadsheetId}:batchUpdate\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "sheets.googleapis.com/v4/spreadsheets/{spreadsheetId}:batchUpdate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpreadsheetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGoogleSheetsBatchUpdateURL constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSpreadsheetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGoogleSheetsBatchUpdateURL constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGoogleSheetsBatchUpdateURL Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InSpreadsheetId = { "InSpreadsheetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetGoogleSheetsBatchUpdateURL_Parms, InSpreadsheetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpreadsheetId_MetaData), NewProp_InSpreadsheetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetGoogleSheetsBatchUpdateURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSpreadsheetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGoogleSheetsBatchUpdateURL Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetGoogleSheetsBatchUpdateURL", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsBatchUpdateURL_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsBatchUpdateURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsBatchUpdateURL(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetGoogleSheetsBatchUpdateURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSpreadsheetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetGoogleSheetsBatchUpdateURL(Z_Param_InSpreadsheetId);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetGoogleSheetsBatchUpdateURL *************

// ********** Begin Class URuntimeDataTableObject Function GetGoogleSheetsUrlPrefix ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsUrlPrefix_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetGoogleSheetsUrlPrefix_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// docs.google.com/spreadsheets/d/\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "docs.google.com/spreadsheets/d/" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGoogleSheetsUrlPrefix constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGoogleSheetsUrlPrefix constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGoogleSheetsUrlPrefix Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetGoogleSheetsUrlPrefix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGoogleSheetsUrlPrefix Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetGoogleSheetsUrlPrefix", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsUrlPrefix_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsUrlPrefix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsUrlPrefix(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetGoogleSheetsUrlPrefix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetGoogleSheetsUrlPrefix();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetGoogleSheetsUrlPrefix ******************

// ********** Begin Class URuntimeDataTableObject Function GetGoogleSheetsValuesBatchUpdateURL *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsValuesBatchUpdateURL_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetGoogleSheetsValuesBatchUpdateURL_Parms
	{
		FString InSpreadsheetId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// sheets.googleapis.com/v4/spreadsheets/{spreadsheetId}/values:batchUpdate\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "sheets.googleapis.com/v4/spreadsheets/{spreadsheetId}/values:batchUpdate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpreadsheetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGoogleSheetsValuesBatchUpdateURL constinit property declarations ***
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSpreadsheetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGoogleSheetsValuesBatchUpdateURL constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGoogleSheetsValuesBatchUpdateURL Property Definitions **************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InSpreadsheetId = { "InSpreadsheetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetGoogleSheetsValuesBatchUpdateURL_Parms, InSpreadsheetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpreadsheetId_MetaData), NewProp_InSpreadsheetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetGoogleSheetsValuesBatchUpdateURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSpreadsheetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGoogleSheetsValuesBatchUpdateURL Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetGoogleSheetsValuesBatchUpdateURL", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsValuesBatchUpdateURL_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetGoogleSheetsValuesBatchUpdateURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsValuesBatchUpdateURL(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetGoogleSheetsValuesBatchUpdateURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSpreadsheetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetGoogleSheetsValuesBatchUpdateURL(Z_Param_InSpreadsheetId);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetGoogleSheetsValuesBatchUpdateURL *******

// ********** Begin Class URuntimeDataTableObject Function GetMimeCsv ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetMimeCsv_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetMimeCsv_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMimeCsv constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMimeCsv constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMimeCsv Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetMimeCsv_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMimeCsv Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetMimeCsv", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetMimeCsv_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetMimeCsv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetMimeCsv(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetMimeCsv)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetMimeCsv();
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetMimeCsv ********************************

// ********** Begin Class URuntimeDataTableObject Function GetSheetIdFromUrl ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetSheetIdFromUrl_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetSheetIdFromUrl_Parms
	{
		FString SheetURL;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable|Google Sheets" },
		{ "Comment", "/**\n\x09 * Returns the GID from a Google Sheet URL. The GID identifies a specific sheet or tab. Returns empty if the gid is not present.\n\x09 */" },
		{ "Keywords", "gid, key" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns the GID from a Google Sheet URL. The GID identifies a specific sheet or tab. Returns empty if the gid is not present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheetURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSheetIdFromUrl constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SheetURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSheetIdFromUrl constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSheetIdFromUrl Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SheetURL = { "SheetURL", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetSheetIdFromUrl_Parms, SheetURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheetURL_MetaData), NewProp_SheetURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetSheetIdFromUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SheetURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSheetIdFromUrl Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetSheetIdFromUrl", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetSheetIdFromUrl_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetSheetIdFromUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetSheetIdFromUrl(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetSheetIdFromUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SheetURL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetSheetIdFromUrl(Z_Param_SheetURL);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetSheetIdFromUrl *************************

// ********** Begin Class URuntimeDataTableObject Function GetSheetIdFromUrl_Int *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetSheetIdFromUrl_Int_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetSheetIdFromUrl_Int_Parms
	{
		FString SheetURL;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable|Google Sheets" },
		{ "Comment", "/**\n\x09 * Returns the GID from a Google Sheet URL. The GID identifies a specific sheet or tab. Returns empty if the gid is not present.\n\x09 */" },
		{ "Keywords", "gid, key" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns the GID from a Google Sheet URL. The GID identifies a specific sheet or tab. Returns empty if the gid is not present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheetURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSheetIdFromUrl_Int constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SheetURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSheetIdFromUrl_Int constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSheetIdFromUrl_Int Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SheetURL = { "SheetURL", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetSheetIdFromUrl_Int_Parms, SheetURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheetURL_MetaData), NewProp_SheetURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetSheetIdFromUrl_Int_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SheetURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSheetIdFromUrl_Int Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetSheetIdFromUrl_Int", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetSheetIdFromUrl_Int_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetSheetIdFromUrl_Int_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetSheetIdFromUrl_Int(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetSheetIdFromUrl_Int)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SheetURL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URuntimeDataTableObject::GetSheetIdFromUrl_Int(Z_Param_SheetURL);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetSheetIdFromUrl_Int *********************

// ********** Begin Class URuntimeDataTableObject Function GetSpreadsheetIdFromUrl *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_GetSpreadsheetIdFromUrl_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventGetSpreadsheetIdFromUrl_Parms
	{
		FString SheetURL;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable|Google Sheets" },
		{ "Comment", "/**\n\x09 * Returns the Sheet ID from a Google Sheet URL. This identifies a spreadsheet asset.\n\x09 */" },
		{ "Keywords", "key" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Returns the Sheet ID from a Google Sheet URL. This identifies a spreadsheet asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheetURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpreadsheetIdFromUrl constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SheetURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpreadsheetIdFromUrl constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpreadsheetIdFromUrl Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SheetURL = { "SheetURL", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetSpreadsheetIdFromUrl_Parms, SheetURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheetURL_MetaData), NewProp_SheetURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventGetSpreadsheetIdFromUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SheetURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSpreadsheetIdFromUrl Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "GetSpreadsheetIdFromUrl", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventGetSpreadsheetIdFromUrl_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventGetSpreadsheetIdFromUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_GetSpreadsheetIdFromUrl(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execGetSpreadsheetIdFromUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SheetURL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeDataTableObject::GetSpreadsheetIdFromUrl(Z_Param_SheetURL);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function GetSpreadsheetIdFromUrl *******************

// ********** Begin Class URuntimeDataTableObject Function UpdateArrayFromCsvInfo ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_UpdateArrayFromCsvInfo_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms
	{
		TArray<int32> ArrayToUpdate;
		bool Successful;
		FEasyCsvInfo CSVInfo;
		bool MatchStructMemberNames;
		const UObject* OwningObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "MatchStructMemberNames, OwningObject" },
		{ "ArrayParm", "ArrayToUpdate" },
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Fills an array of structs/objects with matching variables using a CSV_Info struct from MakeCsvInfoFromString or MakeCsvInfoFromFile.\n\x09 * A bool is also returned reflecting whether the array could be updated.\n\x09 * C++ users should use UpdateArrayFromCsvInfo_Internal instead.\n\x09 * @param ArrayToUpdate An array of the type of struct/object you'd like to update using values from the loaded CSV. Struct arrays will be emptied prior to filling, object arrays will be updated in-place.\n\x09 * @param CSVInfo The script will attempt to update the array using this struct. You can generate the struct using MakeSCV_InfoFromString() or MakeCSV_InfoFromFile().\n\x09 * @param MatchStructMemberNames When true will attempt to match column names in your CSV with variables inside of your struct. This makes it so you don't have to have all variables in your struct represented sequentially in your CSV file. Name matching is slower than sequential updates so when working with very large data sets updates could take sometime longer to complete. This parameter has no effect when using an array of objects as objects will always use name matching.\n\x09 * @param OwningObject The object or instantiation of a class that has the struct array as one of its variables. Defaults to the calling object or 'Self' and only applies to struct arrays.\n\x09 */" },
		{ "CustomThunk", "true" },
		{ "DefaultToSelf", "OwningObject" },
		{ "KeyWords", "Fill" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Fills an array of structs/objects with matching variables using a CSV_Info struct from MakeCsvInfoFromString or MakeCsvInfoFromFile.\nA bool is also returned reflecting whether the array could be updated.\nC++ users should use UpdateArrayFromCsvInfo_Internal instead.\n@param ArrayToUpdate An array of the type of struct/object you'd like to update using values from the loaded CSV. Struct arrays will be emptied prior to filling, object arrays will be updated in-place.\n@param CSVInfo The script will attempt to update the array using this struct. You can generate the struct using MakeSCV_InfoFromString() or MakeCSV_InfoFromFile().\n@param MatchStructMemberNames When true will attempt to match column names in your CSV with variables inside of your struct. This makes it so you don't have to have all variables in your struct represented sequentially in your CSV file. Name matching is slower than sequential updates so when working with very large data sets updates could take sometime longer to complete. This parameter has no effect when using an array of objects as objects will always use name matching.\n@param OwningObject The object or instantiation of a class that has the struct array as one of its variables. Defaults to the calling object or 'Self' and only applies to struct arrays." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayToUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateArrayFromCsvInfo constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayToUpdate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayToUpdate;
	static void NewProp_Successful_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms*)Obj)->Successful = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CSVInfo;
	static void NewProp_MatchStructMemberNames_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms*)Obj)->MatchStructMemberNames = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchStructMemberNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateArrayFromCsvInfo constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateArrayFromCsvInfo Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ArrayToUpdate_Inner = { "ArrayToUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ArrayToUpdate = { "ArrayToUpdate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms, ArrayToUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayToUpdate_MetaData), NewProp_ArrayToUpdate_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms), &UHT_STATICS::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CSVInfo = { "CSVInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms, CSVInfo), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(0, nullptr) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_MatchStructMemberNames = { "MatchStructMemberNames", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms), &UHT_STATICS::NewProp_MatchStructMemberNames_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningObject = { "OwningObject", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms, OwningObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningObject_MetaData), NewProp_OwningObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayToUpdate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayToUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Successful,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CSVInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MatchStructMemberNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateArrayFromCsvInfo Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "UpdateArrayFromCsvInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventUpdateArrayFromCsvInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_UpdateArrayFromCsvInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class URuntimeDataTableObject Function UpdateArrayFromCsvInfo ********************

// ********** Begin Class URuntimeDataTableObject Function ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms
	{
		FRuntimeDataTableCallbackInfo InCallbackInfo;
		FEasyCsvInfo OutCsvInfo;
		ERuntimeDataTableBackupResultCode OutResultCode;
		FString BackupSavePath;
		FString BackupLoadPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Determines if your CSV download was successful and tries to save the download to BackupSavePath if provided.\n\x09 * If the download failed, will attempt to load the CSV from a local backup.\n\x09 * If a CSV exists after that, will attempt to create and output FEasyCsvInfo from it.\n\x09 * @return Whether FEasyCsvInfo could be parsed or not, regardless of whether it came from Google Sheets or a backup.\n\x09 * @param InCallbackInfo A struct generated after calling BuildGoogleSheetDownloadLinkAndGetAsCsv. Contains information about the response from Google.\n\x09 * @param OutCsvInfo If the download succeeded or the backup was loaded, this is the output FEasyCsvInfo.\n\x09 * @param OutResultCode A result code describing the action or error resulting from this function.\n\x09 * @param BackupSavePath Optional: If you have downloaded a sheet, you may save the sheet to a local path on disk.\n\x09 * @param BackupLoadPath Optional: If no \"InSheetURL\" is specified or the sheet could not be downloaded for any reason, will attempt to load the CSV from the local disk at the specified path instead.\n\x09 */" },
		{ "CPP_Default_BackupLoadPath", "" },
		{ "CPP_Default_BackupSavePath", "" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Determines if your CSV download was successful and tries to save the download to BackupSavePath if provided.\nIf the download failed, will attempt to load the CSV from a local backup.\nIf a CSV exists after that, will attempt to create and output FEasyCsvInfo from it.\n@return Whether FEasyCsvInfo could be parsed or not, regardless of whether it came from Google Sheets or a backup.\n@param InCallbackInfo A struct generated after calling BuildGoogleSheetDownloadLinkAndGetAsCsv. Contains information about the response from Google.\n@param OutCsvInfo If the download succeeded or the backup was loaded, this is the output FEasyCsvInfo.\n@param OutResultCode A result code describing the action or error resulting from this function.\n@param BackupSavePath Optional: If you have downloaded a sheet, you may save the sheet to a local path on disk.\n@param BackupLoadPath Optional: If no \"InSheetURL\" is specified or the sheet could not be downloaded for any reason, will attempt to load the CSV from the local disk at the specified path instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCallbackInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackupSavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackupLoadPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCallbackInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCsvInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResultCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResultCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BackupSavePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BackupLoadPath;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded Property Definitions 
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InCallbackInfo = { "InCallbackInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms, InCallbackInfo), Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCallbackInfo_MetaData), NewProp_InCallbackInfo_MetaData) }; // 4753f0e0f66861e67e67975cc72b95e9b21596c5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutCsvInfo = { "OutCsvInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms, OutCsvInfo), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(0, nullptr) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutResultCode = { "OutResultCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms, OutResultCode), Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode, METADATA_PARAMS(0, nullptr) }; // 947d4eb568a4a0199286047b7ac9a47fa8bb04d7
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BackupSavePath = { "BackupSavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms, BackupSavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackupSavePath_MetaData), NewProp_BackupSavePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BackupLoadPath = { "BackupLoadPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms, BackupLoadPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackupLoadPath_MetaData), NewProp_BackupLoadPath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InCallbackInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCsvInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResultCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackupSavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackupLoadPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded Property Definitions **
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventValidateGoogleSheetsDownloadAndLoadBackupIfNeeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execValidateGoogleSheetsDownloadAndLoadBackupIfNeeded)
{
	P_GET_STRUCT(FRuntimeDataTableCallbackInfo,Z_Param_InCallbackInfo);
	P_GET_STRUCT_REF(FEasyCsvInfo,Z_Param_Out_OutCsvInfo);
	P_GET_ENUM_REF(ERuntimeDataTableBackupResultCode,Z_Param_Out_OutResultCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_BackupSavePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_BackupLoadPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URuntimeDataTableObject::ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded(Z_Param_InCallbackInfo,Z_Param_Out_OutCsvInfo,(ERuntimeDataTableBackupResultCode&)(Z_Param_Out_OutResultCode),Z_Param_BackupSavePath,Z_Param_BackupLoadPath);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded 

// ********** Begin Class URuntimeDataTableObject Function WriteCsvToSheet *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URuntimeDataTableObject_WriteCsvToSheet_Statics
struct UHT_STATICS
{
	struct RuntimeDataTableObject_eventWriteCsvToSheet_Parms
	{
		FRuntimeDataTableTokenInfo InTokenInfo;
		FRuntimeDataTableOperationParams OperationParams;
		FScriptDelegate CallOnComplete;
		FString InSpreadsheetId;
		int32 InSheetId;
		FString InCsv;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "/**\n\x09 * Get any full sheet as CSV. This works for public or private sheets, provided you are authenticated.\n\x09 * @param InTokenInfo A validated URuntimeDataTableWebToken object. Used to authenticate the Sheets operation. When writing to a sheet, you must provide a valid InTokenInfo even if the sheet is public.\n\x09 * @param OperationParams Generic request operation parameters\n\x09 * @param InSpreadsheetId This is the spreadsheet ID number or key. Get it from your spreadsheet URL by calling GetSpreadsheetIdFromUrl.\n\x09 * @param InSheetId The GID for the desired sheet tab\n\x09 * @param InCsv This is the Csv data represented as a string. To load a CSV document from a file, use LoadStringFromFile(). To generate a CSV from a struct/object array, use GenerateCsvFromArray (BP) or GenerateCsvFromArray_Internal (C++)\n\x09 * @param CallOnComplete This delegate will be called when the operation completes and tell you whether or not it was successful and return the response as a string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "Get any full sheet as CSV. This works for public or private sheets, provided you are authenticated.\n@param InTokenInfo A validated URuntimeDataTableWebToken object. Used to authenticate the Sheets operation. When writing to a sheet, you must provide a valid InTokenInfo even if the sheet is public.\n@param OperationParams Generic request operation parameters\n@param InSpreadsheetId This is the spreadsheet ID number or key. Get it from your spreadsheet URL by calling GetSpreadsheetIdFromUrl.\n@param InSheetId The GID for the desired sheet tab\n@param InCsv This is the Csv data represented as a string. To load a CSV document from a file, use LoadStringFromFile(). To generate a CSV from a struct/object array, use GenerateCsvFromArray (BP) or GenerateCsvFromArray_Internal (C++)\n@param CallOnComplete This delegate will be called when the operation completes and tell you whether or not it was successful and return the response as a string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallOnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpreadsheetId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSheetId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCsv_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteCsvToSheet constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTokenInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperationParams;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_CallOnComplete;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSpreadsheetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSheetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCsv;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteCsvToSheet constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteCsvToSheet Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InTokenInfo = { "InTokenInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventWriteCsvToSheet_Parms, InTokenInfo), Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo, METADATA_PARAMS(0, nullptr) }; // 6396636d2538b3235220ab762819219d444dfcfc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OperationParams = { "OperationParams", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventWriteCsvToSheet_Parms, OperationParams), Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationParams_MetaData), NewProp_OperationParams_MetaData) }; // d01af2dfd007a9e677681fc464e202636da73606
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_CallOnComplete = { "CallOnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventWriteCsvToSheet_Parms, CallOnComplete), Z_Construct_UDelegateFunction_RuntimeDataTable_RDTGetStringDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallOnComplete_MetaData), NewProp_CallOnComplete_MetaData) }; // 7c409482a5756eebc9b56a2c642884a5ebfc748f
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InSpreadsheetId = { "InSpreadsheetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventWriteCsvToSheet_Parms, InSpreadsheetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpreadsheetId_MetaData), NewProp_InSpreadsheetId_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InSheetId = { "InSheetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventWriteCsvToSheet_Parms, InSheetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSheetId_MetaData), NewProp_InSheetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InCsv = { "InCsv", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeDataTableObject_eventWriteCsvToSheet_Parms, InCsv), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCsv_MetaData), NewProp_InCsv_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTokenInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OperationParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallOnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSpreadsheetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSheetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InCsv,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WriteCsvToSheet Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URuntimeDataTableObject, nullptr, "WriteCsvToSheet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RuntimeDataTableObject_eventWriteCsvToSheet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RuntimeDataTableObject_eventWriteCsvToSheet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeDataTableObject_WriteCsvToSheet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URuntimeDataTableObject::execWriteCsvToSheet)
{
	P_GET_STRUCT(FRuntimeDataTableTokenInfo,Z_Param_InTokenInfo);
	P_GET_STRUCT(FRuntimeDataTableOperationParams,Z_Param_OperationParams);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_CallOnComplete);
	P_GET_PROPERTY(FStrProperty,Z_Param_InSpreadsheetId);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSheetId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InCsv);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeDataTableObject::WriteCsvToSheet(Z_Param_InTokenInfo,Z_Param_OperationParams,FRDTGetStringDelegate(Z_Param_Out_CallOnComplete),Z_Param_InSpreadsheetId,Z_Param_InSheetId,Z_Param_InCsv);
	P_NATIVE_END;
}
// ********** End Class URuntimeDataTableObject Function WriteCsvToSheet ***************************

// ********** Begin Class URuntimeDataTableObject **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URuntimeDataTableObject_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RuntimeDataTable.h" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCsvInfo_MetaData[] = {
		{ "Category", "Runtime DataTable" },
		{ "Comment", "// This is a struct from easyCSV that contains information about the loaded CSV. Use this when using Google Sheets.\n" },
		{ "ModuleRelativePath", "Public/RuntimeDataTable.h" },
		{ "ToolTip", "This is a struct from easyCSV that contains information about the loaded CSV. Use this when using Google Sheets." },
	};
#endif // WITH_METADATA

// ********** Begin Class URuntimeDataTableObject constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCsvInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URuntimeDataTableObject constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AutoGenerateKeys"), .Pointer = &URuntimeDataTableObject::execAutoGenerateKeys },
		{ .NameUTF8 = UTF8TEXT("BuildGoogleSheetDownloadLinkAndGetAsCsv"), .Pointer = &URuntimeDataTableObject::execBuildGoogleSheetDownloadLinkAndGetAsCsv },
		{ .NameUTF8 = UTF8TEXT("GenerateCsvFromArray"), .Pointer = &URuntimeDataTableObject::execGenerateCsvFromArray },
		{ .NameUTF8 = UTF8TEXT("GenerateTokenInfoFromFile"), .Pointer = &URuntimeDataTableObject::execGenerateTokenInfoFromFile },
		{ .NameUTF8 = UTF8TEXT("GenerateTokenInfoFromString"), .Pointer = &URuntimeDataTableObject::execGenerateTokenInfoFromString },
		{ .NameUTF8 = UTF8TEXT("GetAllObjectPropertyNames"), .Pointer = &URuntimeDataTableObject::execGetAllObjectPropertyNames },
		{ .NameUTF8 = UTF8TEXT("GetAllObjectVariableNames"), .Pointer = &URuntimeDataTableObject::execGetAllObjectVariableNames },
		{ .NameUTF8 = UTF8TEXT("GetGoogleSheetsApiUrlPrefix"), .Pointer = &URuntimeDataTableObject::execGetGoogleSheetsApiUrlPrefix },
		{ .NameUTF8 = UTF8TEXT("GetGoogleSheetsBatchUpdateURL"), .Pointer = &URuntimeDataTableObject::execGetGoogleSheetsBatchUpdateURL },
		{ .NameUTF8 = UTF8TEXT("GetGoogleSheetsUrlPrefix"), .Pointer = &URuntimeDataTableObject::execGetGoogleSheetsUrlPrefix },
		{ .NameUTF8 = UTF8TEXT("GetGoogleSheetsValuesBatchUpdateURL"), .Pointer = &URuntimeDataTableObject::execGetGoogleSheetsValuesBatchUpdateURL },
		{ .NameUTF8 = UTF8TEXT("GetMimeCsv"), .Pointer = &URuntimeDataTableObject::execGetMimeCsv },
		{ .NameUTF8 = UTF8TEXT("GetSheetIdFromUrl"), .Pointer = &URuntimeDataTableObject::execGetSheetIdFromUrl },
		{ .NameUTF8 = UTF8TEXT("GetSheetIdFromUrl_Int"), .Pointer = &URuntimeDataTableObject::execGetSheetIdFromUrl_Int },
		{ .NameUTF8 = UTF8TEXT("GetSpreadsheetIdFromUrl"), .Pointer = &URuntimeDataTableObject::execGetSpreadsheetIdFromUrl },
		{ .NameUTF8 = UTF8TEXT("UpdateArrayFromCsvInfo"), .Pointer = &URuntimeDataTableObject::execUpdateArrayFromCsvInfo },
		{ .NameUTF8 = UTF8TEXT("ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded"), .Pointer = &URuntimeDataTableObject::execValidateGoogleSheetsDownloadAndLoadBackupIfNeeded },
		{ .NameUTF8 = UTF8TEXT("WriteCsvToSheet"), .Pointer = &URuntimeDataTableObject::execWriteCsvToSheet },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeDataTableObject_AutoGenerateKeys, "AutoGenerateKeys" }, // 17018fe695ed059d5f1b9fe99087c074b75b6324
		{ &Z_Construct_UFunction_URuntimeDataTableObject_BuildGoogleSheetDownloadLinkAndGetAsCsv, "BuildGoogleSheetDownloadLinkAndGetAsCsv" }, // 85a51ec9b15d3ae772e6992fb68790ca6478a653
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GenerateCsvFromArray, "GenerateCsvFromArray" }, // 3f00c9b6d786e977e13c3bc78056a9f7eba1f1f6
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GenerateTokenInfoFromFile, "GenerateTokenInfoFromFile" }, // ecc2be9ed6e1af6903abbe9c706c649a3e6625e2
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GenerateTokenInfoFromString, "GenerateTokenInfoFromString" }, // d79cb7fd99ff1c1171fa14f879c14c47aa10110c
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetAllObjectPropertyNames, "GetAllObjectPropertyNames" }, // 098a8757d0117f957c8aec92c9414374e6442460
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetAllObjectVariableNames, "GetAllObjectVariableNames" }, // f15c6499c9279e16f93c7ac510117a0d31ce38f8
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsApiUrlPrefix, "GetGoogleSheetsApiUrlPrefix" }, // e40d91854473c5019980ffe95f2e01511d3d472c
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsBatchUpdateURL, "GetGoogleSheetsBatchUpdateURL" }, // edb6eff4102086ed06ecda7fb53c19c4903735e0
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsUrlPrefix, "GetGoogleSheetsUrlPrefix" }, // 5e580cb328e5319b147ed2d1c1eafdbaee339c47
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetGoogleSheetsValuesBatchUpdateURL, "GetGoogleSheetsValuesBatchUpdateURL" }, // ce73a0d03fd2954bc3a515cbf0f3e71183ba2d4b
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetMimeCsv, "GetMimeCsv" }, // 81862db7967b7cb8bc8e4c4754e9f4b89e5cf3b9
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetSheetIdFromUrl, "GetSheetIdFromUrl" }, // 80de1193477f369d01b4aae1a89c2da9640c55d3
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetSheetIdFromUrl_Int, "GetSheetIdFromUrl_Int" }, // e6a9f770a8b178bebd03eabde057a3c8ba34c481
		{ &Z_Construct_UFunction_URuntimeDataTableObject_GetSpreadsheetIdFromUrl, "GetSpreadsheetIdFromUrl" }, // c2c5255a15374d6bff94676aa1d495845207f820
		{ &Z_Construct_UFunction_URuntimeDataTableObject_UpdateArrayFromCsvInfo, "UpdateArrayFromCsvInfo" }, // 120ae5898c3f886d5ed7fd1ee65fa75b4d468ed7
		{ &Z_Construct_UFunction_URuntimeDataTableObject_ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded, "ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded" }, // bb48f97033b68fd20244e17bc13431844e787702
		{ &Z_Construct_UFunction_URuntimeDataTableObject_WriteCsvToSheet, "WriteCsvToSheet" }, // 2a5914324e7cb414429dbfd00f6311cdca9a044f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDataTableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URuntimeDataTableObject Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CachedCsvInfo = { "CachedCsvInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDataTableObject, CachedCsvInfo), Z_Construct_UScriptStruct_FEasyCsvInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCsvInfo_MetaData), NewProp_CachedCsvInfo_MetaData) }; // d1b9465ef016c42f3d355c55de3f2afb88680ac8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCsvInfo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URuntimeDataTableObject Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RuntimeDataTable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URuntimeDataTableObject,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URuntimeDataTableObject_StaticRegisterNativesURuntimeDataTableObject()
{
	UClass* Class = URuntimeDataTableObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URuntimeDataTableObject;
UClass* Z_Construct_UClass_URuntimeDataTableObject(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URuntimeDataTableObject;
		if (!Z_Registration_Info_UClass_URuntimeDataTableObject.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RuntimeDataTableObject"),
				Z_Registration_Info_UClass_URuntimeDataTableObject.InnerSingleton,
				URuntimeDataTableObject_StaticRegisterNativesURuntimeDataTableObject,
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
		return Z_Registration_Info_UClass_URuntimeDataTableObject.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URuntimeDataTableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDataTableObject.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDataTableObject.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URuntimeDataTableObject);
URuntimeDataTableObject::~URuntimeDataTableObject() {}
// ********** End Class URuntimeDataTableObject ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h__Script_RuntimeDataTable_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RuntimeDataTable_ERuntimeDataTableBackupResultCode, TEXT("ERuntimeDataTableBackupResultCode"), &ZRIE_ERuntimeDataTableBackupResultCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2491240117U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo, Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo_Statics::NewStructOps, TEXT("RuntimeDataTableCallbackInfo"),&Z_Registration_Info_UScriptStruct_FRuntimeDataTableCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeDataTableCallbackInfo), 1196683488U) },
		{ Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams, Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams_Statics::NewStructOps, TEXT("RuntimeDataTableOperationParams"),&Z_Registration_Info_UScriptStruct_FRuntimeDataTableOperationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeDataTableOperationParams), 3491427039U) },
		{ Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo, Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo_Statics::NewStructOps, TEXT("RuntimeDataTableTokenInfo"),&Z_Registration_Info_UScriptStruct_FRuntimeDataTableTokenInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeDataTableTokenInfo), 1670800237U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeDataTableWebToken, TEXT("URuntimeDataTableWebToken"), &Z_Registration_Info_UClass_URuntimeDataTableWebToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDataTableWebToken), 1249169814U) },
		{ Z_Construct_UClass_URuntimeDataTableObject, TEXT("URuntimeDataTableObject"), &Z_Registration_Info_UClass_URuntimeDataTableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDataTableObject), 1304299650U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h__Script_RuntimeDataTable_9ddece2e96f9e530f211b469576ad00be46f95b5{
	TEXT("/Script/RuntimeDataTable"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
