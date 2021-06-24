#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 整数分解  正序分解*/
    int x;
    scanf("%d",&x);
    int temp = x;
    int mask = 1;
    while (temp > 9)
    {
        mask *= 10;
        temp /= 10;
    }
    //printf("%d\n", mask);
    //正向拆分
    int first;
    while (mask > 0)
    {
        first = x / mask;
        printf("%d ",first);
        x %= mask;
        // printf("x = %d\n ",x);
        mask /= 10;
    }
    return 0;
}
