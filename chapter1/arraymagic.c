#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // get the numbers and organize into different 2d arrays
    long long number[4][4];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Number: ");
            number[j][i] = get_int();
        }
    }
    
    // print the box
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%lld", number[j][i]);
        }
        printf("\n");
    }
    
    int magicsum = -1;
    int sumDia1 = 0;
    int sumDia2 = 0;
    int sumDia = -2;
    bool ismagic = true;
    for (int i = 0; i < 2; i++)
    {
        // calculating the sum of the diagonals
        sumDia1 += number [i][i];
        sumDia2 += number [i][2 - i];
        
        // check if the diagonals are equal to each other
        if (sumDia1 == sumDia2)
        {
            sumDia = sumDia1;
        }
        
        // check the rows and col
        int sumRow = 0;
        int sumCol = 0;
        for (int j = 0; j < 2; j++)
        {
            sumRow += number [i][j];
            sumCol += number [j][i];
        }
        
        if (sumRow == sumCol)
        {
            magicsum = sumCol;
        }
        else
        {
            ismagic = false;
            break;
        }
    }
    
    if (magicsum != sumDia)
    {
        ismagic = false;
    }
    
    if (ismagic)
    {
        printf("It is a Magic Square!!!");
    }
    else
    {
        printf("Not a Magic Square.");
    }
    printf("\n");
}   
    