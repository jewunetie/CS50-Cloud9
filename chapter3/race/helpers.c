/**
 * helpers.c
 *
 * CS50 AP
 * Sort Race
 * 
 * Name: ___________________________
 *
 * Helper functions for the sort race
 */

// printf("%4d", value[i]);
#include <cs50.h>
#include "helpers.h"
#include <stdio.h>

/**
 * Returns true if str is a valid flag (-a, -b, -r, or -s), false otherwise
 */
bool check_flag(char* str)
{ 
    // TODO
    return true;
}

/**
 * Sorts array of n values using bubble sort.
 */
void bubble(int values[], int n)
{ 
    
    bool sorted = false;
    do
    {
        int counter = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (values[i] > values[i+1])
            {
                int swap = values[i];
                values[i] = values[i + 1];
                values[i + 1] = swap;
            }
            else
            {
                counter++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%4d",values[i]);
        }
        printf("\n");
        if (counter == n - 1)
        {
            sorted = true;
        }
    } while (sorted == false);
    return;
}

/**
 * Sorts array of n values using selection sort.
 */
void selection(int values[], int n)
{ 
    int unsorted = 0;
    int index;
    int smallest;
    do
    {
        smallest = values[unsorted];
        for (int i = unsorted; i < n; i++)
        {
            if (smallest > values[i])
            {
                smallest = values[i];
                index = i;
            }
        }
        if (values[unsorted] != smallest)
        {
            values[index] = values[unsorted];
            values[unsorted] = smallest;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%4d",values[i]);
        }
        printf("\n");
        unsorted++;
    } while (unsorted != n);
    return;
}

/**
 * Sorts array of n values using insertion sort.
 */
void insertion(int values[], int n)
{ 
    int sorted = 0;
    int smallest;
    do
    {
        smallest = values[sorted];
        for (int i = 0; i < sorted; i++)
        {
            if (smallest < values[i])
            {
                int swap = values[i];
                values[i] = smallest;
                for(int k = i + 1; k <= sorted; k++)
                {
                    int swap2 = values[k];
                    values[k] = swap;
                    swap = swap2;
                }
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%4d",values[i]);
        }
        printf("\n");
        sorted++;
    } while (sorted != n);
    
/*    int index;
    for (int j = 0; j < n; j++)
    {
        int swap = values[j];
        for(int i = 0; i >= 0; i--)
        {
            if (swap < values[i])
            {
                swap = values[i];
                index = i;
                for(int k = 0; k < j - i; k++)
                {
                    if (k == 0)
                    {
                        values[i] = values[j];
                    }
                    else
                    {
                        int swap2 = values[i + 1];
                        values[i + 1] = swap;
                        swap = swap2;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        {
            printf("%4d",values[i]);
        }
        printf("\n"); */
    return;
}


