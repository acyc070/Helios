#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBedLiftingSide.h"
#include "HelComponentReference.h"
#include "SmartPointProgressEvent.h"
#include "BedLiftingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UBedLiftingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mTiltingSKMcomponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mBoxComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBedLiftingSide, FHelComponentReference> SmartPoints;
    
    UBedLiftingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnSmartPointProgress(const FSmartPointProgressEvent& smartPointEvent);
    
};

