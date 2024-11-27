// #define MON 1
// #define TUE 2
// ....
// ....

enum DAY
{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};
// MON为1

enum SEASON
{
    SPRING, SUMMER=3, AUTUMN, WINTER
} season;
// 没有设置初始化值，SPRING默认为0，SUMMER为3，AUTUMN为4，WINTER为5
// 同时定义枚举

// 枚举类类型变量
enum DAY day = MON;