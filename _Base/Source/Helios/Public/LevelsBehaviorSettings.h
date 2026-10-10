#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESoftReloadingSceneComponentsTransformStrategy.h"
#include "LevelsBehaviorSettings.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HELIOS_API ULevelsBehaviorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<AActor>> mClassesOptedOutOfTransformSaving;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoftReloadingSceneComponentsTransformStrategy mSceneComponentsReloadingStrategy;
    
    ULevelsBehaviorSettings();

};

