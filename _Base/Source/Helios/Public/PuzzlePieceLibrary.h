#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "EPuzzlePieceUsers.h"
#include "PuzzlePieceCondition.h"
#include "PuzzlePieceEditorDropDown.h"
#include "PuzzlePieceLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class HELIOS_API UPuzzlePieceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPuzzlePieceLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopPieceAction(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartPieceAction(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, bool IsPlayer, bool isPlaypal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPieceActive(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, bool IsActive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPieceActionProgressTo(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, float newProgress);
    
    UFUNCTION(BlueprintPure)
    static FPuzzlePieceEditorDropDown MakeLiteralPuzzlePiece(FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintPure)
    static bool isPuzzlePieceNameDifferentToString(FPuzzlePieceEditorDropDown A, const FString& B, const FString& ContextString);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPieceUsedBy(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, EPuzzlePieceUsers users);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPieceUsed(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPieceNotEqual(UObject* WorldContextObject, FPuzzlePieceEditorDropDown A, FPuzzlePieceEditorDropDown B);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPieceEqual(UObject* WorldContextObject, FPuzzlePieceEditorDropDown A, FPuzzlePieceEditorDropDown B);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPieceActive(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintPure)
    static FName GetPuzzlePieceName(FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetPuzzlePieceActor(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetPieceProgressAction(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintPure)
    static float GetExposedFloatCurveValueAtTime(FRuntimeFloatCurve Curve, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EjectPickupFromSlot(UObject* WorldContextObject, AActor* pickupActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EjectCarriableFromSlot(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EjectAllCarriablesFromSlot(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckPPCondition(UObject* WorldContextObject, FPuzzlePieceCondition condition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AttachPickupToSlot(UObject* WorldContextObject, AActor* pickupActor, FPuzzlePieceEditorDropDown Slot, bool instant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AttachCarriableToSlot(UObject* WorldContextObject, FPuzzlePieceEditorDropDown carriable, FPuzzlePieceEditorDropDown Slot, bool instant);
    
};

