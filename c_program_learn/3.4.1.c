#include <stdio.h>
int main(int argc, char const* argv[])
{
    /* 
        本题要求编写程序读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩到五分制成绩的转换规则：
        大于等于90分为A；
        小于90且大于等于80为B；
        小于80且大于等于70为C；
        小于70且大于等于60为D；
        小于60为E。
     */
    int n;
    int arr[1000];
    int count[5] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++) {
        if (arr[j] >= 90) {
            count[0]++;
        } else if (arr[j] >= 80) {
            count[1]++;
        } else if (arr[j] >= 70) {
            count[2]++;
        } else if (arr[j] >= 60) {
            count[3]++;
        } else {
            count[4]++;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", count[i]);
        } else {
            printf("%d ", count[i]);
        }
    }
    return 0;
}