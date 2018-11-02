#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int output;
    int input;
    for(int i = 0 ; i <= 5 ; i++)
    {
        printf("Input a number: ");
        input = get_int();
        if (input >= output)
        {
            printf("The largest number is %d\n", input);
            output = input;
        }
        else
        {
            printf("The largest number is %d\n", output);
        }
    }
}