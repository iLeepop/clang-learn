// 数据类型

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("long 存储大小: %lu \n", sizeof(long));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 精度值: %d\n", FLT_DIG);

    return 0;
}
