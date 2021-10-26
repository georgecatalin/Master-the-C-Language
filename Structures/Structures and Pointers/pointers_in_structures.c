#include <stdio.h>
#include <stdlib.h>

struct integerPointers
{
    int *p1;
    int *p2;
};


int main(void)
{
    int i1=100;
    int i2;

    struct integerPointers thisStruct;

    thisStruct.p1=&i1;
    thisStruct.p2=&i2;

    *thisStruct.p2=-97;

    printf("The value of i1 is %i and from structure is %i.\n",i1, *(thisStruct.p1));
    printf("The value of i2 is %i and from structure is %i.\n",i2, *(thisStruct.p2));

    return 0;
}
