#ifndef _networkreceiver_1_H
#define _networkreceiver_1_H
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
typedef struct networkreceiver_1_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} networkreceiver_1_self_t;
#line 148 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct _networkreceiver_1_msg_t;
#line 150 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_action_instance_struct _networkreceiver_1_networkMessage_t;
#endif
