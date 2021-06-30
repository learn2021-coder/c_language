#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &input);
        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
            letter++;
        else if (input == ' ' || input == '\n')
            blank++;
        else if (input >= '0' && input <= '9')
            digit++;
        else
            other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}
