// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeDataTable.h"

#ifdef RUNTIMEDATATABLE_RuntimeDataTable_generated_h
#error "RuntimeDataTable.generated.h already included, missing '#pragma once' in RuntimeDataTable.h"
#endif
#define RUNTIMEDATATABLE_RuntimeDataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ERuntimeDataTableBackupResultCode : uint8;
struct FEasyCsvInfo;
struct FRuntimeDataTableCallbackInfo;
struct FRuntimeDataTableOperationParams;
struct FRuntimeDataTableTokenInfo;

// ********** Begin ScriptStruct FRuntimeDataTableCallbackInfo *************************************
struct Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo_Statics;
RUNTIMEDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRuntimeDataTableCallbackInfo(ETypeConstructPhase::Inner); }


struct FRuntimeDataTableCallbackInfo;
// ********** End ScriptStruct FRuntimeDataTableCallbackInfo ***************************************

// ********** Begin ScriptStruct FRuntimeDataTableOperationParams **********************************
struct Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams_Statics;
RUNTIMEDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRuntimeDataTableOperationParams(ETypeConstructPhase::Inner); }


struct FRuntimeDataTableOperationParams;
// ********** End ScriptStruct FRuntimeDataTableOperationParams ************************************

// ********** Begin ScriptStruct FRuntimeDataTableTokenInfo ****************************************
struct Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo_Statics;
RUNTIMEDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRuntimeDataTableTokenInfo(ETypeConstructPhase::Inner); }


struct FRuntimeDataTableTokenInfo;
// ********** End ScriptStruct FRuntimeDataTableTokenInfo ******************************************

// ********** Begin Class URuntimeDataTableWebToken ************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTokenText); \
	DECLARE_FUNCTION(execGetNumberOfSecondsUntilExpiration); \
	DECLARE_FUNCTION(execHasTokenExpired); \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_URuntimeDataTableWebToken_Statics;
RUNTIMEDATATABLE_API UClass* Z_Construct_UClass_URuntimeDataTableWebToken(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URuntimeDataTableWebToken_Statics; \
	friend RUNTIMEDATATABLE_API UClass* ::Z_Construct_UClass_URuntimeDataTableWebToken(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URuntimeDataTableWebToken, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeDataTable"), Z_Construct_UClass_URuntimeDataTableWebToken) \
	DECLARE_SERIALIZER(URuntimeDataTableWebToken)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeDataTableWebToken(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeDataTableWebToken(URuntimeDataTableWebToken&&) = delete; \
	URuntimeDataTableWebToken(const URuntimeDataTableWebToken&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeDataTableWebToken); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeDataTableWebToken); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeDataTableWebToken) \
	NO_API virtual ~URuntimeDataTableWebToken();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_96_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_101_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeDataTableWebToken;

// ********** End Class URuntimeDataTableWebToken **************************************************

// ********** Begin Class URuntimeDataTableObject **************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllObjectPropertyNames); \
	DECLARE_FUNCTION(execGetAllObjectVariableNames); \
	DECLARE_FUNCTION(execWriteCsvToSheet); \
	DECLARE_FUNCTION(execValidateGoogleSheetsDownloadAndLoadBackupIfNeeded); \
	DECLARE_FUNCTION(execBuildGoogleSheetDownloadLinkAndGetAsCsv); \
	DECLARE_FUNCTION(execAutoGenerateKeys); \
	DECLARE_FUNCTION(execGetGoogleSheetsBatchUpdateURL); \
	DECLARE_FUNCTION(execGetGoogleSheetsValuesBatchUpdateURL); \
	DECLARE_FUNCTION(execGetGoogleSheetsApiUrlPrefix); \
	DECLARE_FUNCTION(execGetMimeCsv); \
	DECLARE_FUNCTION(execGetGoogleSheetsUrlPrefix); \
	DECLARE_FUNCTION(execGetSheetIdFromUrl_Int); \
	DECLARE_FUNCTION(execGetSheetIdFromUrl); \
	DECLARE_FUNCTION(execGetSpreadsheetIdFromUrl); \
	DECLARE_FUNCTION(execGenerateTokenInfoFromFile); \
	DECLARE_FUNCTION(execGenerateTokenInfoFromString);


struct Z_Construct_UClass_URuntimeDataTableObject_Statics;
	struct Z_Construct_UFunction_URuntimeDataTableObject_UpdateArrayFromCsvInfo_Statics; \
	struct Z_Construct_UFunction_URuntimeDataTableObject_GenerateCsvFromArray_Statics; \
RUNTIMEDATATABLE_API UClass* Z_Construct_UClass_URuntimeDataTableObject(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URuntimeDataTableObject_Statics; \
	friend struct ::Z_Construct_UFunction_URuntimeDataTableObject_UpdateArrayFromCsvInfo_Statics; \
	friend struct ::Z_Construct_UFunction_URuntimeDataTableObject_GenerateCsvFromArray_Statics; \
	friend RUNTIMEDATATABLE_API UClass* ::Z_Construct_UClass_URuntimeDataTableObject(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URuntimeDataTableObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeDataTable"), Z_Construct_UClass_URuntimeDataTableObject) \
	DECLARE_SERIALIZER(URuntimeDataTableObject)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeDataTableObject(URuntimeDataTableObject&&) = delete; \
	URuntimeDataTableObject(const URuntimeDataTableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeDataTableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeDataTableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeDataTableObject) \
	NO_API virtual ~URuntimeDataTableObject();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_131_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeDataTableObject;

// ********** End Class URuntimeDataTableObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_RuntimeDataTable_Public_RuntimeDataTable_h

// ********** Begin Enum ERuntimeDataTableBackupResultCode *****************************************
#define FOREACH_ENUM_ERUNTIMEDATATABLEBACKUPRESULTCODE(op) \
	op(ERuntimeDataTableBackupResultCode::DownloadFailedWithoutBackup) \
	op(ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupExistsBuCouldNotBeLoaded) \
	op(ERuntimeDataTableBackupResultCode::DownloadSucceededButCsvCouldNotBeParsed) \
	op(ERuntimeDataTableBackupResultCode::DownloadFailedAndBackupLoaded) \
	op(ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupSaved) \
	op(ERuntimeDataTableBackupResultCode::DownloadSucceededAndBackupCouldNotBeSaved) 

enum class ERuntimeDataTableBackupResultCode : uint8;
template<> struct TIsUEnumClass<ERuntimeDataTableBackupResultCode> { enum { Value = true }; };
template<> UE_NODEBUG RUNTIMEDATATABLE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeDataTableBackupResultCode>();
// ********** End Enum ERuntimeDataTableBackupResultCode *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
