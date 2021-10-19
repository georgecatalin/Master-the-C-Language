#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int myInteger=0;
    int *pMyInteger=&myInteger;

    printf("Enter your age , please: \n");
    scanf("%d", pMyInteger); // Good practice: there is no need to use the address of & operator, since there 'pMyInteger' pointer already exists and it stores the address of the variable

    printf("You entered this age : %d", myInteger);

    return 0;
}
