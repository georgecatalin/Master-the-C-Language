#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // For opening a file, one uses a file pointer of type FILE. FILE is a struct that describes the properties of the file
    FILE *pFile=NULL;
    char *filename="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Accessing\ Files/myfile.txt";
    //Good practice: Always escape break spaces with backslash  so " "  will be "\ "

    /* Good practice: open the file in write mode "w". This overwrites what is already there in the file, and if there is not a file, it creates one from scratch. The write mode only writes to the file.
    The function returns NULL in case of an error which happens if the name of the file is not correct, or some other access rights, issue occurred.
     */
    pFile=fopen(filename,"w");

    if(!pFile)
    {
        puts("There was an error when opening the file.");
    }
    else
    {
        puts("The file was opened successfully in \"w\" mode.");
    }


    /* Good practice: always be closing the file which was opened.
    The fclose() function returns EOF integer in case of an error which normally is a negative number or -1
    The fclose() function returns 0 if is was executed successfully
    */
    fclose(pFile);
    pFile=NULL;


    /* Open a close a file in append mode "a" */
    pFile=fopen(filename,"a");
    if(!pFile)
    {
        puts("There was an error when opening the file in append mode.");
    }
    else
    {
        puts("The file was opened successfully in \"a\" mode.");
    }

    fclose(pFile);
    pFile=NULL;

    /* Open a file in read mode "r" */
    pFile=fopen(filename,"r");
    if(!pFile)
    {
        puts("There was an error when opening the file in read mode");
    }
    else
    {
        puts("The file was opened successfully in \"r\" mode.");
    }


    fclose(pFile);
    pFile=NULL;

    /* Open a file to write in it in read/write mode
    It creates the file from scratch if it does not exist and it deletes what already exists in it.
    */
    pFile=fopen(filename,"w+");
    if(!pFile)
    {
        puts("There was a problem in opening the file in \"w+\" mode");
    }
    else
    {
        puts("The file was opened successfully in \"w+\" mode");
    }

    fclose(pFile);
    pFile=NULL;

    /* Open a file to append to it, at the end of the file, in read/write mode.
    This operation creates the file from scratch if it does not exist already.
    */

    pFile=fopen(filename,"a+");
    if(!pFile)
    {
        puts("There was an error when opening the file in \"a+\" mode.");
    }
    else
    {
        puts("The file was opened in \"a+\" mode successfully.");
    }

    fclose(pFile);
    pFile=NULL;

    /* Open a file in read mode+ with read/write mode. This operation does not build a file from scratch if this file does not exist already */
    pFile=fopen(filename,"r+");
    if(!pFile)
    {
        puts("There was an error when opening the file in \"r+\" mode.");
    }
    else
    {
        puts("The file was opened successfully in \"r+\" mode.");
    }

    fclose(pFile);
    pFile=NULL;


    return 0;
}
