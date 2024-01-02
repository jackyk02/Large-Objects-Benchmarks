#include "include/api/api.h"
#include "include/federate__client__1/_clientglobal_parameters.h"
#include "__clientglobal_parameters.h"
__clientglobal_parameters_self_t* new___clientglobal_parameters() {
    __clientglobal_parameters_self_t* self = (__clientglobal_parameters_self_t*)_lf_new_reactor(sizeof(__clientglobal_parameters_self_t));
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    // Set input by default to an always absent default input.
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    self->_lf_port0 = &self->_lf_default__port0;
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    // Set the default source reactor pointer
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    self->_lf__port0.last = NULL;
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__1.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
