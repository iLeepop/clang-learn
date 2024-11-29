#include <iostream>
#include <thread>
using namespace std;

class PrintTask
{
    public:
        void operator()(int count) const
        {
            for (int i = 0; i < count; ++i)
            {
                cout << "Hello from [PrintTask] " << this_thread::get_id() << endl;
            }
        }
};

int main()
{
    thread t(PrintTask(), 5);
    t.join();
    return 0;
}