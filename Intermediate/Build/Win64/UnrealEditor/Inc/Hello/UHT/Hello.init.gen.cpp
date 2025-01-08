// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHello_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Hello;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Hello()
	{
		if (!Z_Registration_Info_UPackage__Script_Hello.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Hello",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB12AF602,
				0x8C264FF5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Hello.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Hello.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Hello(Z_Construct_UPackage__Script_Hello, TEXT("/Script/Hello"), Z_Registration_Info_UPackage__Script_Hello, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB12AF602, 0x8C264FF5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
