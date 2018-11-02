#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
   // converting the user input of dollars into cents
   
    float dollar;
    do
    {
        printf("How much change is owed? \n");
        printf("$");
        dollar = get_float();
    } while (dollar <= 0);
    int cent;
    cent = round(dollar * 100);
    
    // declaring my variables to represent the different coins
    
    int quarter;
    quarter = 0;
    int dime;
    dime = 0;
    int nickel;
    nickel = 0;
    int penny;
    penny = 0;
    
    // cycles through until the cent count is equal to zero
    do
    {
        // quarters
        if (cent >= 25)
        {
            do
            {
                cent = cent - 25;
                quarter = quarter + 1;
            } while (cent >= 25);
        }
        
        // dimes
        else if (cent >= 10)
        {
            do
            {
                cent = cent - 10;
                dime = dime + 1;
            } while (cent >= 10);
        }
        
        // nickels
        else if (cent >= 5)
        {
            do
            {
                cent = cent - 5;
                nickel = nickel + 1;
            } while (cent >= 5);
        }
        
        // pennies (don't need to state cent >= 1)
        else
        {
            do
            {
                cent = cent - 1;
                penny = penny + 1;
            } while (cent >= 1);
        }
    } while (cent != 0);
    
    // calculating the total number of coins needed
    int total;
    total = quarter + dime + nickel + penny;
    printf ("%d\n", total);
}