#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    int count = 0;
    double sum = 0;
    int score;
    for (int i = 0; i < num; i++)
    {

        scanf("%d", &score);
        sum += score;
        if (score >= 60)
            count++;
    }
    double average;
    if (num == 0) average =0;
    else average = sum /num;
    
    printf("average = %.1f\n", average);
    printf("count = %d", count);
    return 0;
}
