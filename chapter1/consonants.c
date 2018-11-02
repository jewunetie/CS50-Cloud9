#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Give me a string: ");
    string s = get_string();
    
    int length = strlen(s);
    
    int i= 0;
    for (i = 0; i < length; i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            
        }
        else if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            
        }
        else
        {
            printf("%c", s[i]);
        }
    
    }
    printf("\n");
}