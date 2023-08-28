from twisted.internet import reactor, protocol 
import json


class MyServer(protocol.Protocol):
    def connectionMade(self):
        print("Client connected")
    
    def dataReceived(self, data):
        print(f"Received data from client: {data}")
        flag = input("请输入数字1或2（1：使用预设任务；2：使用手动输入）")

        if flag == "1":
            task = input("输入任务编号（例如A,B）")
            if task == "A":
                x_array = [0.0,-1.0,-2.0,-3.0,-4.0,-5.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-6.0,-5.0]
                y_array = [-8.0,-8.0,-8.0,-8.0,-8.0,-8.0,-8.0,-7.0,-6.0,-5.0,-4.0,-3.0,-2.0,-1.0,0.0,1.0,2.0,3.0,4.0,4.0]
                v_array = [0,2,2,2,2,2,1,2,2,2,2,2,2,2,2,2,2,2,1,0]
                # v_array = [0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0]
            if task == "B":
                x_array = [-5.0,-5.0,-5.0,3.0,4.0,4.0,4.0,3.0]
                y_array = [4.0,-3.0,-4.0,-4.0,-4.0,1.0,2.0,2.0]
                v_array = [0,2,1,2,1,2,1,0]
                # v_array = [0,1,1,1,1,1,1,0]
            if task == "C":
                x_array = [3.0,3.0,3.0,2.0,0.0,0.0,0.0]
                y_array = [2.0,-3.0,-4.0,-4.0,-4.0,-7.0,-8.0]
                v_array = [0,2,1,2,1,2,0]
                # v_array = [0,1,1,1,1,1,0]

        if flag == "2":
            input_x = input("请输入途径点和目标点的x坐标，以空格分隔：")
            input_y = input("请输入途径点和目标点的y坐标，以空格分隔：")
            input_v = input("请输入途径点和目标点的速度约束，以空格分隔：")

            x_array = [float(num) for num in input_x.split()]
            y_array = [float(num) for num in input_y.split()]
            v_array = [int(num) for num in input_v.split()]
        
        array = [x_array,y_array,v_array]

        json_data = json.dumps(array)

        # 在发送端将JSON格式的字符串发送出去（注意：需要编码成字节流）
        self.transport.write(json_data.encode("utf-8"))

        

class MyServerFactory(protocol.Factory):
    def buildProtocol(self, addr):
        return MyServer()

def main():
    reactor.listenTCP(12345, MyServerFactory())
    print("Server started")
    reactor.run()

if __name__ == "__main__":
    main() 
