import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancafederate__client__2 import (
    Tag, action_capsule_t, port_capsule, request_stop, schedule_copy, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancafederate__client__2 as lf
try:
    from LinguaFrancaBase.constants import BILLION, FOREVER, NEVER, instant_t, interval_t
    from LinguaFrancaBase.functions import (
        DAY, DAYS, HOUR, HOURS, MINUTE, MINUTES, MSEC, MSECS, NSEC, NSECS, SEC, SECS, USEC,
        USECS, WEEK, WEEKS
    )
    from LinguaFrancaBase.classes import Make
except ModuleNotFoundError:
    print("No module named 'LinguaFrancaBase'. "
          "Install using \"pip3 install LinguaFrancaBase\".")
    sys.exit(1)
import copy

# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.


# Python class for reactor _federate__client__2_main
class __federate__client__2_main:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    



# Python class for reactor _clientreactor
class __clientreactor:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self):
    
        
        return 0
    def reaction_function_1(self, global_parameters, updated_parameters):
    
        val = global_parameters.value
        time.sleep(0.5)
        new_parameter = val.copy()
        updated_parameters.set(new_parameter)
        return 0

# Python class for reactor _networksender_0null
class __networksender_0null:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    
    
    

# Python class for reactor _networkreceiver_6
class __networkreceiver_6:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    
    

# Python class for reactor __clientglobal_parameters
class ___clientglobal_parameters:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    





# Instantiate classes
federate__client__2_main_lf = [None] * 1
federate__client__2_client_lf = [None] * 1
_derate__client__2_ns_federate__server_1_lf = [None] * 1
_erate__client__2_nr_federate__client__2_lf = [None] * 1
_te__client__2__clientglobal_parameters2_lf = [None] * 1
# Start initializing federate__client__2 of class _federate__client__2_main
for federate__client__2_main_i in range(1):
    bank_index = federate__client__2_main_i
    federate__client__2_main_lf[0] = __federate__client__2_main(
        _bank_index = 0,
    )
    # Start initializing federate__client__2.client of class _clientreactor
    for federate__client__2_client_i in range(1):
        bank_index = federate__client__2_client_i
        federate__client__2_client_lf[0] = __clientreactor(
            _bank_index = 0,
        )
    # Start initializing federate__client__2.ns_federate__server_1 of class _networksender_0null
    for _derate__client__2_ns_federate__server_1_i in range(1):
        bank_index = _derate__client__2_ns_federate__server_1_i
        _derate__client__2_ns_federate__server_1_lf[0] = __networksender_0null(
            _bank_index = 0,
        )
    # Start initializing federate__client__2.nr_federate__client__2 of class _networkreceiver_6
    for _erate__client__2_nr_federate__client__2_i in range(1):
        bank_index = _erate__client__2_nr_federate__client__2_i
        _erate__client__2_nr_federate__client__2_lf[0] = __networkreceiver_6(
            _bank_index = 0,
        )
    # Start initializing federate__client__2._clientglobal_parameters2 of class __clientglobal_parameters
    for _te__client__2__clientglobal_parameters2_i in range(1):
        bank_index = _te__client__2__clientglobal_parameters2_i
        _te__client__2__clientglobal_parameters2_lf[0] = ___clientglobal_parameters(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
