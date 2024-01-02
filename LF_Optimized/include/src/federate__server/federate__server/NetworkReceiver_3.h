#ifndef _networkreceiver_3_H
#define _networkreceiver_3_H
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
typedef struct networkreceiver_3_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} networkreceiver_3_self_t;
#line 210 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_port_instance_struct _networkreceiver_3_msg_t;
#line 212 "/mnt/c/Users/jacky/Desktop/simple_multi/fed-gen/workers4_ros/src/federate__server.lf"
typedef generic_action_instance_struct _networkreceiver_3_networkMessage_t;
#endif
