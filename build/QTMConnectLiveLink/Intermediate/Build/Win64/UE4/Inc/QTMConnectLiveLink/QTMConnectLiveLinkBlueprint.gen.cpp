// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTMConnectLiveLink/Public/QTMConnectLiveLinkBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTMConnectLiveLinkBlueprint() {}
// Cross Module References
	QTMCONNECTLIVELINK_API UClass* Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_NoRegister();
	QTMCONNECTLIVELINK_API UClass* Z_Construct_UClass_UQTMConnectLiveLinkBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_QTMConnectLiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
// End Cross Module References
	DEFINE_FUNCTION(UQTMConnectLiveLinkBlueprint::execCreateQTMConnectLiveLinkSource)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
		P_GET_UBOOL(Z_Param_Stream3d);
		P_GET_UBOOL(Z_Param_Stream6d);
		P_GET_UBOOL(Z_Param_StreamSkeleton);
		P_GET_UBOOL(Z_Param_StreamForce);
		P_GET_UBOOL(Z_Param_StreamAnalog);
		P_GET_UBOOL(Z_Param_StreamAnalogSingle);
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrequencyValue);
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQTMConnectLiveLinkBlueprint::CreateQTMConnectLiveLinkSource(Z_Param_IpAddress,Z_Param_Stream3d,Z_Param_Stream6d,Z_Param_StreamSkeleton,Z_Param_StreamForce,Z_Param_StreamAnalog,Z_Param_StreamAnalogSingle,Z_Param_StreamRate,Z_Param_FrequencyValue,Z_Param_Out_SourceHandle);
		P_NATIVE_END;
	}
	void UQTMConnectLiveLinkBlueprint::StaticRegisterNativesUQTMConnectLiveLinkBlueprint()
	{
		UClass* Class = UQTMConnectLiveLinkBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateQTMConnectLiveLinkSource", &UQTMConnectLiveLinkBlueprint::execCreateQTMConnectLiveLinkSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics
	{
		struct QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms
		{
			FString IpAddress;
			bool Stream3d;
			bool Stream6d;
			bool StreamSkeleton;
			bool StreamForce;
			bool StreamAnalog;
			bool StreamAnalogSingle;
			FString StreamRate;
			int32 FrequencyValue;
			FLiveLinkSourceHandle SourceHandle;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpAddress;
		static void NewProp_Stream3d_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stream3d;
		static void NewProp_Stream6d_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stream6d;
		static void NewProp_StreamSkeleton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StreamSkeleton;
		static void NewProp_StreamForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StreamForce;
		static void NewProp_StreamAnalog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StreamAnalog;
		static void NewProp_StreamAnalogSingle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StreamAnalogSingle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamRate;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrequencyValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms, IpAddress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream3d_SetBit(void* Obj)
	{
		((QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms*)Obj)->Stream3d = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream3d = { "Stream3d", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream3d_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream6d_SetBit(void* Obj)
	{
		((QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms*)Obj)->Stream6d = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream6d = { "Stream6d", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream6d_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamSkeleton_SetBit(void* Obj)
	{
		((QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms*)Obj)->StreamSkeleton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamSkeleton = { "StreamSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamSkeleton_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamForce_SetBit(void* Obj)
	{
		((QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms*)Obj)->StreamForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamForce = { "StreamForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalog_SetBit(void* Obj)
	{
		((QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms*)Obj)->StreamAnalog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalog = { "StreamAnalog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalog_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalogSingle_SetBit(void* Obj)
	{
		((QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms*)Obj)->StreamAnalogSingle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalogSingle = { "StreamAnalogSingle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalogSingle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamRate = { "StreamRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms, StreamRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_FrequencyValue = { "FrequencyValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms, FrequencyValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_IpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream3d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_Stream6d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamAnalogSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_StreamRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_FrequencyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Qualisys" },
		{ "DisplayName", "Create QTM Connect LiveLink Source" },
		{ "FrequencyValue", "0" },
		{ "IpAddress", "127.0.0.1" },
		{ "ModuleRelativePath", "Public/QTMConnectLiveLinkBlueprint.h" },
		{ "Stream3d", "false" },
		{ "Stream6d", "true" },
		{ "StreamAnalog", "false" },
		{ "StreamAnalogSingle", "true" },
		{ "StreamForce", "false" },
		{ "StreamRate", "All Frames" },
		{ "StreamSkeleton", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQTMConnectLiveLinkBlueprint, nullptr, "CreateQTMConnectLiveLinkSource", nullptr, nullptr, sizeof(QTMConnectLiveLinkBlueprint_eventCreateQTMConnectLiveLinkSource_Parms), Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_NoRegister()
	{
		return UQTMConnectLiveLinkBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QTMConnectLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQTMConnectLiveLinkBlueprint_CreateQTMConnectLiveLinkSource, "CreateQTMConnectLiveLinkSource" }, // 3633908939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QTMConnectLiveLinkBlueprint.h" },
		{ "ModuleRelativePath", "Public/QTMConnectLiveLinkBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQTMConnectLiveLinkBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::ClassParams = {
		&UQTMConnectLiveLinkBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQTMConnectLiveLinkBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQTMConnectLiveLinkBlueprint, 2903860454);
	template<> QTMCONNECTLIVELINK_API UClass* StaticClass<UQTMConnectLiveLinkBlueprint>()
	{
		return UQTMConnectLiveLinkBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQTMConnectLiveLinkBlueprint(Z_Construct_UClass_UQTMConnectLiveLinkBlueprint, &UQTMConnectLiveLinkBlueprint::StaticClass, TEXT("/Script/QTMConnectLiveLink"), TEXT("UQTMConnectLiveLinkBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQTMConnectLiveLinkBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
