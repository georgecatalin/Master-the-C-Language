#include <stdio.h>
#include <stdlib.h>

void copy_string_with_array_notation(char to[],char from[])
{
    int i;
    for(i=0;from[i]!='\0';i++)
    {
        to[i]=from[i];
    }

    to[i]='\0';
}

void copy_string_with_pointer_notation(char *to, char *from)
{
    for(;*from!='\0';from++,to++)
    {
        *to=*from;
    }

    *to='\0';
}

int main(void)
{
    char first[]="George";


    char tfirst[7];
    copy_string_with_array_notation(tfirst,first);
    printf("The to[] string is %s.\n",tfirst);

    char *third="Calin";
    char *fourth;
    copy_string_with_pointer_notation(fourth,third);
    printf("The to[] string is %s.\n",fourth);

    return 0;
}
