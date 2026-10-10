#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimationOverrideProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class UAnimationOverrideProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mOverridePriorities[7];
    
    UAnimationOverrideProjectSettings();

};

