#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number1=43;
    float number2=23.44;
    char character='k';

    void *vPointer; // Good practice: Declare a void pointer. Such a void pointer can replace any data type for other types of pointers. Hence, it can be used instead of any other pointer.

    vPointer=&number1;
    printf("The void pointer has this value %p and it references this value %d.\n",vPointer,*(int *)vPointer); //Good practice:It is a must do to cast the void pointer to the appropriate data type, otherwise at run time it can not be processed

    vPointer=&number2;
    printf("The void pointer has this value %p and it references this value %.2f.\n",vPointer, *(float *)vPointer);

    vPointer=&character;
    printf("The void pointer has this value %p and it references this value %c.\n",vPointer, *(char *)vPointer);

    return 0;
}
