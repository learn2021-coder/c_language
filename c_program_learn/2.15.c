#include<stdio.h>
#include<math.h>
int main(){
    double sum = 0;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0/(3*i - 2)*pow(-1,i-1);
    }
    printf("sum = %.3lf\n",sum);
}