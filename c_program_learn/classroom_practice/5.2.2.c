#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 100以内的素数 */
    int i;
    for (i = 1; i < 100; i++)
    {
        int isPrime = 1;
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
