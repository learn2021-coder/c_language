#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    /* 本题要求编写程序，计算平方根序列√1 +√2​ +√​3 +⋯的前N项之和。可包含头文件math.h，并调用sqrt函数求平方根 */
    double sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += sqrt(i);
    }
    printf("sum = %.2lf", sum);
    return 0;
}
