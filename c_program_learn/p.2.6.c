#include<stdio.h>

int fun(int n){
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
    
}
int main(int argc, char const *argv[])
{
    /* 本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。 */
    int sum = 0;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum += fun(i);
    }
    printf("%d",sum);
    return 0;
}
