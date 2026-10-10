#pragma once
#include "CoreMinimal.h"
#include "EGrabEventProgress.h"
#include "EGrabEventType.h"
#include "GenericPawnEvent.h"
#include "GrabEvent.generated.h"

class AActor;
class UGrabHelper;

USTRUCT(BlueprintType)
struct HELIOS_API FGrabEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabEventType mGrabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabEventProgress mGrabProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mGrabbedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mGrabHelper;
    
    FGrabEvent();
};

