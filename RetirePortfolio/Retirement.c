/*
 *This program will print out a retirement portfolio, showing
 *how much they will get per year after they retire from
 *working.
 *Written by Andrew Delia
 *October 12, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double annual_rate, contri_rate, return_rate, contribute;
    double starting, closing, earning;
    int start_year, start_salary, end_year, year, salary;

    printf("Starting salary (no , needed): ");
    scanf("%d", &start_salary);
    printf("annual increase rate to salary (5percent = 5): ");
    scanf("%lf", &annual_rate);
    annual_rate = annual_rate / 100;
    printf("Contribution rate (20percent = 20): ");
    scanf("%lf", &contri_rate);
    contri_rate = contri_rate / 100;
    printf("rate of return (5percent = 5): ");
    scanf("%lf", &return_rate);
    return_rate = return_rate / 100;
    printf("Starting year: ");
    scanf("%d", &start_year);
    printf("ending year: ");
    scanf("%d", &end_year);
    printf("Year  Salary  Starting  Contribution  Earnings  Closing\n");

    year = start_year;
    closing = 0;
    salary = start_salary;

    while (year <= end_year)
    {
        starting = closing;
        contribute = salary * contri_rate;
        earning = starting * return_rate;
        closing = starting + contribute + earning;
        printf("%d %6d %10.2f %10.2f %10.2f %10.2f\n", year, salary, starting, contribute, earning, closing);
        salary = salary + ( salary * annual_rate);
        year++;

    }

    return 0;
}
