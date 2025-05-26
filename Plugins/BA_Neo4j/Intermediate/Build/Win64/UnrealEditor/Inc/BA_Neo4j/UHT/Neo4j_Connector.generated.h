// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Neo4j_Connector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UNeo4j_Connector;
#ifdef BA_NEO4J_Neo4j_Connector_generated_h
#error "Neo4j_Connector.generated.h already included, missing '#pragma once' in Neo4j_Connector.h"
#endif
#define BA_NEO4J_Neo4j_Connector_generated_h

#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_8_DELEGATE \
BA_NEO4J_API void FOnRESTRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRESTRequestComplete, const FString& Response, bool bSuccessful);


#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics; \
	BA_NEO4J_API static class UScriptStruct* StaticStruct();


template<> BA_NEO4J_API UScriptStruct* StaticStruct<struct FNeo4J_RequestDetails>();

#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateREST_API_ConnectionObject);


#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeo4j_Connector(); \
	friend struct Z_Construct_UClass_UNeo4j_Connector_Statics; \
public: \
	DECLARE_CLASS(UNeo4j_Connector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BA_Neo4j"), NO_API) \
	DECLARE_SERIALIZER(UNeo4j_Connector)


#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeo4j_Connector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeo4j_Connector(UNeo4j_Connector&&); \
	UNeo4j_Connector(const UNeo4j_Connector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeo4j_Connector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeo4j_Connector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeo4j_Connector) \
	NO_API virtual ~UNeo4j_Connector();


#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_26_PROLOG
#define FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_INCLASS_NO_PURE_DECLS \
	FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BA_NEO4J_API UClass* StaticClass<class UNeo4j_Connector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
