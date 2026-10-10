#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceCondition.h"
#include "PuzzlePieceAutomaticDisengageSettings.generated.h"

USTRUCT(BlueprintType)
struct FPuzzlePieceAutomaticDisengageSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceCondition> mConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mResetAICanDisengage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mResetDelay;
    
    HELIOS_API FPuzzlePieceAutomaticDisengageSettings();
};

