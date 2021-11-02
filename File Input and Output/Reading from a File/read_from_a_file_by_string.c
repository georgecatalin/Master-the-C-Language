#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    FILE *pFile=NULL;
    char stringToReadWith[30];

    char fileName[]="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Reading\ from\ a\ File/file_to_read.txt";

    pFile=fopen(fileName,"r");

    if(!pFile)
    {
        perror("Error when creating file pointer");
        return (-1);
    }

    /* Good practice: fgets() function reads until it finds the first '\n'  end of line character or the number of characters that were specified
    fgets() function returns NULL when there is an error or when it gets to EOF character
    */

    if(fgets(stringToReadWith,30,pFile)!=NULL)
    {
           printf("%s",stringToReadWith);
    }
    else
    {
        puts("The fgets() got to EOF character or it encountered some error during its execution.");
    }




    fclose(pFile);
    pFile=NULL;



    return 0;
}
