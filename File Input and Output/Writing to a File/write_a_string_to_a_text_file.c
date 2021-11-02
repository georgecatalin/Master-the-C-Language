#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    FILE *pFile;
    char *stringToWrite="Abracadabra";

    pFile=fopen("text_file_to_write_string.txt","w+");

    if(!pFile)
    {
        perror("Error when opening the file");
        return (-1);
    }

    fputs(stringToWrite,pFile); //this writes a line in the file pointed to by the file pointer
    fputs("Hi there\0",pFile);// fputs() does not write the '\0' null character to mark the end of the character. One needs to add the null character '\0' specifically or the end of line '\n'
    fputs("nasasaadsdasdsadsad", pFile);

    fclose(pFile);
    pFile=NULL;



    return 0;
}
