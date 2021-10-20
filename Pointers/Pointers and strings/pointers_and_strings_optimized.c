#include <stdio.h>
#include <stdlib.h>


void copy_strings_with_pointer_notation(char *to, char *from)
{
    while( *from ) //the while loop stops when the dereferenced pointer gets equal to '\0'  so 0
    {
        *to++=*from++; //if it were preincrement like ++*to=++*from then, it would increment at first the *to and *from , and after that it will assign the content to *to, hence the 1st character would be skipped
    }

    *to='\0'; //set the last position in the string as the NULL character
}

int main(void)
{
    char from[]="I love Mara";
    char to[30];

    copy_strings_with_pointer_notation(to,from);
    printf("The new string after copying \v to is: \v %s.\n", to);

}
