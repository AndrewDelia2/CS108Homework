/*
 *This program will ask the user for a noun and it will then
 *see which rule it goes to (s, es, or ies). Program will keep going
 *until the uses types in "done".
 *Written by Andrew Delia
 *November 16, 2018
 *Language: C (gcc target)
 */

#include <stdio.h>
#include <string.h>

#define max 20

void pluralize (char word[]);

int main(void)
{
    char noun[max];
    printf("Enter a noun in singular form (the word done ends program): ");
    scanf("%s", noun);
    while (strcmp(noun, "done") != 0)
    {
        pluralize (noun);
        printf("The plural form is %s\n", noun);
        printf("Enter a noun in singular form (the word done ends program): ");
        scanf("%s", noun);
    }

    printf("Thank you for using the program.");
    return 0;
}

/*
 *This function will see which rule the noun uses and implements it
 *back into the main function so it can print out the plural form of the
 *word.
 *Written by Andrew Delia
 *November 16, 2018
 *Language: C (gcc target)
 */

void pluralize (char word[])
{
    int length;
    //char noun;
    length=1;
    length = strlen(word);

    if (word[length - 1] == 'y')
    {   word[length - 1] = 'i';
        word[length] = 'e';
        word[length + 1] = 's';
        word[length + 2] = '\0';
    }


    else if (word[length - 1] == 's' ||
             (word[length - 2] == 'c' && word[length - 1] == 'h') ||
             (word[length - 2] == 's' && word[length - 1] == 'h'))
    {
        strcat(word, "es");
    }

    else
    {
        strcat(word, "s");

        //printf("New word is: ", &noun);
    }
    return 0;
}
