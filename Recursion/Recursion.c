/*
 *This program will ask the user for an int value
 *Then it will send the value into the f function where
 *it will determine whether the integer is less than or equal to 0.
 *see more for what it does down at the function commented section
 *Written by Andrew Delia
 *November 26, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>

int f (int x);

int main(void)
{
    int x, y;
    printf ("Enter the value you want tested: ");
    scanf ("%d", &x);
    y = f (x);
    printf ("The answer that you seek is %d", y);
    return 0;
}

/*
 *If the x is less than or equal to 0, it will return the value + 3
 *Where the main function will then print out the answer.
 *Otherwise, the value gets subtracted by 3 and added by 5.
 *It will then add the two numbers up and use that number again
 *This function is recursive.
 *Written by Andrew Delia
 *November 26, 2018
 *Language: C (gcc target)
 */

int f (int x)
{
    if (x <= 0)
    {
        return x+3;
    }
    else
    {
        return f (x - 3) + (x + 5);
    }
}
