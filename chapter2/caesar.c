#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // prevent the user from inputting less than or more than two arguments
    if (argc < 3)
    {
        printf("Usage: ./caesar <secret key> <word> <word>....\n");
        return 1;
    }
    
    // convert string into an integar for the secret key
    int k = atoi(argv[1]);
    
    // variable for the length of a string
    int len;
    
    // loop for each string after the secret key
    for (int i = 2; i < argc; i++)
    {
        // calculating the length of each string
        len = strlen(argv[i]);
        
        // loop for each character in a string
        for (int j = 0; j < len; j++)
        {
           
           // if the character is in uppercase
            if ((argv[i][j] >= 'A') && (argv[i][j] <= 'Z'))
            {
                // moves the letter 'k' places and prints it
                argv[i][j] = ((argv[i][j] - 'A' + k) % 26) + 'A';
                printf("%c", argv[i][j]);
            }
            
            // if the character is in lowercase
            else if ((argv[i][j] >= 'a') && (argv[i][j] <= 'z'))
            {
                // moves the letter 'k' places and prints it
                argv[i][j] = ((argv[i][j] - 'a' + k) % 26) + 'a';
                printf("%c", argv[i][j]);
            }
            
            // if the character isn't a letter
            else
            {
                printf("%c", argv[i][j]);
            }
        }
        
        // to separate the words
        printf(" ");
    }
    
    printf("\n");
}