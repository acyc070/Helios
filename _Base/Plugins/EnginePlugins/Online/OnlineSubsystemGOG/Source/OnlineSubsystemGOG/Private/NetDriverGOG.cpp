#include "NetDriverGOG.h"

UNetDriverGOG::UNetDriverGOG() {
    this->NetConnectionClassName = TEXT("/Script/OnlineSubsystemGOG.NetConnectionGOG");
    this->ChannelDefinitions.AddDefaulted(3);
}


