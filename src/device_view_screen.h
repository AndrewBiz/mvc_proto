/*
*/
#ifndef DEVICE_VIEW_SCREEN_H
#define DEVICE_VIEW_SCREEN_H

#include "view.h"
#include "device_model.h"

class DeviceViewScreen : public View {
public:
    DeviceViewScreen(DeviceModel*);
    virtual ~DeviceViewScreen();
    virtual void update(Model*);
    void draw_screen();
private:
    DeviceModel* _model;
};

#endif
