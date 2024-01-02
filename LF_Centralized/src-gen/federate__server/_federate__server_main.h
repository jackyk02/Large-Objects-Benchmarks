#ifndef _FEDERATE__SERVER_MAIN_H
#define _FEDERATE__SERVER_MAIN_H
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
#include "_networkreceiver_0.h"
#include "__serverupdated_parameters.h"
#include "_networksender_1null.h"
#include "_networksender_0null.h"
#include "_networkreceiver_2.h"
#include "_serverreactor.h"
#include "_networksender_2null.h"
#include "_networkreceiver_1.h"
#include "_networksender_3null.h"
#include "_networkreceiver_3.h"
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
    
    
} _federate__server_main_main_self_t;
_federate__server_main_main_self_t* new__federate__server_main();
#endif // _FEDERATE__SERVER_MAIN_H
