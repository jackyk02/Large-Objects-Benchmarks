#ifndef _NETWORKSENDER_0NULL_H
#define _NETWORKSENDER_0NULL_H
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
#line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
typedef generic_port_instance_struct _networksender_0null_msg_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    
    
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // Multiport input array will be malloc'd later.
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    _networksender_0null_msg_t** _lf_msg;
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    int _lf_msg_width;
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // Default input (in case it does not get connected)
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    _networksender_0null_msg_t _lf_default__msg;
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // Struct to support efficiently reading sparse inputs.
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    lf_sparse_io_record_t* _lf_msg__sparse;
    #line 87 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    reaction_t _lf__reaction_0;
    #line 97 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    reaction_t _lf__reaction_1;
    #line 126 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    trigger_t _lf__msg;
    #line 85 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    reaction_t* _lf__msg_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__msg_network_port_status;
    
    #endif // FEDERATED
} _networksender_0null_self_t;
_networksender_0null_self_t* new__networksender_0null();
#endif // _NETWORKSENDER_0NULL_H
