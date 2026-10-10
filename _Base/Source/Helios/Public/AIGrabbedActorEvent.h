#pragma once
#include "CoreMinimal.h"
#include "EAIGrabEventType.h"
#include "EAttachPoint.h"
#include "GenericPawnEvent.h"
#include "AIGrabbedActorEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FAIGrabbedActorEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachPoint mAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mGrabbedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIGrabEventType mType;
    
    FAIGrabbedActorEvent();
};

