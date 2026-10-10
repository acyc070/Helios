#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaCharacterMovementComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJACHARACTER_API UNinjaCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRevertToDefaultGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseWorldGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLandOnAnySurface: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENinjaGravityDirectionMode GravityDirectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityVectorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityVectorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GravityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableGravityReplication: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignGravityToBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignComponentToFloor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignComponentToGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysRotateAroundCenter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateVelocityOnGround: 1;
    
    UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSplineTangentGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePlaneGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetPointGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPointGravityDirection(const FVector& NewGravityPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignGravityToBase(bool bNewAlignGravityToBase);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignComponentToGravity(bool bNewAlignComponentToGravity);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignComponentToFloor(bool bNewAlignComponentToFloor);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFixedGravityDirection(const FVector& NewGravityDirection);
    
    UFUNCTION(BlueprintPure)
    float GetGravityMagnitude() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGravityDirection(bool bAvoidZeroGravity) const;
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientSetSplineTangentGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSplinePlaneGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSplineGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd);
    
    UFUNCTION(Client, Reliable)
    void ClientSetPointGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(Client, Reliable)
    void ClientSetPointGravityDirection(const FVector& NewGravityPoint);
    
    UFUNCTION(Client, Reliable)
    void ClientSetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(Client, Reliable)
    void ClientSetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd);
    
    UFUNCTION(Client, Reliable)
    void ClientSetGravityScale(float NewGravityScale);
    
    UFUNCTION(Client, Reliable)
    void ClientSetFixedGravityDirection(const FVector& NewFixedGravityDirection);
    
    UFUNCTION(Client, Reliable)
    void ClientSetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(Client, Reliable)
    void ClientSetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(Client, Reliable)
    void ClientSetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(Client, Reliable)
    void ClientEnableAlignGravityToBase();
    
    UFUNCTION(Client, Reliable)
    void ClientEnableAlignComponentToGravity();
    
    UFUNCTION(Client, Reliable)
    void ClientEnableAlignComponentToFloor();
    
    UFUNCTION(Client, Reliable)
    void ClientDisableAlignGravityToBase();
    
    UFUNCTION(Client, Reliable)
    void ClientDisableAlignComponentToGravity();
    
    UFUNCTION(Client, Reliable)
    void ClientDisableAlignComponentToFloor();
    
};

