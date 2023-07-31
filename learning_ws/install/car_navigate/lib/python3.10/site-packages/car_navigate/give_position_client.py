#!/usr/bin/env python3FBroa
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node
from navigate_interfaces.srv import GivePosition
import sys




class GivePositionClient(Node):

    def __init__(self):
        super().__init__('give_position_client')
        self.cli = self.create_client(GivePosition, 'give_position')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = GivePosition.Request()

    def send_request(self, x, y):
        self.req.x = x
        self.req.y = y
        self.future = self.cli.call_async(self.req)             #发送服务请求并异步获取结果
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()                             #返回结果

def main():
    rclpy.init()

    give_position_client = GivePositionClient()
    response = give_position_client.send_request(float(sys.argv[1]), float(sys.argv[2]))  #将返回结果赋值给response
    give_position_client.get_logger().info(
        f"Result : {response.finish}"
        )

    give_position_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()