#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char fileToReadFrom[]="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Reading\ from\ a\ File/file_to_read.txt";
    int myChar=0;

    FILE *pFile=fopen(fileToReadFrom,"r");

    if(!pFile)
    {
        puts("There was an error when opening the text file with a file pointer.");
        return (-1);
    }

    while((myChar=fgetc(pFile))!=EOF)
    {
        printf("%c", myChar);
    }

    puts("Done reading the file");

    fclose(pFile);
    pFile=NULL;

    return 0;
}
