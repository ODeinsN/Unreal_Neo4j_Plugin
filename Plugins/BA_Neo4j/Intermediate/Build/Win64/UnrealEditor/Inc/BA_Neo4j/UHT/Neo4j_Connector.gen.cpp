// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BA_Neo4j/Public/Neo4j_Connector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeo4j_Connector() {}

// Begin Cross Module References
BA_NEO4J_API UClass* Z_Construct_UClass_UNeo4j_Connector();
BA_NEO4J_API UClass* Z_Construct_UClass_UNeo4j_Connector_NoRegister();
BA_NEO4J_API UFunction* Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature();
BA_NEO4J_API UScriptStruct* Z_Construct_UScriptStruct_FNeo4J_RequestDetails();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BA_Neo4j();
// End Cross Module References

// Begin Delegate FOnRESTRequestComplete
struct Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics
{
	struct _Script_BA_Neo4j_eventOnRESTRequestComplete_Parms
	{
		FString Response;
		bool bSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Neo4j_Connector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static void NewProp_bSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BA_Neo4j_eventOnRESTRequestComplete_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
void Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful_SetBit(void* Obj)
{
	((_Script_BA_Neo4j_eventOnRESTRequestComplete_Parms*)Obj)->bSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BA_Neo4j_eventOnRESTRequestComplete_Parms), &Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BA_Neo4j, nullptr, "OnRESTRequestComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::_Script_BA_Neo4j_eventOnRESTRequestComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::_Script_BA_Neo4j_eventOnRESTRequestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRESTRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRESTRequestComplete, const FString& Response, bool bSuccessful)
{
	struct _Script_BA_Neo4j_eventOnRESTRequestComplete_Parms
	{
		FString Response;
		bool bSuccessful;
	};
	_Script_BA_Neo4j_eventOnRESTRequestComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccessful=bSuccessful ? true : false;
	OnRESTRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRESTRequestComplete

// Begin ScriptStruct FNeo4J_RequestDetails
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails;
class UScriptStruct* FNeo4J_RequestDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeo4J_RequestDetails, (UObject*)Z_Construct_UPackage__Script_BA_Neo4j(), TEXT("Neo4J_RequestDetails"));
	}
	return Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails.OuterSingleton;
}
template<> BA_NEO4J_API UScriptStruct* StaticStruct<FNeo4J_RequestDetails>()
{
	return FNeo4J_RequestDetails::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Neo4j_Connector.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeo4J_RequestDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BA_Neo4j,
	nullptr,
	&NewStructOps,
	"Neo4J_RequestDetails",
	nullptr,
	0,
	sizeof(FNeo4J_RequestDetails),
	alignof(FNeo4J_RequestDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNeo4J_RequestDetails()
{
	if (!Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails.InnerSingleton, Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails.InnerSingleton;
}
// End ScriptStruct FNeo4J_RequestDetails

// Begin Class UNeo4j_Connector Function CreateREST_API_ConnectionObject
struct Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics
{
	struct Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms
	{
		FString UserName;
		FString Password;
		FString Url;
		FString Verb;
		TMap<FString,FString> Headers;
		FString JsonBody;
		UNeo4j_Connector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "" },
		{ "Category", "Dev Bastian" },
		{ "DisplayName", "Neo4j Connector" },
		{ "ModuleRelativePath", "Public/Neo4j_Connector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, Verb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verb_MetaData), NewProp_Verb_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_JsonBody = { "JsonBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, JsonBody), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonBody_MetaData), NewProp_JsonBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms, ReturnValue), Z_Construct_UClass_UNeo4j_Connector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Headers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Headers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_JsonBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeo4j_Connector, nullptr, "CreateREST_API_ConnectionObject", nullptr, nullptr, Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::Neo4j_Connector_eventCreateREST_API_ConnectionObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeo4j_Connector::execCreateREST_API_ConnectionObject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
	P_GET_TMAP(FString,FString,Z_Param_Headers);
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonBody);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNeo4j_Connector**)Z_Param__Result=UNeo4j_Connector::CreateREST_API_ConnectionObject(Z_Param_UserName,Z_Param_Password,Z_Param_Url,Z_Param_Verb,Z_Param_Headers,Z_Param_JsonBody);
	P_NATIVE_END;
}
// End Class UNeo4j_Connector Function CreateREST_API_ConnectionObject

// Begin Class UNeo4j_Connector
void UNeo4j_Connector::StaticRegisterNativesUNeo4j_Connector()
{
	UClass* Class = UNeo4j_Connector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateREST_API_ConnectionObject", &UNeo4j_Connector::execCreateREST_API_ConnectionObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeo4j_Connector);
UClass* Z_Construct_UClass_UNeo4j_Connector_NoRegister()
{
	return UNeo4j_Connector::StaticClass();
}
struct Z_Construct_UClass_UNeo4j_Connector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class with methods to connect to and receive data from a Neo4j graph DB\n */" },
#endif
		{ "IncludePath", "Neo4j_Connector.h" },
		{ "ModuleRelativePath", "Public/Neo4j_Connector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class with methods to connect to and receive data from a Neo4j graph DB" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRESTRequestComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Neo4j_Connector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRESTRequestComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeo4j_Connector_CreateREST_API_ConnectionObject, "CreateREST_API_ConnectionObject" }, // 2262358570
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeo4j_Connector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNeo4j_Connector_Statics::NewProp_OnRESTRequestComplete = { "OnRESTRequestComplete", nullptr, (EPropertyFlags)0x0010200010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeo4j_Connector, OnRESTRequestComplete), Z_Construct_UDelegateFunction_BA_Neo4j_OnRESTRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRESTRequestComplete_MetaData), NewProp_OnRESTRequestComplete_MetaData) }; // 1277370266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeo4j_Connector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeo4j_Connector_Statics::NewProp_OnRESTRequestComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeo4j_Connector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNeo4j_Connector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BA_Neo4j,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeo4j_Connector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeo4j_Connector_Statics::ClassParams = {
	&UNeo4j_Connector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNeo4j_Connector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNeo4j_Connector_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeo4j_Connector_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeo4j_Connector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNeo4j_Connector()
{
	if (!Z_Registration_Info_UClass_UNeo4j_Connector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeo4j_Connector.OuterSingleton, Z_Construct_UClass_UNeo4j_Connector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeo4j_Connector.OuterSingleton;
}
template<> BA_NEO4J_API UClass* StaticClass<UNeo4j_Connector>()
{
	return UNeo4j_Connector::StaticClass();
}
UNeo4j_Connector::UNeo4j_Connector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNeo4j_Connector);
UNeo4j_Connector::~UNeo4j_Connector() {}
// End Class UNeo4j_Connector

// Begin Registration
struct Z_CompiledInDeferFile_FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNeo4J_RequestDetails::StaticStruct, Z_Construct_UScriptStruct_FNeo4J_RequestDetails_Statics::NewStructOps, TEXT("Neo4J_RequestDetails"), &Z_Registration_Info_UScriptStruct_Neo4J_RequestDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeo4J_RequestDetails), 1499558128U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeo4j_Connector, UNeo4j_Connector::StaticClass, TEXT("UNeo4j_Connector"), &Z_Registration_Info_UClass_UNeo4j_Connector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeo4j_Connector), 3938622087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_2245003465(TEXT("/Script/BA_Neo4j"),
	Z_CompiledInDeferFile_FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BA_Project_Plugins_Unreal_Neo4j_Plugin_Plugins_BA_Neo4j_Source_BA_Neo4j_Public_Neo4j_Connector_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
