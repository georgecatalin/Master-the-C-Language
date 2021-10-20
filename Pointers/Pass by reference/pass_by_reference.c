#include <stdio.h>
#include <stdlib.h>

void swap_values(int *x, int *y);

int main(void)
{
    //these are local variables
    int a=10;
    int b=43;

    printf("The value of the variable 'a' before swapping and passing by reference is %d.\n",a);
    printf("The value of the variable 'b' before swapping and passing by reference is %d.\n",b);

    //pass by reference , it means passing the addresses behind the variables, not copies of the variables
    swap_values(&a,&b);

    printf("The value of the variable 'a' after swapping and passing by reference is %d.\n",a);
    printf("The value of the variable 'b' after swapping and passing by reference is %d.\n",b);

    return 0;
}


void swap_values(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    return;
}
