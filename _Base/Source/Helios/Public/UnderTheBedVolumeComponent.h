#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TarEditableVolumeComponent.h"
#include "UnderTheBedVolumeComponent.generated.h"

class AActor;
class UActorComponent;
class UPrimitiveComponent;
class UWorld;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UUnderTheBedVolumeComponent : public UTarEditableVolumeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepositionMeshesOnWorldReloaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UActorComponent*, FTransform> mMeshOriginalTransforms;
    
public:
    UUnderTheBedVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsed();
    
    UFUNCTION(BlueprintCallable)
    void ResetUsed();
    
protected:
    UFUNCTION()
    void OnWorldReloaded(UWorld* World);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasOverlappingPawns() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOverlappingPawnsNumber() const;
    
    UFUNCTION()
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintPure)
    bool CanBeUsed();
    
    UFUNCTION()
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

