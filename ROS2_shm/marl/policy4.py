import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image

# Preamble
import numpy as np
import time
import pickle
from multiprocessing import shared_memory


class Policy4(Node):
    def __init__(self):
        super().__init__('policy4')
        self.publisher_ = self.create_publisher(
            Image, 'policy_topic4', 10)
        self.subscription = self.create_subscription(
            Image,
            'env_topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.shm = None
        self.size = 10485922

    def serialization(self, val):
        if self.shm:
            self.shm.close()
            self.shm.unlink()

        serialized_array = pickle.dumps(val)

        # Create and Write shared memory
        self.shm = shared_memory.SharedMemory(create=True, size=self.size)
        self.shm.buf[:self.size] = serialized_array
        return pickle.dumps(self.shm.name)

    def deserialization(self, memory_name):
        local_shm = shared_memory.SharedMemory(name=pickle.loads(memory_name))
        data = pickle.loads(local_shm.buf[:self.size])
        array = np.frombuffer(data, dtype=np.int64)
        return array

    def listener_callback(self, msg):
        received_np_array = self.deserialization(msg.data)
        time.sleep(0.5)
        self.send_message(received_np_array)

    def send_message(self, val):
        msg = Image()
        msg.data = self.serialization(val)
        print("policy 4:" + str(msg.data))
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    policy_node = Policy4()
    rclpy.spin(policy_node)
    policy_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
