#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    
    fp = fopen("test.txt", "w+");
    fprintf(fp, "Hello World\n");
    fputs("This is fputs\n", fp);
    fclose(fp);

    fp = fopen("test.txt", "r+");
    int c;
    c = fgetc(fp);
    printf("c %c\n", c);
    char buf[1024];
    // char s;
    fgets(buf, 1024, fp);
    // printf("fgets %d\n", s);
    printf("buf %s\n", buf);
    fclose(fp);
}