#include<stdio.h>
int main(int argc, char const *argv[])
{
    double sum = 0;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0/i;
        printf("%.6lf\n",sum);
    }
    printf("sum = %.6lf",sum);
    return 0;
}
