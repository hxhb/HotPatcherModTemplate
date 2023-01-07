// Copyright Epic Games, Inc. All Rights Reserved.

#include "HotPatcherModTemplateEditor.h"

#define LOCTEXT_NAMESPACE "FHotPatcherModTemplateEditorModule"

DEFINE_LOG_CATEGORY(LogHotPatcherModTemplateEditor);

void FHotPatcherModTemplateEditorModule::StartupModule()
{
	FHotPatcherModBaseModule::StartupModule();
}

void FHotPatcherModTemplateEditorModule::ShutdownModule()
{
	FHotPatcherModBaseModule::ShutdownModule();
}

FHotPatcherModDesc FHotPatcherModTemplateEditorModule::GetModDesc() const
{
	FHotPatcherModDesc TmpModDesc;
	TmpModDesc.ModName = MOD_NAME;
	TmpModDesc.CurrentVersion = MOD_VERSION;
	TmpModDesc.bIsBuiltInMod = IS_INTERNAL_MODE;
	TmpModDesc.MinHotPatcherVersion = 80.0f;
	// TmpModDesc.Description = TEXT("Create Shader Library Patch");
	// TmpModDesc.URL = TEXT("https://imzlp.com/posts/5867/");
	// TmpModDesc.UpdateURL = TEXT("https://github.com/hxhb/HotPatcher/Mods/HotPatcherModTemplate");
	
	// TmpModDesc.ModActions.Emplace(
	// 	TEXT("Patcher"),MOD_NAME,TEXT("ByShaderPatch"), TEXT("Create an Shader code Patch form Metadata."),
	// 	CREATE_ACTION_WIDGET_LAMBDA(SShaderPatchWidget,TEXT("ByShaderPatch")),-1
	// 	);
	return TmpModDesc;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHotPatcherModTemplateEditorModule, HotPatcherModTemplateEditor)