/*
 *This program will convert a temperature in degrees fahrenheit to degrees Celsius
 *Written by Andrew Delia
 *September 20, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>

int main(void)
{
    double fahrenheit;
    double celsius;
    double fraction = 5.0 / 9.0;
    printf("Enter the degrees in Fahrenheit you want to convert:   ");
    scanf("%lf", &fahrenheit);
    celsius = fraction * (fahrenheit - 32);
    printf("The degrees you wanted converted is:  %8.2f\n", fahrenheit);
    printf("The degrees in celsius is:  %8.2f\n", celsius);
    return 0;
}
