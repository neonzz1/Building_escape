// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Building_Escape/Private/FirstOpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstOpenDoor() {}
// Cross Module References
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_UFirstOpenDoor_NoRegister();
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_UFirstOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Building_Escape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UFirstOpenDoor::StaticRegisterNativesUFirstOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UFirstOpenDoor_NoRegister()
	{
		return UFirstOpenDoor::StaticClass();
	}
	struct Z_Construct_UClass_UFirstOpenDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCloseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorCloseDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorThatOpens_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatOpens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirstOpenDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Building_Escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FirstOpenDoor.h" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_CloseSpeed_MetaData[] = {
		{ "Category", "FirstOpenDoor" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_CloseSpeed = { "CloseSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstOpenDoor, CloseSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_CloseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_CloseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_OpenSpeed_MetaData[] = {
		{ "Category", "FirstOpenDoor" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_OpenSpeed = { "OpenSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstOpenDoor, OpenSpeed), METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_OpenSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_OpenSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData[] = {
		{ "Category", "FirstOpenDoor" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_DoorCloseDelay = { "DoorCloseDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstOpenDoor, DoorCloseDelay), METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_ActorThatOpens_MetaData[] = {
		{ "Category", "FirstOpenDoor" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_ActorThatOpens = { "ActorThatOpens", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstOpenDoor, ActorThatOpens), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_ActorThatOpens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_ActorThatOpens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "FirstOpenDoor" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstOpenDoor, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_PressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_TargetYaw_MetaData[] = {
		{ "Category", "FirstOpenDoor" },
		{ "ModuleRelativePath", "Private/FirstOpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_TargetYaw = { "TargetYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirstOpenDoor, TargetYaw), METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_TargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_TargetYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirstOpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_CloseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_OpenSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_DoorCloseDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_ActorThatOpens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstOpenDoor_Statics::NewProp_TargetYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirstOpenDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirstOpenDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirstOpenDoor_Statics::ClassParams = {
		&UFirstOpenDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFirstOpenDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFirstOpenDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstOpenDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirstOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirstOpenDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirstOpenDoor, 3495346327);
	template<> BUILDING_ESCAPE_API UClass* StaticClass<UFirstOpenDoor>()
	{
		return UFirstOpenDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirstOpenDoor(Z_Construct_UClass_UFirstOpenDoor, &UFirstOpenDoor::StaticClass, TEXT("/Script/Building_Escape"), TEXT("UFirstOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirstOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
