#pragma once
#include "CoreMinimal.h"
#include "TargetComponent.h"
#include "HighlightedObjectDelegate.h"
#include "HighlightedObjectTickDelegate.h"
#include "InteractionFromObjectDelegate.h"
#include "UsableObjectReceiver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UUsableObjectReceiver : public UTargetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightedObject ObjectHighLightStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightedObject ObjectHighLightStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightedObjectTick ObjectHighLightTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightedObject ObjectMainTargetStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightedObject ObjectMainTargetEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionFromObject OnInteraction;
    
    UUsableObjectReceiver(const FObjectInitializer& ObjectInitializer);

};

