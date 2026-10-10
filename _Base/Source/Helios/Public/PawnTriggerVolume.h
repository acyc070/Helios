#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "PawnFilter.h"
#include "PawnTriggerVolume.generated.h"

class AActor;
class APawn;
class UBillboardComponent;
class UTarEditableVolumeComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class HELIOS_API APawnTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnOverlapEvent, APawn*, Pawn);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mFloatNameAndIconInFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnFilter mPawnFilter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mTextInEditor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnOverlapEvent mOnPawnBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnOverlapEvent mOnPawnEndOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarEditableVolumeComponent* mEditableVolumeComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBillboardComponent* mBillboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* mTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> mOverlappingPawns;
    
public:
    APawnTriggerVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnEndOverlap_Blueprint(APawn* Pawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnBeginOverlap_Blueprint(APawn* Pawn);
    
private:
    UFUNCTION()
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintPure)
    int32 NumOverlappingPawns() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPawnOverlapping(APawn* Pawn) const;
    
};

