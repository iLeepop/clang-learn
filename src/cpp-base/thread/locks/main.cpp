#include <thread>
#include <mutex>

std::mutex mtx;

void safeFunctionWithLockGuard()
{
    std::lock_guard<std::mutex> lk(mtx);
}

void safeFunctionWithUniqueLock()
{
    std::unique_lock<std::mutex> uk(mtx);

    uk.unlock();
}