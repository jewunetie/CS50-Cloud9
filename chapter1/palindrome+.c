#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    // get string from user
    printf("Give me a string: ");
    string s = get_string();
    
    // calculate length of string
    int length = strlen(s);
    
    // set up algorithim to check first array with end array
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        s[i] = toupper(s[i]);
        if (s[i] != (>= 'A') && (<= 'Z'))
        {
            s[i] = s[i + 1];
        }
        // check if the arrays aren't equal to each other
        if (toupper(s[i]) != toupper(s[length - (1 + i)]))
        {
            printf("IT IS NOT A PALINDROME!");
            // stop the loop
            break;
        }
        else
        {
            count++;
        }
    }
    
    // a rough method to display if the string is a palindrome
    if (count == length)
    {
        printf("IT IS A PALINDROME! \n");
    }
}