#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    printf("What is the length of the first?");
    x = get_float();
    int y;
    printf("What is the length of the second leg?");
    y = get_float();
    float z;
    z = sqrt((x*x) + (y*y));
    printf("The hypotenuse is %f\n", z);
}