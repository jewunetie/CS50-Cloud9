#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int max3(int a, int b, int c);

int main(void)
{
    int a = 0, b = 0, c = 0;
    do
    {
    printf("Enter three test scores: \n");
    a = get_int();
    b = get_int();
    c = get_int();
    } while ((a < 0) || (b < 0) || (c < 0));
    
    printf("%d is the highest test score.\n", max3(a, b, c));
}

int max3(int a, int b, int c)
{
    int highest = a;
    if (b > highest)
    {
        highest = b;
    }
    if (c > highest)
    {
        highest = c;
    }
    return highest;
}