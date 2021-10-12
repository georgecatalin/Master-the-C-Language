#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int number_of_arguments;
    char * first_argument;
    char * second_argument;

    number_of_arguments=argc;
    printf("The number of arguments is %d.\n", number_of_arguments);

    first_argument=argv[0];
    second_argument=argv[1];

    printf("The first argument is the name of the program : %s .\n", first_argument);
    printf("The second argument is the command line argument : %s .\n", second_argument);

    printf("Hello world!\n");
    return 0;
}
