#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    // get the name from user
    string name = get_string();
    int length = strlen(name);
    
    // printing the intial of the first name
    printf("%c", toupper(name[0]));
    
    // setting up a loop to print the initial of the other name
    for (int i = 0; i < length; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    
    // creating a new line
    printf("\n");
}

