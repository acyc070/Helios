// RoomVolumePostProcessComponent.cpp
#include "RoomVolumePostProcessComponent.h"
#include "Engine/World.h"

URoomVolumePostProcessComponent::URoomVolumePostProcessComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void URoomVolumePostProcessComponent::OnRegister()
{
    // Skip UPostProcessComponent::OnRegister (unexported) and call USceneComponent directly
    USceneComponent::OnRegister();

    // Replicate UPostProcessComponent::OnRegister logic
    if (bEnabled)
    {
        if (UWorld* World = GetWorld())
        {
            World->PostProcessVolumes.Add(this);
        }
    }
}

void URoomVolumePostProcessComponent::OnUnregister()
{
    // Replicate UPostProcessComponent::OnUnregister logic
    if (UWorld* World = GetWorld())
    {
        World->PostProcessVolumes.Remove(this);
    }

    // Skip UPostProcessComponent::OnUnregister and call USceneComponent directly
    USceneComponent::OnUnregister();
}

void URoomVolumePostProcessComponent::Serialize(FArchive& Ar)
{
    // UPostProcessComponent::Serialize only calls Super, so call USceneComponent directly
    USceneComponent::Serialize(Ar);
}