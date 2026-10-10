#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TransitionToStateCollection.h"
#include "FiniteStateMachine.generated.h"

class UState;
class UWorld;

UCLASS(Blueprintable)
class UFiniteStateMachine : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* mWorldContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UState* mCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UState*, FTransitionToStateCollection> mStatesAndTransitions;
    
public:
    UFiniteStateMachine();

};

