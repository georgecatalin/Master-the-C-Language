#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct completeName
{
    char *firstName;
    char *lastName;
    int length;
};

int main(void)
{
    printf("Enter your first name, please: \n");
    char temp[50];
    gets(temp);


    struct completeName *thisName;

    printf("ddadad %d...",sizeof(thisName->firstName));

    thisName->firstName=(char *) malloc(sizeof(char)*(strlen(temp)+1));
    strcpy(thisName->firstName,temp);

    printf("Enter your second name, please: \n");
    gets(temp);

    thisName->lastName=(char *) malloc((strlen(temp)+1)*sizeof(char));
    strcpy(thisName->lastName,temp);

    puts("");
    printf("Your name is : %s - %s", thisName->firstName, thisName->lastName);


    return 0;
}
