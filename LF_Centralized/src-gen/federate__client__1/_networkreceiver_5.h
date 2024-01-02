#ifndef _NETWORKRECEIVER_5_H
#define _NETWORKRECEIVER_5_H
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "include/core/federated/federate.h"
#include "include/core/federated/net_common.h"
#include "pythontarget.h"
#include "include/core/reactor.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "include/core/federated/federate.h"
#include "include/core/federated/net_common.h"
#include "pythontarget.h"
#line 108 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
typedef generic_port_instance_struct _networkreceiver_5_msg_t;
#line 110 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
typedef generic_action_instance_struct _networkreceiver_5_networkMessage_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    
    
    #line 110 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    _networkreceiver_5_networkMessage_t _lf_networkMessage;
    #line 108 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    _networkreceiver_5_msg_t _lf_msg;
    #line 108 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    int _lf_msg_width;
    #line 112 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    reaction_t _lf__reaction_0;
    #line 117 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 110 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    trigger_t _lf__networkMessage;
    #line 110 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    reaction_t* _lf__networkMessage_reactions[1];
} _networkreceiver_5_self_t;
_networkreceiver_5_self_t* new__networkreceiver_5();
#endif // _NETWORKRECEIVER_5_H
