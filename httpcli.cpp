#include "httpcli.h"
#include <iostream>


HttpClientCLI::HttpClientCLI():CmdLineInterface("Http Client>")
{
    cout << "\033[1;32m" << R"(
+======================================================================================+
| |     | ___ ___  __     __ |   *  __      ___  \    / __  __   __ *  __     |   __   |
| |_____|  |   |  |__)   /   |   | |_  |\ |  |    \  / |_  |__) (_  | /  \ |\ |    _)  |
| |     |  |   |  |      \__ |__ | |__ | \|  |     \/  |__ |  \ __) | \__/ | \|   /__  |
| |     |  |   |  |                                                        |           |
+======================================================================================+
    )" << endl;
    cout << "Nhap lenh help de duoc tro giup" << endl;
    initCmd();
    cmdDefaulID = 0;
}

HttpClientCLI::~HttpClientCLI()
{
}

void HttpClientCLI::initCmd()
{
   // add code here
   addCmd("open",CLI_CAST(&HttpClientCLI::doOpen));
   addCmd("close",CLI_CAST(&HttpClientCLI::doClose));
   //addCmd("echo",CLI_CAST(&HttpClientCLI::doEcho));
   addCmd("get",CLI_CAST(&HttpClientCLI::doGet));
   addCmd("help",CLI_CAST(&HttpClientCLI::doHelp));
   addCmd("post",CLI_CAST(&HttpClientCLI::doPost));
}

void HttpClientCLI::doHelp(string cmd_argv[], int cmd_argc)
{
    cout << "Please use the following commands:" << endl;
    cout << "- open  hostname [port]    Mo ket noi den Echo server" << endl;
    cout << "- close                    Dong ket noi" << endl;
    cout << "- help                     Tro giup" << endl;
    cout << "- quit                     Ket thuc chuong trinh" << endl;
    cout << "- get [URL]                Su dung method GET" << endl;
    cout << "- post [URL] <MSV>         Su dung method POST" << endl;
}

/*
    get [URL]
*/

void HttpClientCLI::doGet(string cmd_argv[], int cmd_argc)
{
    if(cmd_argc==2)
    {
       //add code here
       bool ok = client.getHTTP(cmd_argv[1]);
       if(ok)
       {
           cout << "GET done!" << endl;
       }
    }
    else if(cmd_argc==1)
    {
       string url;
       cout << "Nhap URL: ";
       getline(cin, url);
       bool ok = client.getHTTP(url);
       if(ok)
       {
           cout << "GET done!" << endl;
       }
    }
    else
    {
        cout << "Cu phap lenh khong chinh xac" << endl;
    }
}

/*
    post [URL] <msv>
*/

void HttpClientCLI::doPost(string cmd_argv[], int cmd_argc)
{
    if(cmd_argc==3)
    {
       //add code here
       bool ok = client.postHTTP(cmd_argv[1], cmd_argv[2]);
       if(ok)
       {
           cout << "POST done!" << endl;
       }
    }
    else if(cmd_argc==1)
    {
       string url, msv;
       cout << "Nhap URL: ";
       getline(cin, url);
       cout << "Nhap MSV: ";
       getline(cin, msv);
       bool ok = client.postHTTP(url, msv);
       if(ok)
       {
           cout << "POST done!" << endl;
       }
    }
    else
    {
        cout << "Cu phap lenh khong chinh xac" << endl;
    }
}

/*
   open <server> [port]
   open <server>

*/
void HttpClientCLI::doOpen(string cmd_argv[], int cmd_argc)
{
    if(cmd_argc==3)
    {
       //add code here
       if(client.isConnected())
       {
           cout << "Da co ket noi, hay dong ket noi lai." << endl;
           return;
       }
       bool ok = client.open(cmd_argv[1],cmd_argv[2]);
       if(ok)
       {
           cout << "Ket noi thanh cong" << endl;
       }
       else
       {
           cout << "Ket noi KHONG thanh cong" << endl;
       }
    }
    else if(cmd_argc==2)
    {
       // add code here
       if(client.isConnected())
       {
           cout << "Da co ket noi, hay dong ket noi lai." << endl;
           return;
       }
       bool ok = client.open(cmd_argv[1],"echo");
       if(ok)
       {
           cout << "Ket noi thanh cong" << endl;
       }
       else
       {
           cout << "Ket noi KHONG thanh cong" << endl;
       }
    }
    else
    {
        cout << "Cu phap lenh khong chinh xac" << endl;
    }
}

void HttpClientCLI::doClose(string cmd_argv[], int cmd_argc)
{
    // add code here
    client.close();
    cout << "Da dong ket noi." << endl;
}

/*
    echo  [msg]
    echo
*/

/*
void HttpClientCLI::doEcho(string cmd_argv[], int cmd_argc)
{
    if(cmd_argc==2)
    {
        // add code here
        bool ok = client.echo(cmd_argv[1]);
        if(ok)
            cout << "Echo thanh cong." << endl;
    }
    else if(cmd_argc == 1)
    {
        // add code here
        string msg;
        cout << "Nhap ban tin:";
        getline(cin, msg);
        bool ok = client.echo(msg);
        if(ok)
            cout << "Echo thanh cong." << endl;
    }
    else
    {
        cout << "Invalid arguments" << endl;
    }
}
*/




