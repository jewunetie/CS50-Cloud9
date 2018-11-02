#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // prevent the user from inputting less than or more than two arguments
    if (argc != 2)
    {
    printf("Usage: ./fahrenheit <number>\n");
    return 1;
    }
    
    // convert from celsius to fahrenheit
    else
    {
        float celsius = atof(argv[1]);
        float fahr = (celsius * 9/5) + 32;
        printf("F: %.1f\n", fahr);
    }
    
    return 0;
}