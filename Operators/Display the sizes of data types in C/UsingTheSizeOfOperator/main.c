#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The size of the 'int' data type in C on this system is : %lu bytes. \n",sizeof(int));
    printf("The size of the 'char' data type in C on this system is : %lu bytes. \n",sizeof(char));
    printf("The size of the 'long' data type in C on this system is : %lu bytes. \n",sizeof(long));
    printf("The size of the 'long long' data type in C on this system is : %ld bytes. \n",sizeof(long long));
    printf("The size of the 'double' data type in C on this system is : %ld bytes. \n",sizeof(double));
    printf("The size of the 'long double' data type in C on this system is : %ld bytes. \n",sizeof(long double));

    return 0;
}
