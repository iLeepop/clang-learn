#include <stdio.h>

#define LENGTH(array) (sizeof(array) / sizeof(array[0]))

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arr1[4] = {1, 2, 3, 4};

int main()
{
    int len = sizeof(arr);
    int LEN = LENGTH(arr);
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
