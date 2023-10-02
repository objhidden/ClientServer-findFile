#include "Server/Server.h"

int main() {
    // simple run or initialize would be enough
    Server server;
    server.createSocket();
    server.initializeServerAddress();
    server.bindingSocket();
    server.listeningSocket();
    server.acceptingClient();
    server.run();
    return 0;
}