#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    /* 本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。 */
    double sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i / (2.0* i - 1.0) * pow(-1, i - 1);
    }
    printf("%.3lf",sum);
    return 0;
}
