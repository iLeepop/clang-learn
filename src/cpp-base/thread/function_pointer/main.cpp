#include <iostream>
#include <thread>
using namespace std;

void printMessage(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Message from [printMessage]" << endl;
    }
}

int main()
{
    thread t(printMessage, 5);
    t.join();
    return 0;
}