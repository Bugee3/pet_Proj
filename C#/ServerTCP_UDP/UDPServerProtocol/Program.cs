using System;
using System.Net;
using System.Net.Sockets;
using System.Text;


namespace ServerUDP
{
    class Program
    {
        static void Main(string[] args)
        {
            const string _IP_ = "127.0.0.1";
            const int _PORT_ = 8081;

            EndPoint endPoint = new IPEndPoint(IPAddress.Any, 0);

            var udpSocket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
            
            udpSocket.Bind(endPoint);

            while (true)
            {
                var buffer = new byte[256];
                var size = 0;
                var data = new StringBuilder();

                do
                {
                    size = udpSocket.ReceiveFrom(buffer,ref endPoint);
                    data.Append(Encoding.UTF8.GetString(buffer));
                    
                } 
                while (udpSocket.Available > 0);

                udpSocket.SendTo(Encoding.UTF8.GetBytes("Massage sended!"), endPoint);
                
                Console.WriteLine(data.ToString());
            }
            
        }
    }
}