#pragma once
#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "RoomVolumePostProcessComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API URoomVolumePostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    URoomVolumePostProcessComponent(const FObjectInitializer& ObjectInitializer);

    // Override the unexported virtuals to avoid LNK2001 errors
    virtual void OnRegister() override;
    virtual void OnUnregister() override;
    virtual void Serialize(FArchive& Ar) override;
};