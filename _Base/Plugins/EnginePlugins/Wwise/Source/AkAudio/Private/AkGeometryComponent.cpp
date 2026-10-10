#include "AkGeometryComponent.h"

UAkGeometryComponent::UAkGeometryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshType = AkMeshType::StaticMesh;
    this->LOD = 0;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
}

void UAkGeometryComponent::UpdateGeometry() {
}

void UAkGeometryComponent::RemoveGeometry() {
}

void UAkGeometryComponent::ConvertMesh() {
}


