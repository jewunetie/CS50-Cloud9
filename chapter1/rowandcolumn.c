#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int row = 10; row >= 0; row--)
    {
        for(int col = 0; col < 10; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}