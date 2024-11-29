#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *desp;
    strcpy(name, "Ilee");

    desp = (char *)malloc(200 * sizeof(char));
    if (desp == NULL)
    {
        fprintf(stderr, "Error - unable to allocate memory\n");
    }
    else
    {
        strcpy(desp, "Ilee is a good guy");
    }
    printf("Name: %s\n", name);
    printf("Description: %s\n", desp);
}

void resize_memory()
{
    char name[100];
    char *desp;
    strcpy(name, "Ilee");

    desp = (char *)malloc(100 * sizeof(char));
    if (desp == NULL)
    {
        fprintf(stderr, "Error - unable to allocate memory\n");
    }
    else
    {
        strcpy(desp, "Ilee is a good guy");
    }
    desp = (char *)realloc(desp, 200 * sizeof(char));
    if (desp == NULL)
    {
        fprintf(stderr, "Error - unable to allocate memory\n");
    }
    else
    {
        strcat(desp, " and he is a good player too");
    }
    printf("Name: %s\n", name);
    printf("Description: %s\n", desp);
    // 释放内存
    free(desp);
}