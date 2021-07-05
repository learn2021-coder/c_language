#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 
        阶梯电价计算式：
        m<=50 ,cost=0.53*m
        m>50,cost=26.5+0.58*m
     */
    double m;
    double cost;
    //scanf("%lf", &m);
    m =10;

    if (m < 0)
    {
        printf("Invalid Value!");
    }
    else if (m <= 50)
    {
        cost = 0.53 * m;
        printf("cost = %.2lf", cost);
    }
    else
    {
        cost = 26.5 + 0.58 * (m-50);
        printf("cost = %.2lf", cost);
    }
    return 0;
}