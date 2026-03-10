#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include<stdio.h>
#include"BindingSocket.hpp"

namespace SERVER 
{
    class ListeningSocket : public BindingSocket
    {
        private: 
            int backlog;
        
        public:
            ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
            void start_listening();
    };
}


#endif /* ListeningSocket_hpp */