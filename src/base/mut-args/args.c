#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{
    va_list ap;
    double sum = 0.0;
    int i;

    va_start(ap, num);

    for (i = 0; i < num; i++)
    {
        sum += va_arg(ap, int);
    }
    va_end(ap);

    return sum / num;
}

int main()
{
    printf("Average of 2, 3, 4, 5 is %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15, 20 is %f\n", average(4, 5, 10, 15, 20));
    return 0;
}