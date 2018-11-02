#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // prevent the user from inputting less than or more than two arguments
    if (argc != 4)
    {
        printf("Usage: ./calc <number> <operator> <number>\n");
        return 1;
    }
    
    // create variables for the numbers
    float number1 = atof(argv[1]);
    float number2 = atof(argv[3]);
    
    // variable for the output
    float total;
    
    // addition
    if (argv[2][0] == '+')
    {
        total = number1 + number2;
    }
    // substraction
    else if (argv[2][0] == '-')
    {
        total = number1 - number2;
    }
    // multiplication
    else if (argv[2][0] == 'x')
    {
        total = number1 * number2;
    }
    // division
    else if (argv[2][0] == '/')
    {
        total = number1 / number2;
    }
    // module
    else if (argv[2][0] == '%')
    {
        total = fmod(number1, number2);
    }
    // if all else fails and it is an invalid operator
    else
    {
        printf("INVALID OPERATOR");
        return 1;
    }
    
    // print the total
    printf("%f\n", total);
    return 0;
}