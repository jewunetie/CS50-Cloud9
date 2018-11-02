/**
 * helpers.c
 *
 * CS50 AP
 * Seek
 *
 * Helper functions.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    for(int i = 0; i < strlen(values); i++)
    {
        if (values[i] == n)
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
