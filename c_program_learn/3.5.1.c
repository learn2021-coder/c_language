#include <math.h>
#include <stdio.h>
int main(int argc, char const* argv[])
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double l1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double l2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double l3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    if (l1 + l2 > l3 && l1 - l2 < l3 && l2 -l1 <l3) {
        //L=周长,A=面积
        double l = l1 + l2 + l3;
        double s = l / 2;
        double a = sqrt(s * (s - l1) * (s - l2) * (s - l3));
        printf("L = %.2lf, A = %.2lf", l, a);
    } else {
        printf("Impossible");
    }
    return 0;
}
