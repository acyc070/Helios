#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "CharacterAudioEvent.h"
#include "UseSmartPointOnceAction.generated.h"

class UAIScriptedOrder;
class USmartPoint;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UUseSmartPointOnceAction : public UAIActionPattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mSPOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAudioEvent mSPOrderAudioEvent;
    
public:
    UUseSmartPointOnceAction();

};

