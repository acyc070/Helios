#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EditorPuzzlePieceInformation.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FEditorPuzzlePieceInformation : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mPuzzlePieceUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mPuzzlePieceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mLevelName;
    
    FEditorPuzzlePieceInformation();
};

