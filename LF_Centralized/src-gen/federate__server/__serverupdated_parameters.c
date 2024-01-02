#include "include/api/api.h"
#include "include/federate__server/_serverupdated_parameters.h"
#include "__serverupdated_parameters.h"
__serverupdated_parameters_self_t* new___serverupdated_parameters() {
    __serverupdated_parameters_self_t* self = (__serverupdated_parameters_self_t*)_lf_new_reactor(sizeof(__serverupdated_parameters_self_t));
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_port0 = &self->_lf_default__port0;
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_port1 = &self->_lf_default__port1;
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_default__port1._base.source_reactor = (self_base_t*)self;
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_port2 = &self->_lf_default__port2;
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_default__port2._base.source_reactor = (self_base_t*)self;
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_port3 = &self->_lf_default__port3;
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_default__port3._base.source_reactor = (self_base_t*)self;
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port0.last = NULL;
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 70 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(PyObject);
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port1.last = NULL;
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 72 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port1.tmplt.type.element_size = sizeof(PyObject);
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port2.last = NULL;
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 74 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port2.tmplt.type.element_size = sizeof(PyObject);
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port3.last = NULL;
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__port3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 76 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port3.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
