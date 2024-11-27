// #define 定义红
// #include 包含一个源代码文件
// #undef 取消已经定义的宏
// #ifdef 如果宏已经定义则返回真
// #ifndef 如果宏没有定义则返回真
// #if 如果给定条件为真，则编译下面代码
// #else 
// #elif
// #endif
// #error 当遇到标准错误时，输出错误消息
// #progma 使用标准化方法，向编译器发布特殊的命令到编译器中

#include <stdio.h>

#define MAX_ARRAY_LENGTH 100

#undef FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
    #define MESSAGE "Hello World!"
#endif

#ifdef DEBUG
    //
#endif

#define message_for(a, b) \
    printf(#a " and " #b ": We like you! \n")

#define catstr(n) printf("catstr" #n " = %s\n", str##n)

#define MAX(x, y) ((x) > (y) ? (x) : (y))

// 预定义宏

int main()
{
    printf("FILE: %s\n", __FILE__);
    printf("LINE: %d\n", __LINE__);
    printf("DATE: %s\n", __DATE__);
    printf("TIME: %s\n", __TIME__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}