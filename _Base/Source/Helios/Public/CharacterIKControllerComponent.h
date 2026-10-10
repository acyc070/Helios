#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterIKControllerBaseComponent.h"
#include "EIKTaskIdentifier.h"
#include "KosmosIKSolverTask.h"
#include "KosmosIKTaskProperties.h"
#include "EIKTaskAggregationMode.h"
#include "HelComponentReference.h"
#include "IkTaskConfig.h"
#include "CharacterIKControllerComponent.generated.h"

class UAnimInstance;
class UBIKRig;
class UCurveFloat;
class UFlowControlComponent;
class UKosmosIKTasksSetupAsset;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UCharacterIKControllerComponent : public UCharacterIKControllerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBIKRig* mIkRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKosmosIKTasksSetupAsset* TasksSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreIKSavedPoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mCachedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* mAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* mAnimBpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIKTaskIdentifier, FIkTaskConfig> mTaskMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugSavedPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
public:
    UCharacterIKControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetTask(EIKTaskIdentifier TaskID, float BlendTime, UCurveFloat* blendCurve);
    
    UFUNCTION(BlueprintPure)
    FKosmosIKSolverTask SetupTask(EIKTaskIdentifier TaskID);
    
    UFUNCTION(BlueprintCallable)
    void SetTask(EIKTaskIdentifier TaskID, const FTransform& worldSpaceTarget, float BlendWeight, float BlendTime, bool EnableTranslation, bool enableRotation, UCurveFloat* blendCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicTaskWithName(EIKTaskIdentifier TaskID, USceneComponent* Component, const FTransform& localSpaceTarget, FName TargetBone, float BlendWeight, float BlendTime, bool EnableTranslation, bool enableRotation, UCurveFloat* blendCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicTaskWithCurve(EIKTaskIdentifier TaskID, USceneComponent* Component, const FTransform& localSpaceTarget, bool EnableTranslation, bool enableRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicTask(EIKTaskIdentifier TaskID, USceneComponent* Component, const FTransform& localSpaceTarget, float BlendWeight, float BlendTime, bool EnableTranslation, bool enableRotation, UCurveFloat* blendCurve);
    
    UFUNCTION(BlueprintCallable)
    void ModifyTaskTransform(EIKTaskIdentifier TaskID, const FTransform& localSpaceTarget, bool bIsLocalTransform);
    
    UFUNCTION(BlueprintPure)
    bool IsTaskSet(EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTaskActive(EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyTaskActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasTaskConfig(EIKTaskIdentifier TaskID);
    
    UFUNCTION(BlueprintPure)
    FTransform GetTaskTargetTransform(EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    FKosmosIKTaskProperties GetTaskProperties(EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTaskCurrentTransform(EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    FKosmosIKSolverTask GetPoleVectorTaskSetup() const;
    
    UFUNCTION(BlueprintPure)
    FKosmosIKSolverTask GetDisabledTaskSetup() const;
    
    UFUNCTION(BlueprintPure)
    FIkTaskConfig GetCurrentTaskSetup(EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetBoneWorldTransformFromPose(FName comparisonPoseName, EIKTaskIdentifier TaskID) const;
    
    UFUNCTION(BlueprintPure)
    bool ComputeAggregatedIKErrorAgainstPose(FVector& outTranslationError, FRotator& outRotationError, FName comparisonPoseName, FTransform Offset, EIKTaskAggregationMode errorMode) const;
    
    UFUNCTION(BlueprintPure)
    bool ComputeAggregatedIKError(FVector& outTranslationError, FRotator& outRotationError, FTransform Offset, EIKTaskAggregationMode errorMode) const;
    
};

