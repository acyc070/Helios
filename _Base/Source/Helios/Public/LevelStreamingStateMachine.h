#pragma once
#include "CoreMinimal.h"
#include "FiniteStateMachine.h"
#include "LevelStreamingStateMachine.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class ULevelStreamingStateMachine : public UFiniteStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* mManagedLevel;
    
public:
    ULevelStreamingStateMachine();

};

