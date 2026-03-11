#include"SimpleSocket.hpp"

// 04/03/26 - HDE in the video, is SOCKET here

SOCKET::SimpleSocket::SimpleSocket(int doimain, int service, int protocol, int port, u_long interface)
{
    // Define adress structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    // Establish a socket
    sock = socket(doimain, service, protocol);
    test_connection(sock);


}

void SOCKET::SimpleSocket::test_connection(int item_to_test)
{
    if (item_to_test < 0)
    {
        error("Failed to connect....");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in SOCKET::SimpleSocket::get_address()
{
    return address;
}

int SOCKET::SimpleSocket::get_sock()
{
    return sock;
}

int SOCKET::SimpleSocket::get_connection()
{
    return connection;
}

void SOCKET::SimpleSocket::set_connection(int con)
{
    connection = con;
}