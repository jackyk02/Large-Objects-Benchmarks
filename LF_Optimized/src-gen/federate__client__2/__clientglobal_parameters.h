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
#line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
typedef generic_port_instance_struct __clientglobal_parameters_port0_t;
#line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
typedef generic_port_instance_struct __clientglobal_parameters_port_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    
    
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    __clientglobal_parameters_port0_t* _lf_port0;
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // width of -2 indicates that it is not a multiport.
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    int _lf_port0_width;
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // Default input (in case it does not get connected)
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    __clientglobal_parameters_port0_t _lf_default__port0;
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // Array of output ports.
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    __clientglobal_parameters_port_t* _lf_port;
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    int _lf_port_width;
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // An array of pointers to the individual ports. Useful
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // for the lf_set macros to work out-of-the-box for
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // multiports in the body of reactions because their 
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // So we have to handle multiports specially here a construct that
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    // array of pointers.
    #line 79 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    __clientglobal_parameters_port_t** _lf_port_pointers;
    #line 77 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __clientglobal_parameters_self_t;
__clientglobal_parameters_self_t* new___clientglobal_parameters();
#endif // __CLIENTGLOBAL_PARAMETERS_H
