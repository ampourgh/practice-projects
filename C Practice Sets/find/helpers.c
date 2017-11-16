/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
void sort(int values[], int n);

bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int m=0;
    int b = 0, e = n-1;

    do
    {
        //number list split in half gives the midpoint
        int m = (b + e)/2;

       printf("%i\n", values[m]);
        //if midpoint is the value, return "found needle in Haystack!"
        if (value == values[m])
        {
            return true;
        }
        //if value is larger than where midpoint lies in the values, increment post-midpoint to end of the page.
        else if (value > values[m])
        {
            b = m + 1;
        }

        //vice versa
        else if (value < values[m])
        {
            e = m - 1;
        }
        else if (m == 0 || m == n - 1 || m == n)
        {
            return false;
        }

    }
    while(m != 0 || m != n-1 || m - n-2);
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm

        for (int l = 0; l < n - 1; l++)
        {
            int didswap = 0;
            for (int r = l + 1; r < n; r++)
            {
                if (values[l] > values[r])
                {
                    int s = values[l];
                    values[l] = values[r];
                    values[r] = s;
                    didswap++;
                }

                // if (values[l] <= values[r])
                // {
                //     values[l] = valuesr;
                //     values[r] = valuesl;
                // }
            }
        if(didswap == 0)
        {
            break;
        }
        }
}
