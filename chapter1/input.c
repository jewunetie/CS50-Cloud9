#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input;
    do
    {
        printf("Give me a positive number: ");
        input = get_int();
    }  while (input <= 0);
    printf("The number is %d\n", input);
}