#include <stdio.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int (* p)(int, int) = &max;
    int a, b, c, d;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    d = p(a, p(b, c));

    printf("The maximum is %d\n", d);

    return 0;
}