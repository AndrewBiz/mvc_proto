/*
*/
#include "device_view_screen.h"
#include <Logging.h>

DeviceViewScreen::DeviceViewScreen(DeviceModel* m) {
    Log.Debug(F("DeviceViewScreen new created"));
    _model = m;
    _model->attach_observer(this);
}

DeviceViewScreen::~DeviceViewScreen() {
    Log.Debug(F("DeviceViewScreen killed"));
    _model->detach_observer(this);
}

void DeviceViewScreen::update(Model* changed_model) {
    Log.Debug(F("DeviceViewScreen::update fired"));
    draw_screen();
}

void DeviceViewScreen::draw_screen() {
    Log.Info(F("SCREEN: %d"), _model->get_value());
}
