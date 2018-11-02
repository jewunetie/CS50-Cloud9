#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // getting user input for card number
    long long input;
    do
    {
        printf("Number: ");
        input = get_long_long();
    } while((input < 0) || (input > 9999999999999999));
    
    // since I am going to use the user input in different things
    // I will store the user input in different variables
    
    // calculating the products
    long long number1 = input;
    int digit;
    int total1 = 0;
    for (long long i = input; i > 10; i = i / 10 )
    {
        number1 = number1 / 10;
        digit = number1 % 10;
        int doubledDigit = digit * 2;
        int digit2 = 0;
        
        // to separate the digits of the doubled product
        if (doubledDigit > 9)
        {
            digit2++;
        }
        total1 = digit2 + (doubledDigit % 10) + total1;
        number1 = number1 / 10;
    }
    
    // calculating the sum of the digits that weren't doubled
    long long number2 = input;
    int digit3;
    int total2 = 0;
    for (long long k = input; k > 10; k = k / 10)
    {
        digit3 = number2 % 10;
        total2 = digit3 + total2;
        number2 = number2 / 100;
    }
    
    // adding all the totals together
    int total3 = total1 + total2;
    
    // checking if the number is valid
    long long number3 = input;
    if (total3 % 10 == 0)
    {
        do
        {
            number3 = number3 / 10;
        } while (number3 > 10);
        
        // if it is Visa Number
        if (number3 == 4)
        {
            printf("VISA\n");
        }
        
        // if it is an American Express Number
        else if (number3 == 3)
        {
            printf("AMEX\n");
        }
        
        // if it is a Mastercard Number
        else if (number3 == 5)
        {
            printf("MASTERCARD\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
    