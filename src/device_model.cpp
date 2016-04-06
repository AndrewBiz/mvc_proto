/*
    Fake device implementation
*/
#include "device_model.h"
#include <Logging.h>

DeviceModel::DeviceModel() {
    Log.Debug(F("DeviceModel new created"));
    _value = 0;
}

void DeviceModel::set_value(int v) {
    _value = v;
    Log.Debug(F("DeviceModel::set_value %d"), _value);
    notify_observers();
}

int DeviceModel::get_value() {
    return _value;
}
