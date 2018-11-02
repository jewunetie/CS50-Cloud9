#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int digit(int a, int b, int c);

int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("Enter an integar: ");
    a = get_int();
    printf("Enter an integar: ");
    b = get_int();
    printf("Enter an integar: ");
    c = get_int();
    
    printf("%d is the number digits.\n", digit(a, b, c));
}

int digit(int a, int b, int c)
{
    if (a < 0)
    {
        a = a * -1;
    }
    if (b < 0)
    {
        b = b * -1;
    }
    if (c < 0)
    {
        c = c * -1;
    }
    
    int count = 1;
    for (int i = a; i > 10; i /= 10)
    {
        count++;
    }
    count ++;
    for (int i = b; i > 10; i /= 10)
    {
        count++;
    }
    count++;
    for (int i = c; i > 10; i /= 10)
    {
        count++;
    }
    return count;
}
