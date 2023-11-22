#ifndef HTTPCLIENTCLI_H_INCLUDED
#define HTTPCLIENTCLI_H_INCLUDED

#include "cli.h"
#include "tcpsocket.h"
#include "httptcpclient.h"

class HttpClientCLI : public CmdLineInterface {
private:
    HttpTcpClientCLI client;
public:
    HttpClientCLI();
    ~HttpClientCLI();
    void initCmd();
private:
    void doOpen(string cmd_argv[], int cmd_argc);
    void doClose(string cmd_argv[], int cmd_argc);
    void doAttendace(string cmd_argv[], int cmd_argc);
    void doUpload(string cmd_argv[], int cmd_argc);
    void doTurnIn(string cmd_argv[], int cmd_argc);
    void doHelp(string cmd_argv[], int cmd_argc);
    void doQuit(string cmd_argv[], int cmd_argc);
};
//HttpClientCLI client;

#endif // HTTPCLI_H_INCLUDED
