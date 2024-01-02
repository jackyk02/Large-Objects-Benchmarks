#ifndef _serverreactor_H
#define _serverreactor_H
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct serverreactor_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    PyObject* round_num;
    PyObject* start_time;
    PyObject* prev_time;
    int end[0]; // placeholder; MSVC does not compile empty structs
} serverreactor_self_t;
#line 59 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct _serverreactor_updated_parameters_t;
#line 58 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct _serverreactor_global_parameters_t;
#endif
