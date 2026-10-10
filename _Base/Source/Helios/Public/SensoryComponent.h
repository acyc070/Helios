#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SensoryComponent.generated.h"

class UAISensor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API USensoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISensor*> mSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAISensor*> mObjectSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAISensor*> mUpdatedSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mSensedTypes;
    
    USensoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UAISensor* GetSensorByClass(TSubclassOf<UAISensor> SensorClass) const;
    
    UFUNCTION(BlueprintCallable)
    UAISensor* GetSensor(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void EnableSensor(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void DisableSensor(const FName& Name);
    
};

