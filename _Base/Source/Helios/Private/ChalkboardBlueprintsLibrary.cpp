#include "ChalkboardBlueprintsLibrary.h"

UChalkboardBlueprintsLibrary::UChalkboardBlueprintsLibrary() {
}

FString UChalkboardBlueprintsLibrary::ToString(const FChalkboardSectionKey& sectionKey) {
    return TEXT("");
}

void UChalkboardBlueprintsLibrary::RemoveChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey) {
}

FTypeInfo UChalkboardBlueprintsLibrary::MakeTypeInfo(FTypeInfo Type) {
    return FTypeInfo{};
}

FChalkboardSectionKey UChalkboardBlueprintsLibrary::MakeChalkboardSectionKeyFromName(FName sectionKeyPath, FTypeInfo Type) {
    return FChalkboardSectionKey{};
}

FChalkboardSectionKey UChalkboardBlueprintsLibrary::MakeChalkboardSectionKey(FChalkboardSectionKey Value) {
    return FChalkboardSectionKey{};
}

bool UChalkboardBlueprintsLibrary::HasChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey) {
    return false;
}

void UChalkboardBlueprintsLibrary::GetChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey, FGenericStruct& Value, bool& hasValue) {
}

bool UChalkboardBlueprintsLibrary::Equals(const FChalkboardSectionKey& sectionKey1, const FChalkboardSectionKey& sectionKey2) {
    return false;
}

void UChalkboardBlueprintsLibrary::BreakChalkboardSectionKey(FChalkboardSectionKey sectionKey, FName& sectionKeyPath, FTypeInfo& Type) {
}

void UChalkboardBlueprintsLibrary::AddChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey, int32 Value) {
}


