#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int side;
    side = 0;
    do
    {
        printf("What is the side length? ");
        side = get_int();
    } while ( side < 4 || side > 10);
    
    side = side - 1;
    for (int i = 0; i <= side; i++)
    {
        printf("# ");
    }
    printf("\n");
    for (int j = 1; j <= side - 1; j++)
    {
        printf("# ");
        for (int k=1; k <= side - 1; k++)
        {
            printf("  ");
        }
        printf("# \n");
    }
    for (int m = 0; m <= side; m++)
    {
        printf("# ");
    }
    printf("\n");
}