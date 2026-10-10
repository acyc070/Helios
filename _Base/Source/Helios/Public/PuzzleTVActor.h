#pragma once
#include "CoreMinimal.h"
#include "ETVState.h"
#include "PuzzleDraggableActor.h"
#include "TVChangeStateSignatureDelegate.h"
#include "TVChannelReference.h"
#include "TVChannelsData.h"
#include "TVEventOriginTargetSignatureDelegate.h"
#include "TVEventSignatureDelegate.h"
#include "TVRemoteEventSignatureDelegate.h"
#include "PuzzleTVActor.generated.h"

class AActor;
class AControlledPawn;
class APuzzleTVActor;
class ASmartPointActor;
class UAkComponent;
class UArrowComponent;
class UDestructibleComponent;
class UGrabHelper;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneComponent;
class USpotLightComponent;
class UStaticMeshComponent;
class UUsableObjectReceiver;

UCLASS(Blueprintable)
class HELIOS_API APuzzleTVActor : public APuzzleDraggableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETVState mInitialTVState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mLinkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChannelReference mOnTVChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canBeTurnedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canPushTV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakTVOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mProximityRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimeTouchingScreen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimeRemoteInteracting;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 mMaterialIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mMaterialTextureParam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChannelReference mOffTVChannel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* mOnIndicatorMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* mOnMasterSlaveMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* mOffMasterSlaveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mIndicatorLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mMasterLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mSlaveLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mPushPanelGrabHelperScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mPushPanelGrabHelperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mPushPanelGrabHelperRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mPushPanelGrabHelperBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mScreenMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* mScreenDestructibleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* mTeleportationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mTeleportationTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* mAKTVAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* mTVSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUsableObjectReceiver* mRemoteReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* mScreenCenterLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVChangeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStateOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStateNoise;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStatePartialConnection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStateConnectedMaster;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStateConnectedSlave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStateLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChangeStateSignature OnTVStateBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVEventSignature OnPawnTouchingScreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVEventSignature OnPawnStartTeleporting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVEventOriginTargetSignature OnPawnEndTeleporting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVEventSignature OnPawnSpawnsFromThisTV;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVRemoteEventSignature OnRemoteUsedOnTVStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVRemoteEventSignature OnRemoteUsedOnTVUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVRemoteEventSignature OnRemoteUsedOnTVEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableTeleportBetweenPersistentLevels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mTeleportingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASmartPointActor*> mSmartPointActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* mScreenDynamicMaterialInstance;
    
public:
    APuzzleTVActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportToTVBP(APuzzleTVActor* otherTV);
    
    UFUNCTION(BlueprintCallable)
    void TeleportThroughPortalBP();
    
    UFUNCTION(BlueprintCallable)
    void StopPushingTV();
    
    UFUNCTION(BlueprintCallable)
    void StartPushingTV(AActor* interactingActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTVChannelBP(const FTVChannelReference& newTVChannel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStateBP(ETVState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStatePartialConnection(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStateOff(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStateNoise(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStateLocked(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStateConnectedSlave(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStateConnectedMaster(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVStateBroken(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTVChangeState(APuzzleTVActor* thisTV, ETVState currentTVState, ETVState previousTVState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRemoteUsedOnTVUpdate(APuzzleTVActor* thisTV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRemoteUsedOnTVStart(APuzzleTVActor* thisTV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRemoteUsedOnTVEnd(APuzzleTVActor* thisTV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnTouchingScreen(APuzzleTVActor* thisTV, AControlledPawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnStartTeleporting(APuzzleTVActor* thisTV, AControlledPawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnSpawnsFromThisTV(APuzzleTVActor* thisTV, AControlledPawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnEndTeleporting(APuzzleTVActor* thisTV, APuzzleTVActor* otherTV, AControlledPawn* ControlledPawn);
    
    UFUNCTION()
    void OnRemoteInteractionUpdate(FName Event, bool MainTarget, bool testParam);
    
    UFUNCTION()
    void OnRemoteInteractionStart(AActor* remoteActor);
    
    UFUNCTION()
    void OnRemoteInteractionEnd(AActor* remoteActor);
    
    UFUNCTION(BlueprintPure)
    bool IsPortalOpenBP() const;
    
    UFUNCTION(BlueprintCallable)
    void InteractWithTVBP();
    
    UFUNCTION(BlueprintPure)
    ETVState GetTVState() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APuzzleTVActor*> GetTVPuzzlePiecesInMyNetworkBP() const;
    
    UFUNCTION(BlueprintPure)
    FTVChannelsData GetTVChannelBP() const;
    
    UFUNCTION(BlueprintPure)
    AControlledPawn* GetTeleportingPawn() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ASmartPointActor*> GetSmartPoints();
    
public:
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetScreenMaterialInstanceDynamic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSmartPointsStatus(bool newStatus);
    
};

