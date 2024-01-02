#include "include/api/api.h"
#include "include/federate__server/_serverupdated_parameters.h"
#include "__serverupdated_parameters.h"
__serverupdated_parameters_self_t* new___serverupdated_parameters() {
    __serverupdated_parameters_self_t* self = (__serverupdated_parameters_self_t*)_lf_new_reactor(sizeof(__serverupdated_parameters_self_t));
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_port0 = &self->_lf_default__port0;
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_port1 = &self->_lf_default__port1;
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_default__port1._base.source_reactor = (self_base_t*)self;
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_port2 = &self->_lf_default__port2;
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_default__port2._base.source_reactor = (self_base_t*)self;
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set input by default to an always absent default input.
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_port3 = &self->_lf_default__port3;
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_default__port3._base.source_reactor = (self_base_t*)self;
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port0.last = NULL;
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(PyObject);
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port1.last = NULL;
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port1.tmplt.type.element_size = sizeof(PyObject);
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port2.last = NULL;
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port2.tmplt.type.element_size = sizeof(PyObject);
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port3.last = NULL;
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__port3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port3.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
