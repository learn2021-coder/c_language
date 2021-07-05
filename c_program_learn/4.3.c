#include <math.h>
#include <stdio.h>

int main(int argc, char const* argv[])
{
    /* 
    本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。
     */
    double eps;
    scanf("%lf", &eps);
    double sum = 0;
    int i = 1;
    int flag = 1;
    double temp = -1;
    do {
        temp = 1.0 / (3 * i - 2) * flag;
        sum += temp;
        flag = -flag;
        i++;
    } while (fabs(temp) > eps);
    printf("sum = %.6lf", sum);
    return 0;
}
