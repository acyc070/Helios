#pragma once
#include "CoreMinimal.h"
#include "PuzzleInsertAnimation.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPuzzleInsertAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* mAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInsertHeight;
    
    HELIOS_API FPuzzleInsertAnimation();
};

