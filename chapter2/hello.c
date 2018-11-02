#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
    printf("Usage: ./hello <name>\n");
    return 1;
    }
    else
    {
        printf(" %s\n", argv[1]);
    }
    
    return 0;
}