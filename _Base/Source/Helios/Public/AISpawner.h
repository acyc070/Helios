#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChalkboardSectionKey.h"
#include "CharacterThreatSettings.h"
#include "EMovementRestriction.h"
#include "HelComponentReference.h"
#include "MetaGroupChangeSignatureDelegate.h"
#include "SoftEnumName.h"
#include "SpawnSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "AISpawner.generated.h"

class AAIPatternController;
class AControlledPawn;
class UAnimSequence;

UCLASS(Blueprintable)
class HELIOS_API AAISpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnSignature mOnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaGroupChangeSignature mOnMetaGroupActivationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysSpawnOnBeginPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mMetaGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIgnoreIfCharacterExists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDespawnPreviousCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AControlledPawn> AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIPatternController> AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mStartingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartSPNavMeshCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mChalkboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mBehaviorHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseSpawnAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mSpawnActionLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* mSpawnActionExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitSpawnActionByProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpawnActionProximityDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitSpawnActionByDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementRestriction mSpawnActionMovementRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterThreatSettings mThreatSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AControlledPawn* mPawnReference;
    
public:
    AAISpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AControlledPawn* SpawnAI();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedAI(const AControlledPawn* SpawnedAI);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMetaGroupActivationChangedBlueprint(bool ActivationState);
    
    UFUNCTION(BlueprintPure)
    bool HasSpawnedAI() const;
    
    UFUNCTION(BlueprintPure)
    AControlledPawn* GetSpawnedAI() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AControlledPawn> GetAIClass() const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnAI();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanSpawnAI() const;
    
};

