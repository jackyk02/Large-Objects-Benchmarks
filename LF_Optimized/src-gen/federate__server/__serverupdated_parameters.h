#ifndef __SERVERUPDATED_PARAMETERS_H
#define __SERVERUPDATED_PARAMETERS_H
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
#line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct __serverupdated_parameters_port0_t;
#line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct __serverupdated_parameters_port1_t;
#line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct __serverupdated_parameters_port2_t;
#line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct __serverupdated_parameters_port3_t;
#line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct __serverupdated_parameters_port_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    
    
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port0_t* _lf_port0;
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // width of -2 indicates that it is not a multiport.
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    int _lf_port0_width;
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Default input (in case it does not get connected)
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port0_t _lf_default__port0;
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port1_t* _lf_port1;
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // width of -2 indicates that it is not a multiport.
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    int _lf_port1_width;
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Default input (in case it does not get connected)
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port1_t _lf_default__port1;
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port2_t* _lf_port2;
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // width of -2 indicates that it is not a multiport.
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    int _lf_port2_width;
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Default input (in case it does not get connected)
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port2_t _lf_default__port2;
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port3_t* _lf_port3;
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // width of -2 indicates that it is not a multiport.
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    int _lf_port3_width;
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Default input (in case it does not get connected)
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port3_t _lf_default__port3;
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // Array of output ports.
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port_t* _lf_port;
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    int _lf_port_width;
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // An array of pointers to the individual ports. Useful
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // for the lf_set macros to work out-of-the-box for
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // multiports in the body of reactions because their 
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // So we have to handle multiports specially here a construct that
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    // array of pointers.
    #line 111 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    __serverupdated_parameters_port_t** _lf_port_pointers;
    #line 103 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 105 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    trigger_t _lf__port1;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 107 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    trigger_t _lf__port2;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 109 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
    trigger_t _lf__port3;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __serverupdated_parameters_self_t;
__serverupdated_parameters_self_t* new___serverupdated_parameters();
#endif // __SERVERUPDATED_PARAMETERS_H
