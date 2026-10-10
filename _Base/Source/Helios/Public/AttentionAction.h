#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "AttentionAction.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAttentionAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mAttentionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttentionStrength;
    
    UAttentionAction();

};

