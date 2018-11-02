#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // declare the array
    // int temp[4];
    
    int temp[] = {50, 42, 75, 100};
    
    // initialize the array
    for (int i = 0; i < 4; i++)
    {
        printf("What's the temp: ");
        temp[i] = get_int();
    }
    
    // show the temps to the user
    for (int i = 0; i < 4; i++)
    {
        printf("%d", temp[i]);
    }
    printf("\n");
}