#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp


#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<iostream>

namespace SOCKET
{
    class SimpleSocket 
    {
        private: 
            struct socaddr_in address;
            int sock;
            int connection;

        public: 
            
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
            virtual int connection_to_network(int sock, struct sockaddr_in address) = 0;
            void test_connection(int);

            // Getters
            struct sockaddr_in get_address();
            int get_sock();
            int get_connection();
    };
}

#endif /* SimpleSocket_hpp */