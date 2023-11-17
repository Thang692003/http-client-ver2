#ifndef HTTPTCPCLIENT_H_INCLUDED
#define HTTPTCPCLIENT_H_INCLUDED

#include "tcpclient.h"

class HttpTcpClientCLI: public TcpClient
{
private:

public:
    // bool echo(const string& msg);
    bool getHTTP(const string& url);
};


#endif // ECHOTCPCLIENT_H_INCLUDED

