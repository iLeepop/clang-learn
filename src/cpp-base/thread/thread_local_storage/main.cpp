#include <iostream>
#include <thread>

thread_local int thread_data = 0;

void threadFunction()
{
    thread_data = 42;
    std::cout << "thread_data: " << thread_data << std::endl;
}

int main()
{
    std::thread t(threadFunction);
    std::thread t2(threadFunction);
    t.join();
    t2.join();
    return 0;
}