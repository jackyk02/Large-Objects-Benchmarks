import gc
import atexit
import pickle
import pyarrow.plasma as plasma
import numpy as np
import time
import copy
import LinguaFrancafederate__server as lf
from LinguaFrancafederate__server import (
    Tag, action_capsule_t, port_capsule, request_stop, schedule_copy, start
)
import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
# pylint: disable=c-extension-no-member
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

# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.
# From the preamble, verbatim:
session = plasma.connect("/tmp/plasma")


def serialization(session, data):
    buffer = []
    pickled_data = pickle.dumps(
        data, protocol=5, buffer_callback=buffer.append)
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
    # memory getting
    buffer = session.get_buffers([buffer_id])
    pickled_data = session.get(data_object_id)
    data = pickle.loads(pickled_data, buffers=buffer)
    return data


gc.disable()
atexit.register(os._exit, 0)
# End of preamble.


# Python class for reactor _federate__server_main
class __federate__server_main:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _serverreactor
class __serverreactor:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.round_num = None
        self.start_time = None
        self.prev_time = None

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member

    def reaction_function_0(self, global_parameters):

        self.round_num = 0
        self.results = [0] * 4
        self.start_time = None
        self.prev_time = None
        val = np.ones(131072)
        id = serialization(session, val)
        global_parameters.set(id)
        return 0

    def reaction_function_1(self, updated_parameters, global_parameters):

        # Retrieve value from each client
        for i in range(4):
            data_pair = updated_parameters[i].value
            self.results[i] = deserialization(
                session, data_pair[0], data_pair[1])

        # Check and set the benchmark start time for the first round
        if self.round_num == 0:
            self.start_time = time.time()
            self.prev_time = self.start_time

        # print round number
        print("Episode: "+str(self.round_num))
        self.round_num += 1

        # print Time Taken
        cur_time = time.time()
        print(f"Time taken: {cur_time - self.start_time:.3f} seconds")
        print(f"Overhead: {cur_time - self.prev_time - 0.5:.3f} seconds\n")
        self.prev_time = cur_time

        # Update the global parameters with the results from the first client for the next round
        id = serialization(session, self.results[0].copy())
        global_parameters.set(id)
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
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networksender_1null
class __networksender_1null:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networksender_2null
class __networksender_2null:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networksender_3null
class __networksender_3null:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networkreceiver_0
class __networkreceiver_0:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networkreceiver_1
class __networkreceiver_1:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networkreceiver_2
class __networkreceiver_2:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor _networkreceiver_3
class __networkreceiver_3:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Python class for reactor __serverupdated_parameters
class ___serverupdated_parameters:

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables

    @property
    def bank_index(self):
        return self._bank_index  # pylint: disable=no-member


# Instantiate classes
federate__server_main_lf = [None] * 1
federate__server_server_lf = [None] * 1
federate__server_ns_federate__client__0_lf = [None] * 1
federate__server_ns_federate__client__1_lf = [None] * 1
federate__server_ns_federate__client__2_lf = [None] * 1
federate__server_ns_federate__client__3_lf = [None] * 1
federate__server_nr_federate__server_lf = [None] * 1
federate__server_nr_federate__server_0_lf = [None] * 1
federate__server_nr_federate__server_1_lf = [None] * 1
federate__server_nr_federate__server_2_lf = [None] * 1
_rate__server__serverupdated_parameters0_lf = [None] * 1
# Start initializing federate__server of class _federate__server_main
for federate__server_main_i in range(1):
    bank_index = federate__server_main_i
    federate__server_main_lf[0] = __federate__server_main(
        _bank_index=0,
    )
    # Start initializing federate__server.server of class _serverreactor
    for federate__server_server_i in range(1):
        bank_index = federate__server_server_i
        federate__server_server_lf[0] = __serverreactor(
            _bank_index=0,
        )
    # Start initializing federate__server.ns_federate__client__0 of class _networksender_0null
    for federate__server_ns_federate__client__0_i in range(1):
        bank_index = federate__server_ns_federate__client__0_i
        federate__server_ns_federate__client__0_lf[0] = __networksender_0null(
            _bank_index=0,
        )
    # Start initializing federate__server.ns_federate__client__1 of class _networksender_1null
    for federate__server_ns_federate__client__1_i in range(1):
        bank_index = federate__server_ns_federate__client__1_i
        federate__server_ns_federate__client__1_lf[0] = __networksender_1null(
            _bank_index=0,
        )
    # Start initializing federate__server.ns_federate__client__2 of class _networksender_2null
    for federate__server_ns_federate__client__2_i in range(1):
        bank_index = federate__server_ns_federate__client__2_i
        federate__server_ns_federate__client__2_lf[0] = __networksender_2null(
            _bank_index=0,
        )
    # Start initializing federate__server.ns_federate__client__3 of class _networksender_3null
    for federate__server_ns_federate__client__3_i in range(1):
        bank_index = federate__server_ns_federate__client__3_i
        federate__server_ns_federate__client__3_lf[0] = __networksender_3null(
            _bank_index=0,
        )
    # Start initializing federate__server.nr_federate__server of class _networkreceiver_0
    for federate__server_nr_federate__server_i in range(1):
        bank_index = federate__server_nr_federate__server_i
        federate__server_nr_federate__server_lf[0] = __networkreceiver_0(
            _bank_index=0,
        )
    # Start initializing federate__server.nr_federate__server_0 of class _networkreceiver_1
    for federate__server_nr_federate__server_0_i in range(1):
        bank_index = federate__server_nr_federate__server_0_i
        federate__server_nr_federate__server_0_lf[0] = __networkreceiver_1(
            _bank_index=0,
        )
    # Start initializing federate__server.nr_federate__server_1 of class _networkreceiver_2
    for federate__server_nr_federate__server_1_i in range(1):
        bank_index = federate__server_nr_federate__server_1_i
        federate__server_nr_federate__server_1_lf[0] = __networkreceiver_2(
            _bank_index=0,
        )
    # Start initializing federate__server.nr_federate__server_2 of class _networkreceiver_3
    for federate__server_nr_federate__server_2_i in range(1):
        bank_index = federate__server_nr_federate__server_2_i
        federate__server_nr_federate__server_2_lf[0] = __networkreceiver_3(
            _bank_index=0,
        )
    # Start initializing federate__server._serverupdated_parameters0 of class __serverupdated_parameters
    for _rate__server__serverupdated_parameters0_i in range(1):
        bank_index = _rate__server__serverupdated_parameters0_i
        _rate__server__serverupdated_parameters0_lf[0] = ___serverupdated_parameters(
            _bank_index=0,
        )


# The main function
def main(argv):
    start(argv)


# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__ == "__main__":
    main(sys.argv)
