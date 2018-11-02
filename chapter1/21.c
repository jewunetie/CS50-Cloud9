#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int input;
   int output;
   output = 0;
    while(output <= 21)
    {
        printf ("Input a number: ");
        input = get_int();
        output = input + output;
        printf ("Sum: %d\n", output);
    }
    printf("Over 21!\n");
}