#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkComponent.h"
#include "AbilitySetOverride.h"
#include "ENavlinkTraversal.h"
#include "HelComponentReference.h"
#include "HeliosNavlinkAttachOptions.h"
#include "HeliosNavlinkContext.h"
#include "NavlinkAnticipateTraversalDelegateDelegate.h"
#include "NavlinkTraversalDelegateDelegate.h"
#include "HeliosNavlinkComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UHeliosNavlinkComponent : public UNavLinkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* mSphereTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavlinkTraversal mTraversal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSnapToInitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosNavlinkAttachOptions mAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosNavlinkContext mContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mClimbableRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mAbilitySetOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavlinkAnticipateTraversalDelegate mOnAnticipateCustomTraversal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavlinkTraversalDelegate mOnStartCustomTraversal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavlinkTraversalDelegate mOnUpdateCustomTraversal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavlinkTraversalDelegate mOnStopCustomTraversal;
    
    UHeliosNavlinkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTraversal();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool onOff);
    
    UFUNCTION(BlueprintPure)
    FVector Right() const;
    
private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void NavlinkAttachmentsOnOff(bool onOff);
    
    UFUNCTION(BlueprintCallable)
    void ModifyNavlinkExtremities(const FVector& NewLeft, const FVector& NewRight, int32 navlinkIndex);
    
    UFUNCTION(BlueprintPure)
    FVector Left() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetRightAttachmentComponent();
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetLeftAttachmentComponent();
    
    UFUNCTION(BlueprintPure)
    FNavigationLink GetCurrentLink() const;
    
};

