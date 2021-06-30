#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    scanf("%d", &input);
    if (input < 0)
    {
        printf("sign(%d) = -1", input);
    }
    else if (input == 0)
    {
        printf("sign(%d) = 0", input);
    }
    else
    {
        printf("sign(%d) = 1", input);
    }

    return 0;
}
