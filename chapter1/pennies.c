#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int days;
    days = 0;
    do
    {
        printf("Days in month: ");
        days = get_int();
    } while ( days < 28 || days > 31);
    
    // have to use long_long bc it takes more than 4 bytes to store the value
    double pennies;
    do
    {
        printf("Pennies on the first day: ");
        pennies = get_double();
    } while (pennies <= 0);
    
    // total represent the total pennies
    // pennies represent the doubled pennies
    double total;
    double dollars = 0;
    for (int i = 0; i < days; i++)
    {
        total = (pennies * (pow(2,i))) / 100;
        dollars = dollars + total;
    }


    // dollar represent the dollar value of the total pennies
    printf("$%.2f\n", dollars);
}