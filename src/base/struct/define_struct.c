#include <stdio.h>

struct Books
{
    char    title[50];
    char    author[50];
    char    subject[100];
    int     boot_id;
} book = { "CLang", "ilee", "programming", 1 };

struct Books book1;
struct Books book2, book3, books[10], *book4;

typedef struct
{
    int    a;
    char   b;
    double c;
} MyStruct;
MyStruct mystruct;

struct COMPLEX
{
    char string[100];
    struct Books ms;
};

struct NODE
{
    char string[100];
    struct NODE *next_node;
};

struct B;

struct A
{
    struct B *partner;
    // others
};

struct B
{
    struct A *partner;
    //others
};

int main()
{
    printf("title:: %s\n", book.title);
    printf("author:: %s\n", book.author);
    printf("subject:: %s\n", book.subject);
    printf("id:: %d\n", book.boot_id);

    struct Books book5 = {"C++", "ilee", "programming", 2};
    struct Books *pointer;
    pointer = &book5;

    printf("title:: %s\n", pointer->title);
    printf("author:: %s\n", pointer->author);
    printf("subject:: %s\n", pointer->subject);
    printf("id:: %d\n", pointer->boot_id);

    printf("sizeof(struct Books):: %ld\n", sizeof(struct Books));

    return 0;
}