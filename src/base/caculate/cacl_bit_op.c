#include <stdio.h>

int main()
{
    unsigned int a = 170;
    int c = 0;
    int* ptr;

    ptr = &a;
    printf("*ptr 是 %d\n", *ptr);

    c = a << 1;
    printf("c = %d\n", c);
}
