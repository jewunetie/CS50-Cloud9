#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // making the random numbers based on what time it is
    srand(time(NULL));
    int skittles = rand() % 1024;
    
    // getting the first input from the user
    int input;
    printf("Guess the number between 0 and 1023: \n");
    input = get_int();
    
    // makes sure the user inputs a number in the interval
    if ((input < 0) || (input > 1023))
    {
        printf("Guess a number only between 0 and 1023: \n");
    }
        
    // responses to what the user inputs in order to guide them
    // using the concept of being close to a number or not
    do
    {
        // makes sure the user keeps inputing a number in the interval
        if ((input < 0) || (input > 1023))
        {
            printf("Guess a number only between 0 and 1023: \n");
        }
        // I made ranges to tell the user how close they are
        else if (((input - skittles) > 0 && (input - skittles <= 5)) || ((skittles - input > 0) && (skittles - input <= 5)))
        {
            printf("HOT!!!! Guess Again: \n");
        }
        else if (((input - skittles) > 0 && (input - skittles <= 15)) || ((skittles - input > 0) && (skittles - input <= 15)))
        {
            printf("So close but no cigar! Guess Again: \n");
        }
        else if (((input - skittles) > 0 && (input - skittles <= 25)) || ((skittles - input > 0) && (skittles - input <= 25)))
        {
            printf("Warmer! Guess Again: \n");
        }
         else if (((input - skittles) > 0 && (input - skittles <= 50)) || ((skittles - input > 0) && (skittles - input <= 50)))
        {
            printf("Getting Warm. Guess Again: \n");
        }
         else if (((input - skittles) > 0 && (input - skittles <= 100)) || ((skittles - input > 0) && (skittles - input <= 100)))
        {
            printf("Getting Cold. Guess Again: \n");
        }
         else if (((input - skittles) > 0 && (input - skittles <= 200)) || ((skittles - input > 0) && (skittles - input <= 200)))
        {
            printf("Colder! Guess Again: \n");
        }
         else
        {
            printf("FREEZING! You are really COLD! Guess Again: \n");
        }
        input = get_int();
    } while (input != skittles);
    
    // end game text
    printf("OMG! YOU GOT IT!!!!!! Give yourself a pat on your back! :)\n");
}