#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *mystring_malloc=NULL;
    char *mystring_calloc=NULL;

    /* Initial memory allocation with malloc() function on the heap. Note: malloc() does not initialize the allocated memory */
    mystring_malloc=(char *) malloc(10*sizeof(char)); //mystring_malloc is a pointer variable and it contains the adress of the first byte allocated using malloc()
    if(!mystring_malloc)
    {
        printf("I could not allocate dynamic memory at this step.\n");
        exit(-1);
    }

    strcpy(mystring_malloc,"George");

    printf("The dynamic memory allocated for this variable called 'mystring' with the content %s and at the address of memory %p. \n",mystring_malloc,mystring_malloc);


    /* Initial memory allocation with calloc() function. Note: calloc() function also initializes with 0s the memory allocated. */
    mystring_calloc=(char *) calloc(20,sizeof(char));
    if(!mystring_calloc)
    {
        printf("I could not allocate dynamic memory at this step.\n");
        exit(-1);
    }

    strcpy(mystring_calloc,"Calin");
    printf("The dynamic memory allocated for this variable called 'mystring' with the content %s and at the address of memory %p \n",mystring_calloc,mystring_calloc);

    /* Subsequent memory allocation. Memory needs to enlarge after its initial dynamic allocation, Note: The content which exists in memory remains after the execution of the realloc() function*/
    mystring_malloc=(char *) realloc(mystring_malloc,80*sizeof(char));
    if(!mystring_malloc)
    {
        printf("I could not allocate dynamic memory at this step.\n");
        exit(-1);
    }

    strcat(mystring_malloc," is a fan of communicating with computers.");
    printf("The dynamic memory re-allocated for this variable called 'mystring' with the content %s and at the address of memory %p \n",mystring_malloc,mystring_malloc);

    /* Free the memory allocated */
    free(mystring_malloc);
    mystring_malloc=NULL;

    /* Subsequent memory allocation. Memory needs to enlarge after its initial dynamic allocation, Note: The content which exists in memory remains after the execution of the realloc() function*/
    mystring_calloc=(char *) realloc(mystring_calloc,50*sizeof(char));
    if(!mystring_calloc)
    {
        printf("I could not allocate dynamic memory at this step.\n");
        exit(-1);
    }

    strcat(mystring_calloc," is a family name.");
    printf("The dynamic memory re-allocated for this variable called 'mystring' with the content %s and at the address of memory %p \n",mystring_calloc,mystring_calloc);

    /* Free the memory allocated */
    free(mystring_calloc);
    mystring_calloc=NULL;
}
