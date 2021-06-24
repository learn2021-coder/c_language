#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* 判断一个数是不是素数 */
    int isPrime = 1;//是素数
    int num ;
    scanf("%d",&num);

    int i;
    for ( i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            isPrime = 0;
            break; 
        }
        
    }
    if (isPrime == 0)
    {
       printf("不是素数"); 
    }else{
        printf("是素数");
    }
    return 0;
}
