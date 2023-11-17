#include "httpcli.h"
#include <iostream>


HttpClientCLI::HttpClientCLI():CmdLineInterface("Http Client>")
{
    cout << "Http Client version 2.0" << endl;
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
   addCmd("attendace",CLI_CAST(&HttpClientCLI::doAttendace));
   //addCmd("get",CLI_CAST(&EchoClientCLI::doGet));
   addCmd("upload",CLI_CAST(&HttpClientCLI::doUpload));
   addCmd("turnin",CLI_CAST(&HttpClientCLI::doTurnIn));
   addCmd("help",CLI_CAST(&HttpClientCLI::doHelp));
   addCmd("quit",CLI_CAST(&HttpClientCLI::doQuit));
}

/*
    get [URL]
*/

void HttpClientCLI::doOpen(string cmd_argv[], int cmd_argc)
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
   open <server> [port]
   open <server>

*/


//void EchoClientCLI::doOpen(string cmd_argv[], int cmd_argc)
//{
//    if(cmd_argc==3)
//    {
//       //add code here
//       if(client.isConnected())
//       {
//           cout << "Da co ket noi, hay dong ket noi lai." << endl;
//           return;
//       }
//       bool ok = client.open(cmd_argv[1],cmd_argv[2]);
//       if(ok)
//       {
//           cout << "Ket noi thanh cong" << endl;
//       }
//       else
//       {
//           cout << "Ket noi KHONG thanh cong" << endl;
//       }
//    }
//    else if(cmd_argc==2)
//    {
//       // add code here
//       if(client.isConnected())
//       {
//           cout << "Da co ket noi, hay dong ket noi lai." << endl;
//           return;
//       }
//       bool ok = client.open(cmd_argv[1],"echo");
//       if(ok)
//       {
//           cout << "Ket noi thanh cong" << endl;
//       }
//       else
//       {
//           cout << "Ket noi KHONG thanh cong" << endl;
//       }
//    }
//    else
//    {
//        cout << "Cu phap lenh khong chinh xac" << endl;
//    }
//}

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

//void HttpClientCLI::doEcho(string cmd_argv[], int cmd_argc)
//{
//    if(cmd_argc==2)
//    {
//        // add code here
//        bool ok = client.echo(cmd_argv[1]);
//        if(ok)
//            cout << "Echo thanh cong." << endl;
//    }
//    else if(cmd_argc == 1)
//    {
//        // add code here
//        string msg;
//        cout << "Nhap ban tin:";
//        getline(cin, msg);
//        bool ok = client.echo(msg);
//        if(ok)
//            cout << "Echo thanh cong." << endl;
//    }
//    else
//    {
//        cout << "Invalid arguments" << endl;
//    }
//}

void HttpClientCLI::doHelp(string cmd_argv[], int cmd_argc)
{
    cout << "Please use the following commands:" << endl;
    cout << "- open <server> [port]   Mo ket noi den Http server" << endl;
    cout << "- close                   Dong ket noi" << endl;
    cout << "- help                    Tro giup" << endl;
    cout << "- quit                    Ket thuc chuong trinh" << endl;
}


