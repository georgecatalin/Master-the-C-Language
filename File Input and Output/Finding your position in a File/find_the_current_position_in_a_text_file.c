#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    FILE *pFile=NULL;
    long length=0;

    pFile=fopen("text_file.txt","r+");

    if(!pFile)
    {
        perror("Error when opening file.");
        return (-1);
    }

    fseek(pFile,0,SEEK_END); //move to the end of the file

    /* Good practice: function() ftell(filePtr) returns the number of bytes in offset from the beginning of the file */
    length=ftell(pFile);

    printf("The size of the file is the position of the current offset in bytes from the beginning of the file and that is \t %li. \n",length);


    fclose(pFile);
    pFile=NULL;

    return 0;
}
