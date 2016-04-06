/*
*/
#ifndef DEVICE_VIEW_DDS_H
#define DEVICE_VIEW_DDS_H

#include "view.h"
#include "device_model.h"

class DeviceViewDDS : public View {
public:
    DeviceViewDDS(DeviceModel*);
    virtual ~DeviceViewDDS();
    virtual void update(Model*);
    void set_dds();
private:
    DeviceModel* _model;
};

#endif
