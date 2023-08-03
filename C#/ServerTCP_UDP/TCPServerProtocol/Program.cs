using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

namespace TCProtocol
{
    class Program
    {
        static void Main(string[] args)
        {
            // create out connection of Port and IP's our computer.

            const string _IP_ = "127.0.0.1"; // is localhost.

            const int _POST_ = 8080;

            IPEndPoint ipEndPoint = new IPEndPoint(IPAddress.Parse(_IP_), _POST_);

            Socket tcpSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            
            tcpSocket.Bind(ipEndPoint);
            tcpSocket.Listen(5);

            while (true)
            {
                //here every time we create accept from client and filter our data to String...
                
                var listenerIPFromClient = tcpSocket.Accept();
                var buffer = new byte[256];
                var size = 0;
                var dataByteToString = new StringBuilder();

                do
                {
                    size = listenerIPFromClient.Receive(buffer);
                    dataByteToString.Append(Encoding.UTF8.GetString(buffer, 0, size));
                }
                while (listenerIPFromClient.Available > 0);

                Console.WriteLine(dataByteToString);

                listenerIPFromClient.Send(Encoding.UTF8.GetBytes("Successfully"));
                
                listenerIPFromClient.Shutdown(SocketShutdown.Both);
                
                listenerIPFromClient.Close();
            }
            
        }
    }
}