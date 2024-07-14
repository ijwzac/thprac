#include "thprac_pointdevice.h"

namespace THPrac {
bool pointDeviceMode = false;

bool IsPointDeviceModeOn()
{
    return pointDeviceMode;
}

void SetPointDeviceMode(bool value) {
    pointDeviceMode = value;
}


void TogglePointDeviceMode() {
    pointDeviceMode = !pointDeviceMode;
}
}