#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer;
    pointer = &a;

    printf("a rem addr is: %p\n", (void *)pointer);
    return 0;
}