/*
 *This program will verify whether a 12-digit UPC is valid or not.
 *The program will ask the user for all 12 digits, then will get a check digit
 *to determine if the check digit matches with the last digit in the UPC.
 *Written by Andrew Delia
 *November 9, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>

int main(void)
{
    int array[12];
    int j;
    int sum_odd;
    int sum_even;
    int total;
    int check_digit;
    int last_digit;
    printf("Enter the first digit in the UPC code (0-9): ");
    scanf("%d", &array[0]);
    printf("Enter the second digit in the UPC code (0-9): ");
    scanf("%d", &array[1]);
    printf("Enter the third digit in the UPC code (0-9): ");
    scanf("%d", &array[2]);
    printf("Enter the fourth digit in the UPC code (0-9): ");
    scanf("%d", &array[3]);
    printf("Enter the fifth digit in the UPC code (0-9): ");
    scanf("%d", &array[4]);
    printf("Enter the sixth digit in the UPC code (0-9): ");
    scanf("%d", &array[5]);
    printf("Enter the seventh digit in the UPC code (0-9): ");
    scanf("%d", &array[6]);
    printf("Enter the eighth digit in the UPC code (0-9): ");
    scanf("%d", &array[7]);
    printf("Enter the nineth digit in the UPC code (0-9): ");
    scanf("%d", &array[8]);
    printf("Enter the tenth digit in the UPC code (0-9): ");
    scanf("%d", &array[9]);
    printf("Enter the eleventh digit in the UPC code (0-9): ");
    scanf("%d", &array[10]);
    printf("Enter the twelveth digit in the UPC code (0-9): ");
    scanf("%d", &array[11]);
    printf("Your UPC code is ");
    for(j = 0; j < 12; j++)
        printf("%d ", array[j]);
    printf("\n");
    sum_odd = array[0]+array[2]+array[4]+array[6]+array[8]+array[10];
    sum_odd = sum_odd * 3;
    sum_even = array[1]+array[3]+array[5]+array[7]+array[9];
    total = sum_odd + sum_even;
    check_digit = total % 10;
    printf("The check digit is %d\n", check_digit);
    
    if(check_digit == 0)
    {
        printf("Checking if 12th digit is 0\n");
        if(array[11] == 0)
            printf("last digit and checking digit match: Valid UPC");
        else
            printf("last digit and checking digit don't match: invalid UPC");
    }
    else
    {
        printf("Subtracting the checking digit from 10...\n");
        last_digit = 10 - check_digit;
        printf("final check digit: %d\n", last_digit);
        if(last_digit == array[11])
            printf("Both match: UPC is valid\n");
        else
            printf("They don't match: UPC is invalid\n");
    }
    
    return 0;
}
