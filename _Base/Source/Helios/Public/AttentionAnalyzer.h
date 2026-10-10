#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "GenericGameEvent.h"
#include "AttentionAnalyzer.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAttentionAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mPrimaryAttentionTarget;
    
public:
    UAttentionAnalyzer();

protected:
    UFUNCTION()
    void OnPrimaryAttentionTargetDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnAttentionEvent(const FGenericGameEvent& gameEvent);
    
};

