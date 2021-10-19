#include <stdio.h>
#include <stdlib.h>


int main(void)
{

//    int *pNumber;
//    *pNumber=10;
//
//    int *pNumber1=NULL;
//    *pNumber1=45;

    // Good practice: Never dereference a pointer before defining the address it is pointing to. So to say never dereference a pointer that points to a random memory address(since it was not specified) . DANGER OF WRITING GOOD DATA USED SOMEWHERE ELSE
    // Never dereference a NULL pointer cause you will get an error (core dumped)


    /* Good practice: Always verify against NULL value a pointer before derefenencing that pointer */
    int *pNumber2=NULL;

    if(!pNumber2)
    {
        puts("Can not dereference a NULL pointer");
    }


    return 0;
}
