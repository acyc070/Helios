#pragma once
#include "CoreMinimal.h"
#include "PhysicsAudioGroundSettings.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsAudioGroundSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDistanceThreshold;
    
    TARSIERWWISERUNTIMEEXTENSION_API FPhysicsAudioGroundSettings();
};

