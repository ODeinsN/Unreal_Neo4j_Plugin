// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBA_Neo4j_init() {}
	BA_NEO4J_API UFunction* Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BA_Neo4j;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BA_Neo4j()
	{
		if (!Z_Registration_Info_UPackage__Script_BA_Neo4j.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BA_Neo4j",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6FE6E71A,
				0xDBE53874,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BA_Neo4j.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BA_Neo4j.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BA_Neo4j(Z_Construct_UPackage__Script_BA_Neo4j, TEXT("/Script/BA_Neo4j"), Z_Registration_Info_UPackage__Script_BA_Neo4j, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6FE6E71A, 0xDBE53874));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
