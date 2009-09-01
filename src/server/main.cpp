#include "server/serverTemplate.h"

int main()
{
    int returnedValue = 0;
    ServerTemplate *server = new ServerTemplate();
    server->executeServer();

    delete server;
}
