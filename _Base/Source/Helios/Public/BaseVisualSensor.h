#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AISensor.h"
#include "SocketSelector.h"
#include "BaseVisualSensor.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UBaseVisualSensor : public UAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketSelector mAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mActorsToIgnore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> mVisionRaycastCollisionChannel;
    
public:
    UBaseVisualSensor();

};

