/*
*/
#ifndef MODEL_H
#define MODEL_H

#include "view.h"
#include <inttypes.h>

#define MAX_OBSERVERS 2

class Model {
public:
    //virtual ~Model();
    virtual void attach_observer(View*);
    virtual void detach_observer(View*);
    virtual void notify_observers();
protected:
    Model();
private:
    View *_observer[MAX_OBSERVERS];
    uint8_t _number_observers;
};

#endif
