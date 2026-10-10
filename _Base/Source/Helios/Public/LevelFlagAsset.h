#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPresenceString.h"
#include "LevelFlagAsset.generated.h"

UCLASS(Blueprintable)
class HELIOS_API ULevelFlagAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPresenceString LevelFlag;
    
    ULevelFlagAsset();

};

