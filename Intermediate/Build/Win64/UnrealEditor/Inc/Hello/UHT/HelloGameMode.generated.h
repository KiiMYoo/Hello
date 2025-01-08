// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HelloGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELLO_HelloGameMode_generated_h
#error "HelloGameMode.generated.h already included, missing '#pragma once' in HelloGameMode.h"
#endif
#define HELLO_HelloGameMode_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHelloGameMode(); \
	friend struct Z_Construct_UClass_AHelloGameMode_Statics; \
public: \
	DECLARE_CLASS(AHelloGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello"), HELLO_API) \
	DECLARE_SERIALIZER(AHelloGameMode)


#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHelloGameMode(AHelloGameMode&&); \
	AHelloGameMode(const AHelloGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELLO_API, AHelloGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHelloGameMode) \
	HELLO_API virtual ~AHelloGameMode();


#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h_9_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELLO_API UClass* StaticClass<class AHelloGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
