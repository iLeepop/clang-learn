#include <stdio.h>

struct Status1
{
    unsigned int widthValidated;
    unsigned int heightValidated;
};

struct Status2
{
    unsigned int widthValidated:1; // 二进制 0 1 占一位
    unsigned int heightValidated:1;
};

struct {
    unsigned int age : 3; // 占3位 000~111 0~7
} Age;

int main()
{
    struct Status1 s1;
    struct Status2 s2;

    printf("%lu %lu\n", sizeof(s1), sizeof(s2));

    struct bs
    {
        unsigned a : 1;
        unsigned b : 3;
        unsigned c : 4;
    } bit, *pbit;
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("a=%u, b=%u, c=%u\n", bit.a, bit.b, bit.c);
    pbit = &bit;
    pbit->a = 0;
    pbit->b &= 3;
    pbit->c |= 1;
    printf("%d %d %d\n", pbit->a, pbit->b, pbit->c);
}