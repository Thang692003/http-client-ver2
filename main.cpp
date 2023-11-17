#include <iostream>
#include "httpcli.h"

using namespace std;

int main(int argc, char* argv[])
{
    HttpClientCLI cli;
    cli.run(argv,argc);
    return 0;
}
