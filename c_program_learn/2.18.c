#include <stdio.h>
double fun (int n)
{
    double funorial = 1;
    for (int i = 1; i <= n; i++)
    {
        funorial *= i;
    }
    return funorial;
}

int main(int argc, char const *argv[])
{
    //m<=n
    int m,n;
    scanf("%d %d",&m ,&n);
    double result = fun(n)/(fun(n-m)*fun(m));
    printf("result = %.0lf\n",result);
    return 0;
}
