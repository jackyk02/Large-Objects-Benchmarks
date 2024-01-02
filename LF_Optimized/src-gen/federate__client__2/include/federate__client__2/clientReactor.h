#ifndef _clientreactor_H
#define _clientreactor_H
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
typedef struct clientreactor_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} clientreactor_self_t;
#line 58 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
typedef generic_port_instance_struct _clientreactor_global_parameters_t;
#line 59 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__client__2.lf"
typedef generic_port_instance_struct _clientreactor_updated_parameters_t;
#endif
