#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PhysicsAudioMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsAudioMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mMaterialSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> mDefaultSurfaceType;
    
    TARSIERWWISERUNTIMEEXTENSION_API FPhysicsAudioMaterialSettings();
};

