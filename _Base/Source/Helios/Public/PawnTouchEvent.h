#pragma once
#include "CoreMinimal.h"
#include "EPawnTouchState.h"
#include "GenericPawnEvent.h"
#include "PawnTouchEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FPawnTouchEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mTouchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnTouchState mTouchState;
    
    FPawnTouchEvent();
};

