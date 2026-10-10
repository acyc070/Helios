#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "AIAnimStateOptions.h"
#include "AILookOptions.h"
#include "AIScriptedOrderHandle.h"
#include "CannedAnimationOptions.h"
#include "CharacterAnimStateTransitions.h"
#include "CustomAnimationOptions.h"
#include "CustomBlendspaceOptions.h"
#include "EAIControlOrderCommand.h"
#include "EAIInteractionOrderType.h"
#include "EAIItemInteraction.h"
#include "ELatentAIOrderResult.h"
#include "EMovementRestriction.h"
#include "ESmartPointNavigationSelection.h"
#include "HelComponentReference.h"
#include "LocomotionState.h"
#include "SoftEnumName.h"
#include "Stimulus.h"
#include "Templates/SubclassOf.h"
#include "AIBlueprintLibrary.generated.h"

class AActor;
class APawn;
class APuzzlePieceActor;
class ASmartPointActor;
class UAIBaseReactivePattern;
class UAINavigationOptionsData;
class UActorComponent;
class UAnimSequenceBase;
class UObject;
class UPickupComponent;
class USceneComponent;
class USmartPoint;

UCLASS(Blueprintable)
class HELIOS_API UAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopAllAIOrders(APawn* orderedPawn);
    
    UFUNCTION(BlueprintCallable)
    static void StopAIOrder(FAIScriptedOrderHandle scriptedOrder, bool success);
    
    UFUNCTION(BlueprintCallable)
    static void StopActiveAIOrders(APawn* orderedPawn);
    
    UFUNCTION(BlueprintCallable)
    static void SetMetaGroupActiveState(FSoftEnumName groupName, bool bIsActive, UObject* requester);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ResetNoiseStrenghtToIdentify(APawn* Pawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void OverrideNoiseStrenghtToIdentify(APawn* Pawn, int32 noiseStrenght);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMetaGroupActive(FSoftEnumName groupName);
    
    UFUNCTION(BlueprintCallable)
    static UAIBaseReactivePattern* InjectTestPattern(TSubclassOf<UAIBaseReactivePattern> patternClass, APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetStimulusInstigator(const FStimulus& Stimulus);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetComponent(FHelComponentReference Component, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceForgetDetections(APawn* orderedPawn);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIWaitOrder_Infinite(APawn* orderedPawn, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& waitOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIWaitOrder_Duration(APawn* orderedPawn, float minDuration, float MaxDuration, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& waitOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AISmartPointOrder_Actor(APawn* orderedPawn, ASmartPointActor* SmartPoint, FLocomotionState locomotionMode, EAIInteractionOrderType Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& smartPointOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AISmartPointOrder(APawn* orderedPawn, ASmartPointActor* SmartPointActor, USmartPoint* SmartPoint, bool LookAtPoint, ESmartPointNavigationSelection locomotionSelection, UAINavigationOptionsData* navigationOptions, FLocomotionState locomotionMode, EAIInteractionOrderType Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& smartPointOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIPuzzleOrder(APawn* orderedPawn, APuzzlePieceActor* puzzlePiece, EAIInteractionOrderType Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& puzzleOrder);
    
    UFUNCTION(BlueprintCallable)
    static void AIMoveOrder_Simple(APawn* orderedPawn, const AActor* moveTargetActor, FVector moveTargetLocation, UAINavigationOptionsData* navigationOptions, FLocomotionState locomotionMode, FAIScriptedOrderHandle& moveOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIMoveOrder(APawn* orderedPawn, const AActor* moveTargetActor, FVector moveTargetLocation, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& moveOrder, UAINavigationOptionsData* navigationOptions, FLocomotionState locomotionMode, bool overrideGoalRadius, float goalRadius);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AILookOrder(APawn* orderedPawn, FVector LookAtLocation, AActor* LookAtActor, USceneComponent* LookAtComponent, float lookDuration, FAILookOptions lookOptions, bool turnTowardsLookAt, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& lookOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AILocomotionModeOrder(APawn* orderedPawn, FLocomotionState locomotionMode, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& locomotionModeOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIItemOrder(APawn* orderedPawn, UPickupComponent* Pickup, EAIItemInteraction Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& itemOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIControlOrder(APawn* orderedPawn, EAIControlOrderCommand heldCommand, float holdDuration, FVector moveInput, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& controlOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIClearDetectionOrder(APawn* orderedPawn, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& clearDetectionOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AICanimationOrder(APawn* orderedPawn, FCannedAnimationOptions Options, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& outOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIBlueprintOrder(APawn* orderedPawn, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& itemOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIBlendSpaceOrder(APawn* orderedPawn, FCustomBlendspaceOptions Options, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& outOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIAnimStateOrder(APawn* orderedPawn, FSoftEnumName animState, AActor* towardsActor, FAIAnimStateOptions Options, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder, bool useCustomAnimationOptions, FCustomAnimationOptions CustomAnimationOptions);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIAnimOrder_RootMotion(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, EMovementRestriction RootMotion, FCharacterAnimStateTransitions Transitions, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIAnimOrder_LoopFinite(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, float MaxDuration, FCharacterAnimStateTransitions Transitions, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIAnimOrder_Loop(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, FCharacterAnimStateTransitions Transitions, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void AIAnimOrder(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, FCharacterAnimStateTransitions Transitions, bool RootMotion, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder);
    
};

