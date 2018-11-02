#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float width;
    printf("What is the width of the box? (longest side)");
    width = get_float();
    float height;
    printf("What is the height of the box? (shortest side)");
    height = get_float();
    float length;
    printf("What is the length of the box?");
    length = get_float();
    width = width + (height*2);
    height = 2*(height + length);
    printf("Longer side of paper %f\n", width);
    printf("Shorter side of paper %f\n", height);
}