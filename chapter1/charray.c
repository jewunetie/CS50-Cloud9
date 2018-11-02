#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("What do you want to display? ");
    string s = get_string();
    int len = strlen(s);
    
    for (int i = 0; i < len; i++)
    {
        printf("%c\n", s[i]);
    }
}