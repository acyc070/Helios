#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOnDemandDetectionType.h"
#include "AIOnDemandDetectionDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAIOnDemandDetection, FVector, Location, AActor*, Actor, EOnDemandDetectionType, detectionType);

