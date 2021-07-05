#include <stdio.h>
int main(int argc, char const* argv[])
{
    /* 
    给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、10.20元/公斤。

    首先在屏幕上显示以下菜单：
    [1] apple
    [2] pear
    [3] orange
    [4] grape
    [0] exit
    用户可以输入编号1~4查询对应水果的单价。当连续查询次数超过5次时，程序应自动退出查询；不到5次而用户输入0即退出；输入其他编号，显示价格为0。
     */
    int arr[100];
    int i = 0;

    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");

    while (scanf("%d", &arr[i]) != EOF && arr[i] != 0) {
        i++;
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] == 1) {
            printf("price = 3.00\n");
        } else if (arr[i] == 2) {
            printf("price = 2.5\n");
        } else if (arr[i] == 3) {
            printf("price = 4.1\n");
        } else if (arr[i] == 4) {
            printf("price = 12.20\n");
        } else if (arr[i] == 0) {
            printf("price = 0.00\n");
        } else {
            printf("price = 0.00\n");
            break;
        }
    }
    return 0;
}
