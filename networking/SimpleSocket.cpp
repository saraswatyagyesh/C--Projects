#include"SimpleSocket.hpp"

SOCKET::SimpleSocket::SimpleSocket(int doimain, int service, int protocol)
{
    int connection = socket(doimain, service, protocol);
}