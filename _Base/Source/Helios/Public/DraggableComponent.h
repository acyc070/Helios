#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DraggableInterface.h"
#include "GrabEventDelegateDelegate.h"
#include "DraggableComponent.generated.h"

class UGrabHelper;

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UDEPRECATED_DraggableComponent : public USceneComponent, public IDraggableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabEventDelegate mOnGrabEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGrabHelper*> mGrabHelpers;
    
public:
    UDEPRECATED_DraggableComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

