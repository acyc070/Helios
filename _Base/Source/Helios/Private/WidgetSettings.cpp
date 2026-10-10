#include "WidgetSettings.h"

UWidgetSettings::UWidgetSettings() {
    this->CultureFonts.AddDefaulted(14);
    this->CultureLegalFonts.AddDefaulted(14);
    this->NumberOfSaveSlotsPC = 3;
    this->NumberOfSaveSlotsXBox = 1;
    this->NumberOfSaveSlotsXSX = 1;
    this->NumberOfSaveSlotsPS4 = 1;
    this->NumberOfSaveSlotsPS5 = 1;
    this->NumberOfSaveSlotsSwitch = 1;
    this->NumberOfSaveSlotsStadia = 1;
    this->LevelUIData.AddDefaulted(5);
}


