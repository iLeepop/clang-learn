#include <stdio.h>

int main()
{
    printf("%d\n %f\n %s\n %c\n", 1, 2.3, "Hello", 'A');

    int c;
    printf("Enter a value: ");
    c = getchar();
    printf("You entered:");
    putchar(c);

    char s[100];
    printf("Enter a string: ");
    gets(s);
    printf("You entered: ");
    puts(s);

    char str[100];
    int i;
    printf("Enter a value: ");
    scanf("%s %d", str, &i);
    printf("You entered: %s %d", str, i);
    return 0;
}