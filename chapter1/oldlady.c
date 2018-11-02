#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

void swallow(string animal);
void die();
void dontknow();
void swallowed(string animal2);
void catched(string animal2);
void stanza3();
void stanza4();
void stanza5();
void stanza6();
void stanza7();
void alive();

int main(void)
{
    string animal[ ] = {"fly", "spider", "bird", "cat", "dog", "goat", "cow"};
    
    // first stanza
    string x = animal[0];
    swallow(x);
    dontknow();
    
    for (int i = 1; i < 6; i++)
    {
        swallow(animal[i]);
        
        // setting parameters to add the second line of each stanza
        if (i == 2)
        {
            stanza3();
        }
        if (i == 3)
        {
            stanza4();
        }
        if (i == 4)
        {
            stanza5();
        }
        if (i == 5)
        {
            stanza6();
        }
        if (i == 6)
        {
            stanza7();
        }
        
        // a loop for the repitition inside each stanza
        if (i != 1)
        {
            for (int j = i; j > 0; j--)
            {
                if (j != 1)
                {
                    x = animal[j];
                    swallowed(x);
                    string c = animal[j - 1];
                    catched(c);
                }
            }
        }
        
        // the last four lines of each stanza
        die();
    }
    
    // the last stanza
    x = "horse";
    swallow(x);
    alive();
}

void swallow(string animal)
{
    printf("I know an old lady who swallowed a %s\n", animal);
}

void dontknow()
{
    printf("I don't know why she swallowed the fly \nPerhaps she'll die \n\n");
}

void swallowed(string animal)
{
    printf("She swallowed the %s ", animal);
}

void catched(string animal2)
{
    printf("to catch the %s\n", animal2);
}

void die()
{
    printf("That wriggled and jiggled and tickled inside her \nShe swallowed the spider to catch the fly \nBut I don't know why she swallowed the fly \nPerhaps she'll die \n\n");
}

void stanza3()
{
    printf("How absurd to swallow a bird\n");
}

void stanza4()
{
    printf("Imagine that. She swallowed a cat.\n");
}

void stanza5()
{
    printf("What a hog to swallow a dog!\n");
}

void stanza6()
{
    printf("Opened her throat and down went the goat!\n");
}

void stanza7()
{
    printf("I don't know how she swallowed the cow\n");
}

void alive()
{
    printf("She's alive and well of course!\n");
}