/*
 *This program will demonstrate the problem of representational
 *error by adding n copies of 1/n and then compare the sum to 1.
 *The fractions will go from 1/2 to 1/30.
 *Written by Andrew Delia
 *November 2, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>

int main(void)
{
    int i;
    int j;
    for (i = 2; i <= 30; i++)
    {
        float fraction = 1.0 / i;
        float total = 0.0;

        for (j = 0; j < i; j++)
        {
            total = total + fraction;
        }

        if (total == 1)
            printf("adding %d 1/%d's gives %.8f, which is 1.\n", i, i, total);
        else if (total < 1)
            printf("adding %d 1/%d's gives %.8f, which is less than 1.\n", i, i, total);
        else if (total > 1)
            printf("adding %d 1/%d's gives %.8f, which is greater than 1.\n", i, i, total);
    }

    return 0;
}
