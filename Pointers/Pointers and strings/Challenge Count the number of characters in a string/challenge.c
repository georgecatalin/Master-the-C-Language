#include <stdio.h>
#include <stdlib.h>

int calculate_number_of_characters(const char *mystring)
{
    int length=0;
    int length_through_pointer_arithmetic=0;
    char *startPointer=mystring;

    while(*mystring)
    {
        mystring++;
        length_through_pointer_arithmetic=mystring-startPointer;

        length++;
    }


    puts("================ This is in the subfunction ==================");
    puts("This is the first solution with integer variable incrementation");
    printf("The length of the string is : \t %d.\n",length);

    puts("This is the second solution with pointer arithmetic");
    printf("The length of the string is : \t %d.\n",length_through_pointer_arithmetic);

    return length_through_pointer_arithmetic;
}

int main(void)
{
    puts("==================== this is in main =============");
    printf("The number of characters is %d. \n",calculate_number_of_characters("George"));

    return 0;
}
