#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n;
    scanf("%d %d",&m,&n);
    if (n != 0 )
    {
        printf("%d + %d = %d\n",m,n,m+n);
        printf("%d - %d = %d\n",m,n,m-n);
        printf("%d * %d = %d\n",m,n,m*n);
        printf("%d / %d = %d\n",m,n,m/n);
    }
    
    return 0;
}
