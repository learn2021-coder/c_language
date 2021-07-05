#include <stdio.h>
int main(int argc, char const* argv[])
{
    /*
    本题要求将输入的任意3个整数从小到大输出。
    */
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int i;
    int index;
    int j;
    for (i = 0; i < 2; i++) {
        index =i;
        for (j = i + 1; j < 3; j++) {
            if (arr[j] <= arr[index]) {
                index = j;
            }
        }
        //交换两个数的值
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    printf("%d->%d->%d\n", arr[0], arr[1], arr[2]);
    return 0;
}
