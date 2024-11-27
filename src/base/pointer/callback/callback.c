#include <stdio.h>
#include <stdlib.h>

void populate_array(int *array, size_t arrSize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arrSize; i++)
    {
        array[i] = getNextValue();
    }
}

int getNextRandomValue(void)
{
    return rand();
}

int main(void)
{
    int arr[5];
    populate_array(arr, 5, getNextRandomValue);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
