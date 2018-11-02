#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int min;
    printf("Minutes:");
    min = get_int();
    int bottles;
    bottles = min * 12;
    printf("Bottles: %d\n", bottles);
}