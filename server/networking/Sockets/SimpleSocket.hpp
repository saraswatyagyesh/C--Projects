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
        int sock;
        struct sockaddr_in address;
            // int connection;

        public: 
            
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
            virtual int connection_to_network(int sock, struct sockaddr_in address) = 0;
            void test_connection(int);

            // Getters
            int get_sock();
            struct sockaddr_in get_address();
            // int get_connection();
            // void set_connection(int con);
    };
}

#endif /* SimpleSocket_hpp */