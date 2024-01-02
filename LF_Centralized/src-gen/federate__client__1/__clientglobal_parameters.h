#ifndef __CLIENTGLOBAL_PARAMETERS_H
#define __CLIENTGLOBAL_PARAMETERS_H
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
#line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
typedef generic_port_instance_struct __clientglobal_parameters_port0_t;
#line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
typedef generic_port_instance_struct __clientglobal_parameters_port_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    
    
    #line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    __clientglobal_parameters_port0_t* _lf_port0;
    #line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // width of -2 indicates that it is not a multiport.
    #line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    int _lf_port0_width;
    #line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // Default input (in case it does not get connected)
    #line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    __clientglobal_parameters_port0_t _lf_default__port0;
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // Array of output ports.
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    __clientglobal_parameters_port_t* _lf_port;
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    int _lf_port_width;
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // An array of pointers to the individual ports. Useful
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // for the lf_set macros to work out-of-the-box for
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // multiports in the body of reactions because their 
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // So we have to handle multiports specially here a construct that
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    // array of pointers.
    #line 47 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    __clientglobal_parameters_port_t** _lf_port_pointers;
    #line 45 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros_centra/src/federate__client__1.lf"
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __clientglobal_parameters_self_t;
__clientglobal_parameters_self_t* new___clientglobal_parameters();
#endif // __CLIENTGLOBAL_PARAMETERS_H
