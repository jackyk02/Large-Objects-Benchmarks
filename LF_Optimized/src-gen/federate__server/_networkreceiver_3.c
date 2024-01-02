#include "include/api/api.h"
#include "include/federate__server/NetworkReceiver_3.h"
#include "_networkreceiver_3.h"
#include "include/api/set.h"
void _networkreceiver_3reaction_function_0(void* instance_args) {
    _networkreceiver_3_self_t* self = (_networkreceiver_3_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 216 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.is_an_input_reaction = true;
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _networkreceiver_3reaction_function_1(void* instance_args) {
    _networkreceiver_3_self_t* self = (_networkreceiver_3_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    // Expose the action struct as a local variable whose name matches the action name.
    _networkreceiver_3_networkMessage_t* networkMessage = &self->_lf_networkMessage;
    // Set the fields of the action struct to match the current trigger.
    networkMessage->is_present = (bool)self->_lf__networkMessage.status;
    networkMessage->has_value = ((self->_lf__networkMessage.tmplt.token) != NULL && (self->_lf__networkMessage.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage, (self->_lf__networkMessage.tmplt.token));
    _networkreceiver_3_msg_t* msg = &self->_lf_msg;
    #line 221 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    msg->physical_time_of_arrival = self->_lf__networkMessage.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage->token->value, networkMessage->token->length);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    lf_token_t* token = lf_new_token((void*)msg, deserialized_message, 1);
    lf_set_destructor(msg, python_count_decrement);
    lf_set_token(msg, token);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_networkreceiver_3_self_t* new__networkreceiver_3() {
    _networkreceiver_3_self_t* self = (_networkreceiver_3_self_t*)_lf_new_reactor(sizeof(_networkreceiver_3_self_t));
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_networkMessage._base.trigger = &self->_lf__networkMessage;
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf_networkMessage.parent = (self_base_t*)self;
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.number = 0;
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.function = _networkreceiver_3reaction_function_0;
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.self = self;
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.name = "?";
    #line 214 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.number = 1;
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.function = _networkreceiver_3reaction_function_1;
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.self = self;
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.name = "?";
    #line 219 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__networkMessage.last = NULL;
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__networkMessage.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__networkMessage_reactions[0] = &self->_lf__reaction_1;
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__networkMessage.reactions = &self->_lf__networkMessage_reactions[0];
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__networkMessage.number_of_reactions = 1;
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #ifdef FEDERATED
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    self->_lf__networkMessage.physical_time_of_arrival = NEVER;
    #line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage.is_physical = false;
    
    self->_lf__networkMessage.tmplt.type.element_size = 0;
    self->_lf_networkMessage.type.element_size = 0;
    return self;
}
