#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double sum = 0;
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        sum += pow(i, 2) + 1.0 / i;
    }
    printf("sum = %.6lf", sum);
    return 0;
}
