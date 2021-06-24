#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 按顺序打印出前50个正整数素数 */
    int count = 0;
    int x = 1;
    while (count < 50)
    {
        int i;
        int isPrime = 1;
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d\t", x);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
        x++;
    }
    return 0;
}
