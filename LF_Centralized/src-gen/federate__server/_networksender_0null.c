#include "include/api/api.h"
#include "include/federate__server/NetworkSender_00.h"
#include "_networksender_0null.h"
#if defined SENDERINDEXPARAMETER
#undef SENDERINDEXPARAMETER
#endif // SENDERINDEXPARAMETER
#define SENDERINDEXPARAMETER 0
#include "include/api/set.h"
void _networksender_0nullreaction_function_0(void* instance_args) {
    _networksender_0null_self_t* self = (_networksender_0null_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    extern reaction_t* port_absent_reaction[];
    void enqueue_port_absent_reactions(environment_t*);
    LF_PRINT_DEBUG("Adding network port absent reaction to table.");
    port_absent_reaction[SENDERINDEXPARAMETER] = &self->_lf__reaction_2;
    LF_PRINT_DEBUG("Added network output control reaction to table. Enqueueing it...");
    enqueue_port_absent_reactions(self->base.environment);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _networksender_0nullreaction_function_1(void* instance_args) {
    _networksender_0null_self_t* self = (_networksender_0null_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _networksender_0null_msg_t** msg = self->_lf_msg;
    int msg_width = self->_lf_msg_width; SUPPRESS_UNUSED_WARNING(msg_width);
    #line 222 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // Sending from msg[0] in federate federate__server to client.global_parameters in federate federate__client__0
    if (!msg[0]->is_present) {
    PyGILState_Release(gstate);
    return;
    }
    if (global_pickler == NULL) lf_print_error_and_exit("The pickle module is not loaded.");
    PyObject* serialized_pyobject = PyObject_CallMethod(global_pickler, "dumps", "O", msg[0]->value);
    if (serialized_pyobject == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_pyobject.");
    }
    Py_buffer serialized_message;
    int returnValue = PyBytes_AsStringAndSize(serialized_pyobject, &serialized_message.buf, &serialized_message.len);
    if (returnValue == -1) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_message.");
    }
    size_t _lf_message_length = serialized_message.len;
    send_timed_message(self->base.environment, 0, MSG_TYPE_TAGGED_MESSAGE, 0, 0, "federate 0 via the RTI", _lf_message_length, serialized_message.buf);
    Py_XDECREF(serialized_pyobject);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _networksender_0nullreaction_function_2(void* instance_args) {
    _networksender_0null_self_t* self = (_networksender_0null_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _networksender_0null_msg_t** msg = self->_lf_msg;
    int msg_width = self->_lf_msg_width; SUPPRESS_UNUSED_WARNING(msg_width);
    #line 251 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // If the output port has not been lf_set for the current logical time,
    // send an ABSENT message to the receiving federate
    LF_PRINT_LOG("Executing port absent reaction for port %d to federate %d at time %lld.",
              0, 0, (long long) lf_time_logical_elapsed());
    if (msg[0] == NULL || !msg[0]->is_present) {
    LF_PRINT_LOG("The output port is NULL or it is not present.");
        send_port_absent_to_federate(self->base.environment, 0, 0, 0);
    }
}
#include "include/api/set_undef.h"
_networksender_0null_self_t* new__networksender_0null() {
    _networksender_0null_self_t* self = (_networksender_0null_self_t*)_lf_new_reactor(sizeof(_networksender_0null_self_t));
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    // Set the default source reactor pointer
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf_default__msg._base.source_reactor = (self_base_t*)self;
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.number = 0;
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.function = _networksender_0nullreaction_function_0;
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.self = self;
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.name = "?";
    #line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.number = 1;
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.function = _networksender_0nullreaction_function_1;
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.self = self;
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.name = "?";
    #line 220 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.number = 2;
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.function = _networksender_0nullreaction_function_2;
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.self = self;
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.name = "?";
    #line 249 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__reaction_2.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__msg.last = NULL;
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__msg.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__msg_reactions[0] = &self->_lf__reaction_1;
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__msg.reactions = &self->_lf__msg_reactions[0];
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__msg.number_of_reactions = 1;
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #ifdef FEDERATED
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    self->_lf__msg.physical_time_of_arrival = NEVER;
    #line 208 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__server.lf"
    #endif // FEDERATED
    self->_lf__msg.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
