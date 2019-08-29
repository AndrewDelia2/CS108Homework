/*
 *This program will help figure out whether
 *or not a number is a perfect square while in a loop.
 *The program will ask the user to pick 2 numbers
 *and it will determine all the numbers between the 2 whether or not
 *they are perfect squares.
 *It was also tally up how many perfect square numbers between the 2.
 *Written by Andrew Delia
 *October 10, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>


int main()
{
    double x, y;
    int square = 0;
    int i;
    printf("Put in an integer greater than 0: ");
    scanf("%lf", &x);
    printf("Put in an integer greater than the previous: ");
    scanf("%lf", &y);

    while (x <= y)
    {
        for (i = 1; i <= x; i++)
        {
            if (x/i == i)
            {
                printf("%8.0f is a perfect square number. \n", x);
                square++;
            }

        }
        x++;
    }
    if (square == 0)
        printf("No perfect square numbers between them. \n");
    else
        printf("There is a total of %d perfect square numbers. \n", square);

    return 0;
}
