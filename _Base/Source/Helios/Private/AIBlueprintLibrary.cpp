#include "AIBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UAIBlueprintLibrary::UAIBlueprintLibrary() {
}

void UAIBlueprintLibrary::StopAllAIOrders(APawn* orderedPawn) {
}

void UAIBlueprintLibrary::StopAIOrder(FAIScriptedOrderHandle scriptedOrder, bool success) {
}

void UAIBlueprintLibrary::StopActiveAIOrders(APawn* orderedPawn) {
}

void UAIBlueprintLibrary::SetMetaGroupActiveState(FSoftEnumName groupName, bool bIsActive, UObject* requester) {
}

void UAIBlueprintLibrary::ResetNoiseStrenghtToIdentify(APawn* Pawn) {
}

void UAIBlueprintLibrary::OverrideNoiseStrenghtToIdentify(APawn* Pawn, int32 noiseStrenght) {
}

bool UAIBlueprintLibrary::IsMetaGroupActive(FSoftEnumName groupName) {
    return false;
}

UAIBaseReactivePattern* UAIBlueprintLibrary::InjectTestPattern(TSubclassOf<UAIBaseReactivePattern> patternClass, APawn* Pawn) {
    return NULL;
}

AActor* UAIBlueprintLibrary::GetStimulusInstigator(const FStimulus& Stimulus) {
    return NULL;
}

UActorComponent* UAIBlueprintLibrary::GetComponent(FHelComponentReference Component, AActor* Actor) {
    return NULL;
}

void UAIBlueprintLibrary::ForceForgetDetections(APawn* orderedPawn) {
}

void UAIBlueprintLibrary::AIWaitOrder_Infinite(APawn* orderedPawn, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& waitOrder) {
}

void UAIBlueprintLibrary::AIWaitOrder_Duration(APawn* orderedPawn, float minDuration, float MaxDuration, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& waitOrder) {
}

void UAIBlueprintLibrary::AISmartPointOrder_Actor(APawn* orderedPawn, ASmartPointActor* SmartPoint, FLocomotionState locomotionMode, EAIInteractionOrderType Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& smartPointOrder) {
}

void UAIBlueprintLibrary::AISmartPointOrder(APawn* orderedPawn, ASmartPointActor* SmartPointActor, USmartPoint* SmartPoint, bool LookAtPoint, ESmartPointNavigationSelection locomotionSelection, UAINavigationOptionsData* navigationOptions, FLocomotionState locomotionMode, EAIInteractionOrderType Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& smartPointOrder) {
}

void UAIBlueprintLibrary::AIPuzzleOrder(APawn* orderedPawn, APuzzlePieceActor* puzzlePiece, EAIInteractionOrderType Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& puzzleOrder) {
}

void UAIBlueprintLibrary::AIMoveOrder_Simple(APawn* orderedPawn, const AActor* moveTargetActor, FVector moveTargetLocation, UAINavigationOptionsData* navigationOptions, FLocomotionState locomotionMode, FAIScriptedOrderHandle& moveOrder) {
}

void UAIBlueprintLibrary::AIMoveOrder(APawn* orderedPawn, const AActor* moveTargetActor, FVector moveTargetLocation, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& moveOrder, UAINavigationOptionsData* navigationOptions, FLocomotionState locomotionMode, bool overrideGoalRadius, float goalRadius) {
}

void UAIBlueprintLibrary::AILookOrder(APawn* orderedPawn, FVector LookAtLocation, AActor* LookAtActor, USceneComponent* LookAtComponent, float lookDuration, FAILookOptions lookOptions, bool turnTowardsLookAt, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& lookOrder) {
}

void UAIBlueprintLibrary::AILocomotionModeOrder(APawn* orderedPawn, FLocomotionState locomotionMode, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& locomotionModeOrder) {
}

void UAIBlueprintLibrary::AIItemOrder(APawn* orderedPawn, UPickupComponent* Pickup, EAIItemInteraction Interaction, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& itemOrder) {
}

void UAIBlueprintLibrary::AIControlOrder(APawn* orderedPawn, EAIControlOrderCommand heldCommand, float holdDuration, FVector moveInput, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& controlOrder) {
}

void UAIBlueprintLibrary::AIClearDetectionOrder(APawn* orderedPawn, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& clearDetectionOrder) {
}

void UAIBlueprintLibrary::AICanimationOrder(APawn* orderedPawn, FCannedAnimationOptions Options, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& outOrder) {
}

void UAIBlueprintLibrary::AIBlueprintOrder(APawn* orderedPawn, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& itemOrder) {
}

void UAIBlueprintLibrary::AIBlendSpaceOrder(APawn* orderedPawn, FCustomBlendspaceOptions Options, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& outOrder) {
}

void UAIBlueprintLibrary::AIAnimStateOrder(APawn* orderedPawn, FSoftEnumName animState, AActor* towardsActor, FAIAnimStateOptions Options, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder, bool useCustomAnimationOptions, FCustomAnimationOptions CustomAnimationOptions) {
}

void UAIBlueprintLibrary::AIAnimOrder_RootMotion(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, EMovementRestriction RootMotion, FCharacterAnimStateTransitions Transitions, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder) {
}

void UAIBlueprintLibrary::AIAnimOrder_LoopFinite(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, float MaxDuration, FCharacterAnimStateTransitions Transitions, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder) {
}

void UAIBlueprintLibrary::AIAnimOrder_Loop(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, FCharacterAnimStateTransitions Transitions, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder) {
}

void UAIBlueprintLibrary::AIAnimOrder(APawn* orderedPawn, UAnimSequenceBase* AnimSequence, FCharacterAnimStateTransitions Transitions, bool RootMotion, FLatentActionInfo LatentInfo, ELatentAIOrderResult& ActionCallback, FAIScriptedOrderHandle& animOrder) {
}


