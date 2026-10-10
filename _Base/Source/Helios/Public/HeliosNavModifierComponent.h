#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavRelevantComponent.h"
#include "Templates/SubclassOf.h"
#include "HeliosNavModifierComponent.generated.h"

class ANavigationData;
class UHeliosNavModifierShape;
class UNavArea;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UHeliosNavModifierComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FTransform mRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsDynamic;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mUpdateFrequency;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mProjectToNavMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNavMeshToProjectTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> mAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHeliosNavModifierShape*> mNavModifierShapes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* mNavigationData;
    
public:
    UHeliosNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnNavigationDataUnregistered(ANavigationData* NavData);
    
    UFUNCTION()
    void OnNavigationDataRegistered(ANavigationData* NavData);
    
};

