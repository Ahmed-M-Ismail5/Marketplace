// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyCsv.h"

#ifdef EASYCSV_EasyCsv_generated_h
#error "EasyCsv.generated.h already included, missing '#pragma once' in EasyCsv.h"
#endif
#define EASYCSV_EasyCsv_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEasyCsvInfo;

// ********** Begin ScriptStruct FEasyCsvStringValueArray ******************************************
struct Z_Construct_UScriptStruct_FEasyCsvStringValueArray_Statics;
EASYCSV_API UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvStringValueArray(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEasyCsvStringValueArray_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FEasyCsvStringValueArray(ETypeConstructPhase::Inner); }


struct FEasyCsvStringValueArray;
// ********** End ScriptStruct FEasyCsvStringValueArray ********************************************

// ********** Begin ScriptStruct FEasyCsvInfo ******************************************************
struct Z_Construct_UScriptStruct_FEasyCsvInfo_Statics;
EASYCSV_API UScriptStruct* Z_Construct_UScriptStruct_FEasyCsvInfo(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEasyCsvInfo_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FEasyCsvInfo(ETypeConstructPhase::Inner); }


struct FEasyCsvInfo;
// ********** End ScriptStruct FEasyCsvInfo ********************************************************

// ********** Begin Class UEasyCsv *****************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertQuatStringToRotatorArray); \
	DECLARE_FUNCTION(execConvertQuatStringToRotator); \
	DECLARE_FUNCTION(execConvertStringToQuatArray); \
	DECLARE_FUNCTION(execConvertStringToQuat); \
	DECLARE_FUNCTION(execConvertStringToRotatorArray); \
	DECLARE_FUNCTION(execConvertStringToRotator); \
	DECLARE_FUNCTION(execGetFTextComponentsFromRepresentativeFString); \
	DECLARE_FUNCTION(execEscapeCharacters); \
	DECLARE_FUNCTION(execReplaceEscapedCharacters); \
	DECLARE_FUNCTION(execDoesStringRepresentContainer); \
	DECLARE_FUNCTION(execMakeCsvInfoStructFromFile); \
	DECLARE_FUNCTION(execMakeCsvInfoStructFromString); \
	DECLARE_FUNCTION(execGetColumnCount); \
	DECLARE_FUNCTION(execGetRowCount); \
	DECLARE_FUNCTION(execGetMapKeyIndex); \
	DECLARE_FUNCTION(execGetMapHeaders); \
	DECLARE_FUNCTION(execGetMapKeys); \
	DECLARE_FUNCTION(execGetRowValueAsString); \
	DECLARE_FUNCTION(execGetRowAsStringArray); \
	DECLARE_FUNCTION(execGetColumnAsStringArray); \
	DECLARE_FUNCTION(execLoadStringFromLocalFile); \
	DECLARE_FUNCTION(execSaveStringToFileWithFullPath); \
	DECLARE_FUNCTION(execSaveStringToFile);


struct Z_Construct_UClass_UEasyCsv_Statics;
EASYCSV_API UClass* Z_Construct_UClass_UEasyCsv(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEasyCsv_Statics; \
	friend EASYCSV_API UClass* ::Z_Construct_UClass_UEasyCsv(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEasyCsv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyCsv"), Z_Construct_UClass_UEasyCsv) \
	DECLARE_SERIALIZER(UEasyCsv)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyCsv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEasyCsv(UEasyCsv&&) = delete; \
	UEasyCsv(const UEasyCsv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyCsv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyCsv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyCsv) \
	NO_API virtual ~UEasyCsv();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_33_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEasyCsv;

// ********** End Class UEasyCsv *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeDataTable_Source_EasyCsv_Public_EasyCsv_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
