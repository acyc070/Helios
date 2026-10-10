#pragma once
#include "CoreMinimal.h"
#include "ObjectSelectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FObjectSelectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAngleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPriority;
    
    HELIOS_API FObjectSelectionSettings();
};

