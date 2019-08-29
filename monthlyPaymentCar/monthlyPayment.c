/*
 *This program will figure out my monthly payment will be when given the
 *car's purchase price, the monthly interest rate, and the time period
 *over which I will pay the loan back.
 *Written by Andrew Delia
 *September 28, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n; //number of payments
    double P; //amount borrowed
    double a; //annual interest rate
    double i; //monthly interest rate
    double mp; //monthly payment



    printf("Please put in the amount borrowed to get this car: ");
    scanf("%lf", &P);
    printf("Next, put in the annual interest rate (i.e. 5.5percent = 5.5, 4percent = 4): ");
    //For some reason, the % sign doesn't show up when you run it.
    scanf("%lf", &a);
    printf("Finally, put in the number of payments: ");
    scanf("%d", &n);
    a = a / 100;
    i = a / 12;
    double power = pow(1+i,-n);
    mp = (i*P)/(1-power);
    printf("The calculated monthly payment for the car is %8.2f\n", mp);

    return 0;
}
