#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp


#include<stdio.h>
#include<sys/socket.h>

namespace SOCKET
{
    class SimpleSocket 
    {
        public: 
            SimpleSocket(int domain, int service, int protocol);
    };
}

#endif /* SimpleSocket_hpp */