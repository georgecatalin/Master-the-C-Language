#include <stdio.h>
#include <stdlib.h>


void square_number(int *x);

int main(void)
{
    int var=100;

    printf("the variable before running the function that passes by reference is %d.\n",var);

    square_number(&var);

    printf("the variable after running the function that passes by reference is %d.\n",var);

    return 0;
}

void square_number(int *x)
{
    *x*=*x;

    return;
}
