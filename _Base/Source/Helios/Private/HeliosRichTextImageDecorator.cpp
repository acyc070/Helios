#include "HeliosRichTextImageDecorator.h"

UHeliosRichTextImageDecorator::UHeliosRichTextImageDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->ImageSetKeyboardAndMouse = NULL;
    this->ImageSetPS4 = NULL;
    this->ImageSetPS4EnterCircle = NULL;
    this->ImageSetVita = NULL;
    this->ImageSetVitaEnterCircle = NULL;
    this->ImageSetXBox = NULL;
    this->ImageSetSwitch = NULL;
    this->ImageSetPS5 = NULL;
    this->ImageSetPS5EnterCircle = NULL;
    this->ImageSetXSX = NULL;
    this->ImageSetStadia = NULL;
    this->CurrentImageSet = NULL;
}


