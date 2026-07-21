// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DLSSLibrary.h"

#ifdef DLSSBLUEPRINT_DLSSLibrary_generated_h
#error "DLSSLibrary.generated.h already included, missing '#pragma once' in DLSSLibrary.h"
#endif
#define DLSSBLUEPRINT_DLSSLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class UDLSSMode : uint8;
enum class UDLSSSupport : uint8;

// ********** Begin Class UDLSSLibrary *************************************************************
#define FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultDLSSMode); \
	DECLARE_FUNCTION(execGetDLSSMode); \
	DECLARE_FUNCTION(execSetDLSSMode); \
	DECLARE_FUNCTION(execGetDLSSScreenPercentageRange); \
	DECLARE_FUNCTION(execGetDLSSModeInformation); \
	DECLARE_FUNCTION(execIsRayTracingAvailable); \
	DECLARE_FUNCTION(execGetSupportedDLSSModes); \
	DECLARE_FUNCTION(execIsDLSSModeSupported); \
	DECLARE_FUNCTION(execIsDLAAEnabled); \
	DECLARE_FUNCTION(execEnableDLAA); \
	DECLARE_FUNCTION(execIsDLSSRREnabled); \
	DECLARE_FUNCTION(execEnableDLSSRR); \
	DECLARE_FUNCTION(execIsDLSSEnabled); \
	DECLARE_FUNCTION(execEnableDLSS); \
	DECLARE_FUNCTION(execGetDLSSRRMinimumDriverVersion); \
	DECLARE_FUNCTION(execGetDLSSMinimumDriverVersion); \
	DECLARE_FUNCTION(execQueryDLSSRRSupport); \
	DECLARE_FUNCTION(execQueryDLSSSupport); \
	DECLARE_FUNCTION(execIsDLSSRRSupported); \
	DECLARE_FUNCTION(execIsDLSSSupported);


struct Z_Construct_UClass_UDLSSLibrary_Statics;
DLSSBLUEPRINT_API UClass* Z_Construct_UClass_UDLSSLibrary(ETypeConstructPhase);

#define FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDLSSLibrary_Statics; \
	friend DLSSBLUEPRINT_API UClass* ::Z_Construct_UClass_UDLSSLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDLSSLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DLSSBlueprint"), Z_Construct_UClass_UDLSSLibrary) \
	DECLARE_SERIALIZER(UDLSSLibrary)


#define FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DLSSBLUEPRINT_API UDLSSLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDLSSLibrary(UDLSSLibrary&&) = delete; \
	UDLSSLibrary(const UDLSSLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DLSSBLUEPRINT_API, UDLSSLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLSSLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLSSLibrary) \
	DLSSBLUEPRINT_API virtual ~UDLSSLibrary();


#define FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_58_PROLOG
#define FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDLSSLibrary;

// ********** End Class UDLSSLibrary ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h

// ********** Begin Enum UDLSSSupport **************************************************************
#define FOREACH_ENUM_UDLSSSUPPORT(op) \
	op(UDLSSSupport::Supported) \
	op(UDLSSSupport::NotSupported) \
	op(UDLSSSupport::NotSupportedIncompatibleHardware) \
	op(UDLSSSupport::NotSupportedDriverOutOfDate) \
	op(UDLSSSupport::NotSupportedOperatingSystemOutOfDate) \
	op(UDLSSSupport::NotSupportedByPlatformAtBuildTime) \
	op(UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive) 

enum class UDLSSSupport : uint8;
template<> struct TIsUEnumClass<UDLSSSupport> { enum { Value = true }; };
template<> UE_NODEBUG DLSSBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<UDLSSSupport>();
// ********** End Enum UDLSSSupport ****************************************************************

// ********** Begin Enum UDLSSMode *****************************************************************
#define FOREACH_ENUM_UDLSSMODE(op) \
	op(UDLSSMode::Off) \
	op(UDLSSMode::Auto) \
	op(UDLSSMode::DLAA) \
	op(UDLSSMode::UltraQuality) \
	op(UDLSSMode::Quality) \
	op(UDLSSMode::Balanced) \
	op(UDLSSMode::Performance) \
	op(UDLSSMode::UltraPerformance) 

enum class UDLSSMode : uint8;
template<> struct TIsUEnumClass<UDLSSMode> { enum { Value = true }; };
template<> UE_NODEBUG DLSSBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<UDLSSMode>();
// ********** End Enum UDLSSMode *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
