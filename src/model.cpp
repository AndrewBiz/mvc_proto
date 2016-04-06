/*
*/
#include "model.h"

Model::Model() {
    _number_observers = 0;
    for (uint8_t i = 0; i < MAX_OBSERVERS; i++) {
        _observer[i] = nullptr;
    };
}

void Model::attach_observer(View *v) {
    if (_number_observers < MAX_OBSERVERS) {
        _observer[_number_observers++] = v;
    }
}

void Model::detach_observer(View *v) {
    for (uint8_t i = 0; i < MAX_OBSERVERS; i++) {
        if (_observer[i] == v) _observer[i] = nullptr;
    };
}

void Model::notify_observers() {
    for (uint8_t i = 0; i < MAX_OBSERVERS; i++) {
        if (_observer[i] != nullptr) _observer[i]->update(this);
    };
}
