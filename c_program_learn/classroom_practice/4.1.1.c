#include <stdio.h>
int main(int argc, char const *argv[])
{
    //判断一个数字的位数
    int n;
    scanf("%d", &n);
    int count = 1;
    while (n / 10 > 0)
    {
        count++;
        n /= 10;
    }
    printf("count = %d",count);
    return 0;
}
