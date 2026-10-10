#pragma once
#include "CoreMinimal.h"
#include "PreviewMeshChangedDelegate.generated.h"

class UStaticMesh;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreviewMeshChanged, UStaticMesh*, PreviewMesh);

