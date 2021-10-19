#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long number1=0L;
    long number2=0L;
    long *pnumber=NULL;

    pnumber=&number1;  // Sets the address of the variable 'number1' to the pointer 'pnumber'
    *pnumber=2L;  // Set the value referenced by the pointer 'pnumber' which is variable 'number1' to 2L, which process is called dereferencing the pointer

    ++number2; //Sets the value of number2 to 1
    number2+=*pnumber; // Sets number2=number2+(dereference pnumber)=number2+number1=1+2=3

    pnumber=&number2; // Set the pointers variable 'pnumber' to the address of variable 'number2' so to say 'pnumber' is pointing now to 'number2'
    ++*pnumber; // Increments with one the value dereferenced from 'pnumber' so to say increment with 1 the value to which 'pnumber' is pointing to. Thus number2=1+number2=1+3=4

    printf("number1=%ld. \nnumber2=%ld \n pnumber=%p \n*pnumber=%ld \n\*pnumber+number2=%ld \n", number1, number2, pnumber, *pnumber, *pnumber+number2);

    return 0;
}
