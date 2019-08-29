/*
 *This program will figure out the BMI of a person
 *using weight in pounds and height in inches.
 *Also, it will tell the user if they are underweight,
 *Normal, overweight, or Obese based on their BMI.
 *Written by Andrew Delia
 *October 10, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double wt, ht;
    double BMI;
    printf("This program will determine what your body mass index is. \n");
    printf("Please enter the weight in pounds: ");
    scanf("%lf", &wt);
    printf("Now please enter the height in inches: ");
    scanf("%lf", &ht);
    BMI = (703*wt)/(ht * ht);
    
    if (BMI < 18.5)
        printf("The BMI of this person is %8.1f and is categorized as Underweight", BMI);
    else if ((BMI >= 18.5) && (BMI < 25.0))
        printf("The BMI of this person is %8.1f and is categorized as Normal", BMI);
    else if ((BMI >= 25.0) && (BMI < 30.0))
        printf("The BMI of this person is %8.1f and is categorized as Overweight", BMI);
    else
        printf("The BMI of this person is %8.1f and is categorized as Obese", BMI);


    return 0;
}
