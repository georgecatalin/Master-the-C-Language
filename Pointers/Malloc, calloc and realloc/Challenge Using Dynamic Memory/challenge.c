#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *thisString=NULL;
    int limit=0;

    printf("Hey, user, please enter the number of characters you wish to enter.\n");
    scanf("%d", &limit);


    thisString=(char *) malloc(limit*sizeof(char));
    if(!thisString)
    {
        puts("Sorry, I could not allocated the memory  this time.");
        exit(-1);
    }


    printf("Hey, user, please enter your string.\n");
    scanf(" ");
    fgets(thisString,limit+1,stdin);

    printf("You entered %s. \n",thisString);

    free(thisString);
    thisString=NULL;

    return 0;
}
