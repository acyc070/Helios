#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "CameraPreviewComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CAMERASYSTEMRUNTIME_API UCameraPreviewComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UCameraPreviewComponent(const FObjectInitializer& ObjectInitializer);

};

