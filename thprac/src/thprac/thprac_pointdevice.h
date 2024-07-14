#pragma once

namespace THPrac {
extern bool pointDeviceMode;

bool IsPointDeviceModeOn();
void SetPointDeviceMode(bool value);
void TogglePointDeviceMode();
}