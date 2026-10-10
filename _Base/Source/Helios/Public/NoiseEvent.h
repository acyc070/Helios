#pragma once
#include "CoreMinimal.h"
#include "ENoiseStrength.h"
#include "GenericWorldEvent.h"
#include "SoftEnumName.h"
#include "NoiseEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FNoiseEvent : public FGenericWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoiseStrength mStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mNoiseID;
    
    FNoiseEvent();
};

