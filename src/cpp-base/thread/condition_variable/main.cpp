#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void workerThread()
{
    std::unique_lock<std::mutex> lk(mtx);
    cv.wait(lk, []{return ready;});
}

void mainThread()
{
    {
        std::lock_guard<std::mutex> lk(mtx);
        ready = true;
    }
    cv.notify_one();
}