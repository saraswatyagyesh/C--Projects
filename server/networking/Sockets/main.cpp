#include "ListeningSocket.hpp"

int main() 
{
    std::cout << "Starting server..." << std::endl;
    std::cout << "Binding socket..." << std::endl;
    SOCKET::BindingSocket bs = SOCKET::BindingSocket(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY);
    std::cout << "Listening socket..." << std::endl;
    SOCKET::ListeningSocket ls = SOCKET::ListeningSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10);
    std::cout << "Success" << std::endl;
}