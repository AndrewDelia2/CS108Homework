/*
 *This program will query the user for a time of day
 *in hours, minutes, and if its AM or PM.
 *It will then store all the the information in a struct
 *and it will then print out the information in order.
 *Written by Andrew Delia
 *December 4, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>

struct Time {int hour, minute; char ampm;} thing;

int main(void)
{
    char junk;
    //struct Time thing = {hour, minute, ampm};
    printf("Put in the hour of day (12 hour format): ");
    scanf("%d", &thing.hour);
    while (thing.hour > 12 || thing.hour <= 0)
    {
        printf("We are using the 12 hour format (1-12)... Please sumbit again: ");
        scanf("%d", &thing.hour);
    }
    printf("Put in the minutes of day: ");
    scanf("%d", &thing.minute);
    while (thing.minute > 59 || thing.minute < 00)
    {
        printf("Minutes are between 00-59... Please sumbit again: ");
        scanf("%d", &thing.minute);
    }
    printf("Enter if its during the morning/day(using AM) or afternoon/night(using PM): ");
    scanf("%c%c", &junk, &thing.ampm);


    printf("The Time you've chosen is %d:%d %cM", thing.hour, thing.minute, thing.ampm);

    return 0;
}
