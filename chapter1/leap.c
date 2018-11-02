#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int year;
    printf("Year:\n");
    year = get_int();
    if (year % 400 == 0)
    {
        printf("It is a Leap Year!\n");
    }
    else if (year % 100 == 0)
    {
        printf("It is not a Leap Year.\n");
    }
    else if (year % 4 == 0)
    {
        printf("It is a Leap Year!\n");
    }
    else
    {
        printf("It is not a Leap Year.\n");
    }
}