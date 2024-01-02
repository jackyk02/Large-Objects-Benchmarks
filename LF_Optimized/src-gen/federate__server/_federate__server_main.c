#include "include/api/api.h"
#include "include/federate__server/federate__server.h"
#include "_federate__server_main.h"
_federate__server_main_main_self_t* new__federate__server_main() {
    _federate__server_main_main_self_t* self = (_federate__server_main_main_self_t*)_lf_new_reactor(sizeof(_federate__server_main_main_self_t));

    return self;
}
