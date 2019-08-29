/*
 *This program will ask the user to repeatedly
 *ask the user for positive integers until they send
 *a negative integer to end the program.
 *With these positive integers, the program will determine
 *whether or not the value is a multiple of 7,11, or 13, if the sum
 *of the digits of the integer is even or odd, and whether or not
 *the value is a prime number.
 *Written by Andrew Delia
 *October 26, 2018
 *Language: C (gcc target)
 */


#include <stdio.h>

void answers (int value, int array[]);

int main(void)
{
    int value;
    printf("Enter a positive integer (0 or less will end program): ");
    scanf("%d", &value);
    while (value > 0)
    {
        int array[3];
        answers(value, array);
        if (array[0] == 1)
            printf("The number %d is a multiple of 7, 11, or 13 \n", value);
        else
            printf("The number %d is not a multiple of 7, 11, or 13 \n", value);
        if (array[1] == 1)
            printf("The number %d 's digits sum is even \n", value);
        else
            printf("The number %d 's digits sum is odd \n", value);
        if (array[2] == 1)
            printf("The number %d is not a prime number \n", value);
        else
            printf("The number %d is a prime number \n", value);

        printf("Enter a positive integer (0 or less will end program): ");
        scanf("%d", &value);
    }
    printf("You have ended the program. Thank you for using it!");

    return 0;
}

/*
 * This function will do all the work to get all 3 answers done
 * Printing out will be dealt in main
 *Written by Andrew Delia
 *October 26, 2018
 *Language: C (gcc target)
 */

void answers (int value, int array[])
{
    //int mult, sum, prime;
    int sum = 0;
    int prime;
    int counter = 0;
    if ((value % 7 == 0) || (value % 11 == 0) || (value % 13 == 0))
        array[0] = 1;
    else
        array[0] = 0;

    for (prime = 2; prime <= value / 2; prime++)
    {
        if (value % prime == 0)
            counter++; //Had to add a counter to make sure it would work
        //else
          //  array[2] = 0; //forgot to put this in the first submitted file
    }
    if (counter > 0)
        array[2] = 1; //put if and else statement outside of for loop to work
    else
        array[2] = 0;

    while (value != 0)
    {
        sum = sum + (value % 10);
        value = value / 10;
    }
    if (sum % 2 == 0)
        array[1] = 1;
    else
        array[1] = 0;

    return ;
}

