#include <stdio.h>
int main(int argc, char const *argv[])
{
    float x;
    scanf("%f",&x);
    if(x != 0){
        printf("f(%.1f) = %.1f\n",x,1/x);
    }else{
        printf("f(%.1f) = 0.0\n");
    }
    return 0;
}
