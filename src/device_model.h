/*
*/
#ifndef DEVICE_MODEL_H
#define DEVICE_MODEL_H

#include "model.h"

class DeviceModel : public Model {
public:
    DeviceModel();
    void set_value(int v);
    int get_value();

private:
    int _value;
};

#endif
