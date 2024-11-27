#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
    FILE *pf;
    int errnum;
    pf = fopen("test.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Error Code: %d\n", errno);
        perror("Error");
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    return 0;
}