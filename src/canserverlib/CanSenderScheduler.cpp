#include "CanSenderScheduler.h"
#include "CanServer.h"

bool CanSenderScheduler::sendData(const int& data)
{
    CanServer *server;
    if( isTest_ )
    {
        server = new FakeCanServer(12);
    } else
    {
        server = new CanServer(12);
    }

    return server->send(data);
}

