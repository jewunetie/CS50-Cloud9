#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // the factors that are used to make the product
    for ( int row = 1; row <= 12; row++)
    {
        for (int col = 1; col <= 12; col++ )
        {
            int product = col * row;
            printf("%d\t", product);
        }
        printf("\n");
    }
}