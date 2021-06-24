#include<stdio.h>
int main(int argc, char const *argv[])
{
    int lower,upper;
    int i;
    scanf("%d %d",&lower,&upper);
    if (lower <= upper && upper <= 100 && lower >= 0)
    {
        printf("fahr celsius\n");
        for (i = lower; i <= upper; i+=2)
        {
            printf("%d%6.1f\n",i,(double)5.0*(i-32.0)/9.0);
        }
    }else{
        printf("Invalid.\n");
    }
    return 0;
}




