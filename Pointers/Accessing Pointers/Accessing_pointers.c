#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number=0;
    int *pnumber=NULL;

    // Good practice: 1 always initialize pointers to NULL , this defends from accessing accidently data in used memory.
    // Good practice: 2 always name the pointer variables starting with "p". This way you will easily recognize such variables later in the code

    number=43;

    printf("The value of the variable 'number' is %d.\n", number);
    printf("The memory address where the 'number' variable is stored is %p.\n", &number);

    pnumber=&number; //initialize the pointer variable to the address of the 'number' variable

    printf("The memory address where the pointer variable 'pnumber' is stored is %p.\n",(void *)&pnumber);
    printf("The size occupied in the memory by the pointer variable is %d.\n", sizeof pnumber);
    printf("The value stored in the pointer variable is %p.\n", pnumber);
    printf("The value that is referenced by the pointer variable is %d.\n",*pnumber);

    return 0;
}
