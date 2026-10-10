#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAttachPoint.h"
#include "GoInvestigateVolumeAction.h"
#include "KillUnderTheBedPattern.generated.h"

class AActor;
class AControlledPawn;
class UDeathHandlerDataAsset;
class UGrabActorComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UKillUnderTheBedPattern : public UGoInvestigateVolumeAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mTargetKillAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mTargetGrabKillNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mDeathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachPoint mDefaultAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabActorComponent* mGrabActorComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mTargetCPawn;
    
public:
    UKillUnderTheBedPattern();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReachedBedLocation(AActor* BedActor, AControlledPawn* TargetControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHitTarget(AActor* BedActor, AControlledPawn* TargetControlledPawn, EAttachPoint attachPoint, FVector HitCheckLocation, FVector HitDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHitBed(AActor* BedActor, AControlledPawn* TargetControlledPawn, EAttachPoint attachPoint, FVector HitCheckLocation, FVector HitDirection);
    
private:
    UFUNCTION()
    void OnAnimationNotify(FName Name);
    
};

