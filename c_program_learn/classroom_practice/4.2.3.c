#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 数以一串整数直到输入结束标志 -1，算平均值 */
    int num;
    int sum = 0;
    int count = 0;
    scanf("%d", &num);
    while (num != -1)
    {
        sum += num;
        count++;
        scanf("%d", &num);
    }
    printf("%lf", 1.0 * sum / count);
    return 0;
}
