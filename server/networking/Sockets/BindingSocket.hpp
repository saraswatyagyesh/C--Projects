#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include<stdio.h>
#include"SimpleSocket.hpp"

namespace SOCKET
{
    class BindingSocket : public SimpleSocket 
    {
        private: 
            int binding;

            int Connect_to_network(int sock, struct sockaddr_in address);
        
        public: 
            BindingSocket(int domain, int service, int protocol, int port, u_long interface);
            int get_binding();
    };
}

#endif /* BindingSocket_hpp */