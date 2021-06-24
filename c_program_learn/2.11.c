#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x;
    scanf("%lf", &x);
    if (x >= 0)
        printf("f(%.2lf) = %.2lf", x, pow(x, 0.5));
    else
        printf("f(%.2lf) = %.2lf", x, pow(x + 1, 2) + 2 * x + 1 / x);
    return 0;
}
