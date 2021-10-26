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


    struct completeName thisName, *pThisName; //Good Practice: One can not declare a pointer to a structure object if that structure object is not itself already defined;

    pThisName=&thisName;


    thisName.firstName=(char *) malloc(sizeof(char)*(strlen(temp)+1));
    pThisName->firstName=(char *) malloc(sizeof(char)* (strlen(temp)+1));

    strcpy(thisName.firstName,temp);
    strcpy(pThisName->firstName, temp);

    printf("Enter your second name, please: \n");
    gets(temp);

    thisName.lastName=(char *) malloc((strlen(temp)+1)*sizeof(char));
    pThisName->lastName=(char *) malloc(sizeof(char)*(strlen(temp)+1));

    strcpy(thisName.lastName,temp);
    strcpy(pThisName->lastName,temp);

    puts("====== Via structure object direct member ========");
    printf("Your name is : %s - %s \n", thisName.firstName, thisName.lastName);

    puts("====== Via pointer to structure object indirect member ========");
    printf("Your name is : %s - %s \n", pThisName->firstName,pThisName->lastName);

    return 0;
}
