#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    FILE *pFile=NULL;
    int myCharToWrite;

    pFile=fopen("thisFile.txt","w+");

    if(!pFile)
    {
        perror("Error when opening the file.");
        return (-1);
    }

    /* Good practice: the fputc() uses as the 1st paramater the integer which is the ASCII of the character to be written */
    for( int myCharToWrite=40;myCharToWrite<=110;myCharToWrite++)
    {
        fputc(myCharToWrite,pFile);
    }



    fclose(pFile);
    pFile=NULL;

    return 0;
}
