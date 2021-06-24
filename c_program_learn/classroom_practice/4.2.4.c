#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 整数逆序 */
    int num;
    //scanf("%d", &num);
    num = 12345;
    int ret = 0;
    int digit = 0;
    while (num > 0)
    {
        printf("num = %d,", num);
        digit = num % 10;
        ret = 10 * ret + digit;
        printf("digit = %d,ret = %d\n", digit, ret);
        num /= 10;
    }
    return 0;
}
