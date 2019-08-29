/*
 *This program will utilize a struct and linked list in order
 *to store employee information that will be taken from the user.
 *It will then show all the employees, and show the highest id number.
 *Written by Andrew Delia
 *December 10, 2018
 *Language: C (gcc target)
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct noder
{
    int id;
    char fname[20], lname[20];
    struct noder *next;

}THING;

void get(char buffer[]);
THING *create(THING *head, char buffer[]);
THING *read(THING *head, char buffer[]);
THING *find(THING *point, int idhi, THING **high);

int main(void)
{
    THING  *head=NULL, *point, **high;
    char buffer[20];

    printf("Enter data to create and fill list with employee information.\n");
    printf("Please use unique 3 digit employee IDs only.\n");
    printf("Type 'done', at any time to end input and show entire list.\n");

    head=create(head, buffer);
    point=head;

    while( strcmp(buffer,"done") != 0 )
        point=create(point, buffer);

    point->next=NULL;
    point=head;
    printf("\n\n");

    int idhi;
    point = head;
    idhi = point->id;
    high = &point;
    //point = head;
    point=point->next;

    while( point != NULL )
        point = find(point, idhi, &(*high));

    point = *high;

    while( point->next != NULL )
        point=read(point, buffer);




    printf("____________________\nHighest employee ID:\n");
    printf("Name:\t%s %s\nID:\t%d\n\n", point->fname, point->lname, point->id);

    return 0;
}

/*
 *Finds the highest employee ID
 *Written by Andrew Delia
 *December 13, 2018
 *Language: C (gcc target)
 */

THING *find(THING *point, int idhi, THING **high)
{
	if(point->id > idhi)
    {
        idhi = point->id;
        *high = point;
    }
	point=point->next;

    return(point);
}

/*
 *This will allow you to read all the employees in the system so far.
 *Written by Andrew Delia
 *December 10, 2018
 *Language: C (gcc target)
 */

THING *read(THING *node, char buffer[])
{

    //THING *prev = node;

    printf("Name:\t%s %s\nID:\t%d\n", node->fname, node->lname,  node->id);
    node = node->next;

    return(node);
}

/*
 *This will allow you to create new employees in the system.
 *Written by Andrew Delia
 *December 10, 2018
 *Language: C (gcc target)
 */

THING *create(THING *node, char buffer[])
{

    printf("\n");

    char BIGB[3][20];
    THING /*point=node*/ *prev=node, *new;

    printf("First name:\t");
    get(buffer);
    if(strcmp(buffer,"done") != 0 )
    {
        strcpy(BIGB[0],buffer);
        printf("Last name:\t");
        get(buffer);
        if(strcmp(buffer,"done") != 0 )
        {
            strcpy(BIGB[1],buffer);
            do
            {
                printf("ID:\t\t");
                get(buffer);
                if(strlen(buffer)!=3)
                    printf("Employee ID must be 3 characters...\n");
                if(strcmp(buffer,"done") != 0 )
                {
                    strcpy(BIGB[2],buffer);
                }
            }while(strlen(buffer)!=3);
        }
    }

    if(!(new=(THING*) malloc(sizeof(THING))))
        printf("bad node...\n");

    strcpy(new->fname,BIGB[0]);
    strcpy(new->lname,BIGB[1]);
    new->id=atoi(BIGB[2]);

    new->next=new;
    if(prev != NULL)
        prev->next=new;

    return(new);
}

/*
 *This is the get function
 *Needs this function in order to run.
 *Written by Andrew Delia
 *December 10, 2018
 *Language: C (gcc target)
 */

void get(char buffer[])
{
    fgets(buffer,20,stdin);
    buffer[strlen(buffer)-1] = 0;
    //printf("\n");
    return;
}

