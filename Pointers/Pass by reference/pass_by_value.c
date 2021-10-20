#include <stdio.h>
#include <stdlib.h>

void swap_values(int x, int y);

int main(void)
{
    //these are local variables to main() function
    int a=43,b=65;

    printf("Before swapping, this is the value of variable 'a' ====> %d.\n",a);
    printf("Before swapping, this is the value of variable 'b' ====> %d.\n",b);

    swap_values(a,b);

    printf("after swapping, this is the value of variable 'a' ====> %d.\n",a);
    printf("after swapping, this is the value of variable 'b' ====> %d.\n",b);

    //Good practice: one can observe, that after running the function to swap the values, the variables remain the same as defined initially. This happens because pass by value, means passing copies of the variables.

    return 0;
}


void swap_values(int x, int y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;

    return;
}
