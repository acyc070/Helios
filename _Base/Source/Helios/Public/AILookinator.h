#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AILookOptions.h"
#include "ELookCalculation.h"
#include "ELookinatorMode.h"
#include "AILookinator.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAILookinator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLookOriginOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSkeletalmeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mVisionSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mVisualSensorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mPreLookAtPoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILookOptions mDefaultLookOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILookOptions mQuickLookOptions;
    
    UAILookinator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLooking();
    
    UFUNCTION(BlueprintCallable)
    void LookAtLocation(const FVector& Location, FAILookOptions lookOptions, ELookinatorMode LookMode, ELookCalculation lookOrigin);
    
    UFUNCTION(BlueprintCallable)
    void LookAtComponent(USceneComponent* Component, FAILookOptions lookOptions, ELookinatorMode LookMode, ELookCalculation lookOrigin);
    
    UFUNCTION(BlueprintCallable)
    void LookAtActor(AActor* Actor, FAILookOptions lookOptions, ELookinatorMode LookMode, ELookCalculation lookOrigin);
    
    UFUNCTION(BlueprintPure)
    FVector GetTrackedLocation() const;
    
    UFUNCTION(BlueprintPure)
    ELookinatorMode GetLookMode() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtRotator(const FVector& Location, ELookCalculation overrideMode) const;
    
};

