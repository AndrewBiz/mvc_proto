/*
    MVC patter prototyping  on Arduino Uno
   Andrew Bizyaev (ANB) github.com/andrewbiz
*/
#include "mvc_proto.h"
#include "device_model.h"
#include "device_view_screen.h"
#include "device_view_dds.h"

DeviceModel *device;
DeviceViewScreen *screen;
DeviceViewDDS *dds;

void setup()
{
    Log.Init(LOGLEVEL, 38400L, LOG_PRINT_TS, LOG_AUTO_LN);
    device = new DeviceModel;
    screen = new DeviceViewScreen(device);
    dds = new DeviceViewDDS(device);

} // setup

void loop()
{
    delay(3000);
    device->set_value((int)millis());

} // function loop
