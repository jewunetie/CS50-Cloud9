#include <stdio.h>
#include <string.h>
#include <cs50.h>

int factorial(int input);

int main(void)
{
    int number;
    printf("Enter an integer: ");
    number = get_int();
    int input = number;
    factorial(input);
    printf("The factorial of %d is %d\n", input, factorial(input));
}

int factorial(int input)
{
    if   (input == 1)
    {
        return 1;
    }
    else 
    {
        return input * factorial (input - 1);
    }
}