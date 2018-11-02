#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float cel;
    printf("C:");
    cel = get_float();
    float fahr;
    fahr = (cel * 9/5) + 32;
    printf("F: %.1f\n", fahr);
}