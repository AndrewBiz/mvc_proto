/*
*/
#include "device_view_dds.h"
#include <Logging.h>

DeviceViewDDS::DeviceViewDDS(DeviceModel* m) {
    Log.Debug(F("DeviceViewDDS new created"));
    _model = m;
    _model->attach_observer(this);
}

DeviceViewDDS::~DeviceViewDDS() {
    Log.Debug(F("DeviceViewDDS killed"));
    _model->detach_observer(this);
}

void DeviceViewDDS::update(Model* changed_model) {
    Log.Debug(F("DeviceViewDDS::update fired"));
    set_dds();
}

void DeviceViewDDS::set_dds() {
    Log.Info(F("DDS is set to: %d"), _model->get_value());
}
