// This class implements a call to te connect() of sockets as a defination to the connect_to_network() from SimpleSocket

#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp      

#include<stdio.h>

#include"SimpleSocket.hpp"

namespace SOCKET
{
    class ConnectingSocket: public SimpleSocket
    {
        ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
        int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif /* ConnectingSocket_hpp */
