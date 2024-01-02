#ifndef _FEDERATE__CLIENT__0_MAIN_H
#define _FEDERATE__CLIENT__0_MAIN_H
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
#include "__clientglobal_parameters.h"
#include "_networksender_0null.h"
#include "_networkreceiver_4.h"
#include "_clientreactor.h"
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
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    
    
} _federate__client__0_main_main_self_t;
_federate__client__0_main_main_self_t* new__federate__client__0_main();
#endif // _FEDERATE__CLIENT__0_MAIN_H
