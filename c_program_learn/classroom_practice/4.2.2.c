#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /* 猜数游戏，0-100内的数 */
    srand(time(0));
    int a = rand() % 100;
    int num;
    int count = 0;
    do
    {
        scanf("%d", &num);
        count++;
        if (num > a)
        {
            printf("大了\n");
        }
        else
        {
            printf("小了\n");
        }
    } while (num != a);

    printf("%d", count);
    return 0;
}
