#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give me a number: ");
    int num = get_int();
    
    if (num > 0)
    {
        printf("Thanks for being positive!\n");
    }
    else if (num == 0)
    {
        printf("That's a big zero!\n");
    }
    else
    {
        printf("Dont be so negative!\n");
    }
    printf("Thanks for playing\n");
}