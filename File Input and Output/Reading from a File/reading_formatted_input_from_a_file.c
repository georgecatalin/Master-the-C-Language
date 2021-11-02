#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    char fileName[]="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Reading\ from\ a\ File/file_to_read.txt";

    char myString1[10], myString2[10],myString3[10];
    int year;
    FILE *pFile=NULL;


    pFile=fopen(fileName,"w+");

    if(!pFile)
    {
        perror("Error when opening file.");
        return (-1);
    }
    else
    {
        fputs("Learn by taking a quiz! The quiz will give you a signal of how much you know, or do not know, about C#.",pFile);
    }

    rewind(pFile);

    int result_returned=fscanf(pFile,"%s %s %s",myString1, myString2, myString3);

    printf("I read myString1 as %s \n",myString1);
    printf("I read myString2 as %s \n", myString2);
    printf("I read myString3 as %s \n", myString3);

    fclose(pFile);
    pFile=NULL;

    return 0;
}
