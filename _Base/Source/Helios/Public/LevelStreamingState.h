#pragma once
#include "CoreMinimal.h"
#include "State.h"
#include "LevelStreamingState.generated.h"

class ULevelStreaming;
class ULevelStreamingStateMachine;

UCLASS(Abstract, Blueprintable)
class ULevelStreamingState : public UState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* mManagedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingStateMachine* mOwnerFSM;
    
public:
    ULevelStreamingState();

};

