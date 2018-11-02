#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // prevent the user from inputting less than or more than two arguments
    if (argc != 2)
    {
        printf("Usage: ./vigenere <secret word>...\n");
        return 1;
    }
    
    // calculate length of keyword
    int keyLen = strlen(argv[1]);
    int k = 0;
    
    
    // get user input
    printf("Print message to encode: ");
    string input = get_string();
    
    // variable for the length of a string
    int len = strlen(input);
    
    // loop for each string after the secret key
    for (int i = 0; i < len; i++)
    {
        if ((argv[1][k % keyLen] >= 'A') && (argv[1][k % keyLen] <= 'Z'))
        {
            argv[1][k % keyLen] = tolower(argv[1][k % keyLen]);
        }
        int index = argv[1][k % keyLen] - 'a';
        
        // if the character is in uppercase
        if ((input[i] >= 'A') && (input[i] <= 'Z'))
        {
            // moves the letter 'k' places and prints it
            input[i] = (((input[i] - 'A') + index) % 26) + 'A';
            printf("%c", input[i]);
            // moves the position of the keyword one place forward
            k++;
        }
            
        // if the character is in lowercase
        else if ((input[i] >= 'a') && (input[i] <= 'z'))
        {
            // moves the letter 'k' places and prints it
            input[i] = ((input[i] - 'a' + index) % 26) + 'a';
            printf("%c", input[i]);
            // moves the position of the keyword one place forward
            k++;
        }
        // if the character isn't a letter
        else
        {
            printf("%c", input[i]);
        }
        
    }
    
    printf("\n");
}