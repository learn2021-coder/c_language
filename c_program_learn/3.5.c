#include <stdio.h>
int main(int argc, char const* argv[])
{
    // 21世纪 2001<=x<=2100
    //输入一个数字,输出这个数字之前的所有闰年
    int year;
    scanf("%d", &year);
    // year = 2048;
    int count = 0;
    if (year >= 2001 && year <= 2100) {
        for (int i = 2001; i <= year; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                printf("%d\n", i);
                count++;
            }
        }
        if (count == 0) {
            printf("None");
        }
    } else {
        printf("Invalid year!\n");
    }
    return 0;
}
