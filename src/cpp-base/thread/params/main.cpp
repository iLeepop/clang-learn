#include <iostream>
#include <thread>

void increment(int& i)
{
    ++i;
}

int main()
{
    int num = 0;
    std::thread t(increment, std::ref(num));
    t.join();
    std::cout << "Value of num is " << num << std::endl;
    return 0;
}