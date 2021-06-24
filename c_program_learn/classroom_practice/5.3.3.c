#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 求两个数的最大公约数,辗转相除法 
        a   b   t
        12  18  12
        18  12  6
        12  6   0
        6   0
        如果b为零,计算结束,a就是最大公约数,
        否则,计算a除以b的余数,让a等于b,而b等于那个余数;
        回到第一步
    */
    int a, b, t;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d",a);
    return 0;
}
