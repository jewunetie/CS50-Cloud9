#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get celsius from user
    printf("C: ");
    float celsius = get_float();
    
    // convert to fahrenheit; no float errors b/c celsius is a float
    float fahrenheit = (celsius * 9) / 5 + 32;
    printf("F: %.1f\n", fahrenheit);
}
