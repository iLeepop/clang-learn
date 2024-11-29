#include <thread>
#include <mutex>

std::mutex mtx;

void safeFunction()
{
    mtx.lock();
    // operate
    mtx.unlock();
}

int main()
{
    std::thread t1(safeFunction);
    std::thread t2(safeFunction);

    t1.join();
    t2.join();

    return 0;
}