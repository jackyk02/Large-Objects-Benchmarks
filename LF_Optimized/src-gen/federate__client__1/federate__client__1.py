import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancafederate__client__1 import (
    Tag, action_capsule_t, port_capsule, request_stop, schedule_copy, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancafederate__client__1 as lf
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
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
import time
import numpy as np
import pyarrow.plasma as plasma
session = plasma.connect("/tmp/plasma")
import pickle

def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(data, protocol=5, buffer_callback=buffer.append)
    data_object_id = session.put(pickled_data)

    # Store memoryview in Plasma
    mem_view = buffer[0].raw()
    buffer_id = plasma.ObjectID.from_random()
    data_size = len(mem_view)

    # Create an object in Plasma and copy the memoryview data into it
    plasma_object = session.create(buffer_id, data_size)
    plasma_view = memoryview(plasma_object).cast('B')
    plasma_view[:] = mem_view[:]

    session.seal(buffer_id)

    # Return
    return [data_object_id, buffer_id]

def deserialization(session, data_object_id, buffer_id):
    #memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data
import gc
import atexit
gc.disable()
atexit.register(os._exit, 0)
# End of preamble.


# Python class for reactor _federate__client__1_main
class __federate__client__1_main:

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
    
        data_pair = global_parameters.value
        val = deserialization(session, data_pair[0], data_pair[1])
        time.sleep(0.5)
        new_parameter = val.copy()
        id  = serialization(session, new_parameter)
        updated_parameters.set(id)
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
    
    

    
    
    

# Python class for reactor _networkreceiver_5
class __networkreceiver_5:

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
federate__client__1_main_lf = [None] * 1
federate__client__1_client_lf = [None] * 1
_derate__client__1_ns_federate__server_0_lf = [None] * 1
_erate__client__1_nr_federate__client__1_lf = [None] * 1
_te__client__1__clientglobal_parameters1_lf = [None] * 1
# Start initializing federate__client__1 of class _federate__client__1_main
for federate__client__1_main_i in range(1):
    bank_index = federate__client__1_main_i
    federate__client__1_main_lf[0] = __federate__client__1_main(
        _bank_index = 0,
    )
    # Start initializing federate__client__1.client of class _clientreactor
    for federate__client__1_client_i in range(1):
        bank_index = federate__client__1_client_i
        federate__client__1_client_lf[0] = __clientreactor(
            _bank_index = 0,
        )
    # Start initializing federate__client__1.ns_federate__server_0 of class _networksender_0null
    for _derate__client__1_ns_federate__server_0_i in range(1):
        bank_index = _derate__client__1_ns_federate__server_0_i
        _derate__client__1_ns_federate__server_0_lf[0] = __networksender_0null(
            _bank_index = 0,
        )
    # Start initializing federate__client__1.nr_federate__client__1 of class _networkreceiver_5
    for _erate__client__1_nr_federate__client__1_i in range(1):
        bank_index = _erate__client__1_nr_federate__client__1_i
        _erate__client__1_nr_federate__client__1_lf[0] = __networkreceiver_5(
            _bank_index = 0,
        )
    # Start initializing federate__client__1._clientglobal_parameters1 of class __clientglobal_parameters
    for _te__client__1__clientglobal_parameters1_i in range(1):
        bank_index = _te__client__1__clientglobal_parameters1_i
        _te__client__1__clientglobal_parameters1_lf[0] = ___clientglobal_parameters(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
