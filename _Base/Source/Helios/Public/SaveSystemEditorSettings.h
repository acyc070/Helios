#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveSystemPIELoadBehaviour.h"
#include "ESaveSystemPIESaveBehaviour.h"
#include "SaveSystemEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class USaveSystemEditorSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveSystemPIELoadBehaviour mLoadBehaviour;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveSystemPIESaveBehaviour mSaveBehaviour;
    
public:
    USaveSystemEditorSettings();

};

