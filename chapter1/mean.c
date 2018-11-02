#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    // get the number of integers
    int count;
    printf ("How many integers? ");
    count = get_int();
    
    // get the numbers
    int number[count];
    for (int i = 0; i < count; i++)
    {
        printf ("Give me a number: ");
        number[i] = get_int();
    }
    
    // calculate the total of the numbers
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total = number[i] + total;
    }
    
    // calculate average
    int average = total / count;
    printf("The mean of all the number is %d", average);
}