#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "PuzzleAnalyzer.generated.h"

class APuzzlePieceActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UPuzzleAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mIsLeadPuzzleSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mIsAssociatePuzzleSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mCheckForPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APuzzlePieceActor* mBestPuzzlePieceForLeadSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APuzzlePieceActor* mBestPuzzlePieceForAssociateSolver;
    
public:
    UPuzzleAnalyzer();

};

