#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "PuzzlePieceMultiStateActor.h"
#include "PuzzleMovableActor.generated.h"

class UCurveFloat;
class USceneComponent;
class USplineMovablePPComponent;
class UStaticMovablePPComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleMovableActor : public APuzzlePieceMultiStateActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mRootTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> mStateTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSplineEditMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mDefaultInitialPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDefaultInitialPointProgress;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowSpline;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStraightLineInterpolation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomCurveForProgress;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve mCustomProgressCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDrawPlayerForceDebugLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMovablePPComponent* MovementPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMovablePPComponent* NonMovingComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* mCustomProgressCurveFloat;
    
public:
    APuzzleMovableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InterpolateToSplinePositionOverTime(bool startFromCurrent, int32 fromPoint, float fromSegmentPosition, int32 toPoint, float toSegmentPosition, float Seconds, bool scaleTimeToPartialRange);
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformInSplineAtStateProgress(int32 State, float stateProgress);
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformInSplineAtProgress(float Progress);
    
};

