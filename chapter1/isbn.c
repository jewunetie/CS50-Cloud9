#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // using long long bc there are too many bytes
    // getting user input
    long long isbn;
    do
    {
        printf("ISBN: ");
        isbn = get_long_long();
    } while ((isbn <= 0) || (isbn > 9999999999));
    
    // isolating the tenth digit
    int tenthDigit = isbn % 10;
    isbn = isbn / 10;
    
    // the value I am multipying with
    int mult;
    mult = 10;
    
    // finding the sum
    int total;
    for (int i = 0; i <= 9; i++)
    {
        mult = mult - 1;
        int digit = isbn % 10;
        total = (mult * digit) + total;
        isbn = isbn / 10;
    }
    
    // comparing the sum to the tenth digit
    if (tenthDigit == total % 11)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}