#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // getting user input
    // setting limiting interval between 0 and 23
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    } while ((height < 0) || (height > 23));
    
    // hash is the number of hashtag in each line
    int hash;
    hash = 2;
    int space;
    space = height - 2;
    for (int i = 1; i <= height; i++)
    {
        // making the space
        for (int n = space; n >= 0; n--)
        {
            printf(" ");
        }
        
        // making the hashtags
        for (int k = 1; k <= hash; k++)
        {
            printf("#");
        }
        printf("\n");
        hash++;
        space--;
    }
    // repeats until selected height
}