#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myString[100];
    double myDouble;
    int myInt;

    printf("Enter the values right below:\n");
    scanf("%s %lf %d",myString,&myDouble,&myInt);

    printf("You have entered the following:\n %s \t %lf \t %d", myString, myDouble, myInt);


    return 0;
}
