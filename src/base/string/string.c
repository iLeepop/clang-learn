#include <stdio.h>
#include <string.h>

char name[5] = {'I', 'L', 'E', 'E', '\0'};
char nickname[] = "CRF_";

int main()
{
    char cp[5];
    strcpy(cp, name);
    char f[4] = "pop";
    strcat(cp, f);
    size_t len;
    len = strlen(cp);
    printf("name: %s, len: %.ld\n", cp, len);
    return 0;
}
