#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char  str[20];
};

int main()
{
    union Data data;
    printf("Memory size occupied by data : %ld\n", sizeof(data));

    data.i = 10;
    printf("Data.i : %d\n", data.i);
    data.f = 20.0;
    printf("Data.f : %f\n", data.f);
    strcpy(data.str, "CLang");
    printf("Data.str : %s\n", data.str);

    printf("Data.i : %d\n", data.i);
    printf("Data.f : %f\n", data.f);
    printf("Data.str : %s\n", data.str);

    return 0;
}