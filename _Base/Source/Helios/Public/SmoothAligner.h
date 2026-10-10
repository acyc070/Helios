#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESmoothAlignmentSettings.h"
#include "SmoothTeleportCompletedDelegate.h"
#include "SmoothAligner.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API USmoothAligner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmoothTeleportCompleted mOnMoveCompleted;
    
    USmoothAligner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AlignToTransform(const FTransform& Transform, float Duration, ESmoothAlignmentSettings Settings, bool OverrideMovement, bool AllowZMovement);
    
};

