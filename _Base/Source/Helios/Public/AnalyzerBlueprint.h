#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "AnalyzerBlueprint.generated.h"

class APawn;
class UAIAnimator;
class UAINavigator;
class UChalkboardWrapper;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAnalyzerBlueprint : public UAIAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* AIChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAIAnimator* Animator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAINavigator* Navigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UAnalyzerBlueprint();

    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnalysis();
    
};

