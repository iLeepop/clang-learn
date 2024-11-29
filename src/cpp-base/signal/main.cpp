#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signal_handler(int signum)
{
    cout << "Received signal: " << signum << endl;

    exit(signum);
}

int main()
{
    int i = 0;
    signal(SIGINT, signal_handler);

    while (++i)
    {
        cout << "Waiting for signal..." << endl;
        if ( i == 3 )
        {
            raise(SIGINT);
        }
        sleep(1);
    }

    return 0;
}