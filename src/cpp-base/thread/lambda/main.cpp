#include <iostream>
#include <thread>

int main()
{
    std::thread t([](int count)
    {
        for (int i = 0; i < count; ++i)
        {
            std::cout << "Message from [Lambda]" << std::endl;
        }
    }, 5);
    t.join();
    return 0;
}