#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "ChalkboardSectionKey.h"
#include "CharacterAnimStateTransitions.h"
#include "EMovementRestriction.h"
#include "PlayBlendspaceAction.generated.h"

class UBlendSpaceBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UPlayBlendspaceAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* mBlendspaceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mXValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mYValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimStateTransitions mTransitions;
    
    UPlayBlendspaceAction();

private:
    UFUNCTION()
    void OnBlendspaceDone(FName Name);
    
};

