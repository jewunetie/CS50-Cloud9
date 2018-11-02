#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./commando <int> <string> <float>\n");
        return 1;
    }
    for (int i = 0; i < argc; i++)
    {
        printf("argument %d is %s\n", i, argv[i]);
    }
    int n = atoi(argv[1]);
    string s = argv[2];
    float f = atof(argv[3]);
    
    printf("The args are %d, %s, %f", n,s,f);
    return 0;
}