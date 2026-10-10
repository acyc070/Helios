#include "ChalkboardWrapper.h"

UChalkboardWrapper::UChalkboardWrapper() {
}

void UChalkboardWrapper::UnbindOnValueRemoved(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback) {
}

void UChalkboardWrapper::UnbindOnValueChanged(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback) {
}

void UChalkboardWrapper::UnbindOnValueAdded(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback) {
}

bool UChalkboardWrapper::HasKey_WithSectionKeyParam(FChalkboardSectionKey sectionKey) const {
    return false;
}

UObject* UChalkboardWrapper::GetObject_WithSectionKeyParam(FChalkboardSectionKey sectionKey) const {
    return NULL;
}

UObject* UChalkboardWrapper::GetObject(FName sectionPath, FName Key) const {
    return NULL;
}

void UChalkboardWrapper::BindOnValueRemoved(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback) {
}

void UChalkboardWrapper::BindOnValueChanged(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback) {
}

void UChalkboardWrapper::BindOnValueAdded(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback) {
}

void UChalkboardWrapper::AddObject(FChalkboardSectionKey sectionKey, UObject* Object) {
}


