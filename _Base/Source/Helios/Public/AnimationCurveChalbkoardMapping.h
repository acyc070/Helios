#pragma once
#include "CoreMinimal.h"
#include "ChalkboardSectionKey.h"
#include "AnimationCurveChalbkoardMapping.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FAnimationCurveChalbkoardMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mChalkboardSectionKey;
    
    FAnimationCurveChalbkoardMapping();
};

