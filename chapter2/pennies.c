#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // prevent the user from inputting less than or more than two arguments
    if (argc != 3)
    {
        printf("Usage: ./pennies <days in month> <pennies on the first day>\n");
        return 1;
    }
    
    // convert string to int for days
    int days = atoi(argv[1]);
    if ((days < 28) || (days >31))
    {
        printf("Error: INVALID DAYS (HAS TO BE b/w 28 & 31)\n");
        return 1;
    }
    
    // convert string to int for pennies
    int pennies2 = atoi(argv[2]);
    if (pennies2 <= 0)
    {
        printf("Error: INVALID PENNIES (HAS TO BE > 0)\n");
        return 1;
    }
    else
    {
        // convert from int to double
        double pennies = pennies2;
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
    return 0;
}