#pragma once
#include "CoreMinimal.h"
#include "CharacterThreatSettings.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterThreatSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableHeartbeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mProximityMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mProximityMinDistance;
    
    FCharacterThreatSettings();
};

