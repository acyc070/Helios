#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AerodynamicsComponent.generated.h"

class UPrimitiveComponent;
class UVectorField;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KOSMOSGAMEPLUGIN_API UAerodynamicsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTightness;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIntensity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVectorField* VectorFieldAsset;

    UAerodynamicsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void WakeCallback(UPrimitiveComponent* WakingComponent, FName BoneName);

    UFUNCTION()
    void SleepCallback(UPrimitiveComponent* WakingComponent, FName BoneName);
};