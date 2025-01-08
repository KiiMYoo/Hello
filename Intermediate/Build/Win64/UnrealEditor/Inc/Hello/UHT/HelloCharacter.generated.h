// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HelloCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELLO_HelloCharacter_generated_h
#error "HelloCharacter.generated.h already included, missing '#pragma once' in HelloCharacter.h"
#endif
#define HELLO_HelloCharacter_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHelloCharacter(); \
	friend struct Z_Construct_UClass_AHelloCharacter_Statics; \
public: \
	DECLARE_CLASS(AHelloCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello"), NO_API) \
	DECLARE_SERIALIZER(AHelloCharacter)


#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHelloCharacter(AHelloCharacter&&); \
	AHelloCharacter(const AHelloCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHelloCharacter) \
	NO_API virtual ~AHelloCharacter();


#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h_18_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELLO_API UClass* StaticClass<class AHelloCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Hello_Source_Hello_HelloCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
