#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavigationTypes.h"
#include "OnPathChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "PathFindingComponent.generated.h"

class AActor;
class ANavigationData;
class UNavigationQueryFilter;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPathFindingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mNavDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> mNavFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentProperties mNavAgentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFollowProjectionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRebuildInvalidPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRebuildInvalidPathsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRebuildInvalidPathsDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRebuildPathToActorDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathAborted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathRebuilt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float goalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfBoundsThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* mNavData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* mSceneComponentToMoveTo;
    
public:
    UPathFindingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FVector TryGetRandomReachableLocationInRadius(bool& success, FVector Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    bool ProjectToNavMesh(const FVector& Location, FVector& OutProjectedLocation, const FVector& BoundsCheck);
    
private:
    UFUNCTION()
    void OnNavigationDataUnregistered(ANavigationData* NavData);
    
    UFUNCTION()
    void OnNavigationDataRegistered(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintPure)
    bool NeedsRepath() const;
    
    UFUNCTION(BlueprintCallable)
    bool NavmeshRaycast(const FVector& RayStart, const FVector& RayEnd, FVector& OutHitLocation);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToRandomLocationInRadius(float Radius, float NewGoalRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToLocation(const FVector& Goal, float NewGoalRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToComponent(const USceneComponent* ComponentGoal, float NewGoalRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToActor(const AActor* ActorGoal, bool bObserveActor, float NewGoalRadius);
    
    UFUNCTION(BlueprintPure)
    bool IsAtGoal() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPath() const;
    
    UFUNCTION(BlueprintPure)
    bool GetNearestPointOnPath(const FVector& fromLocation, FVector& outFromLocationProjection, FVector& outNearest, int32& outNearestSegmentIndex, int32 fromPointIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGoalLocation() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetFarthestNavPolyVertex(bool& success, FVector searchDirection, float searchConeAngle, float navPolySearchRadius);
    
protected:
    UFUNCTION()
    bool GenerateAndStorePath(const FVector& From, const FVector& To);
    
public:
    UFUNCTION(BlueprintCallable)
    void CompletePath();
    
    UFUNCTION(BlueprintPure)
    void AdvancePointOnPath(const FVector& initialPoint, float byDistance, FVector& outAdvancedPoint, int32 fromPointIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void AbortPath();
    
};

