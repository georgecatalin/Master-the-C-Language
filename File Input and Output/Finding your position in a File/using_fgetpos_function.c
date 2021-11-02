#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    FILE *pFile;
    fpos_t position;


    pFile=fopen("text_file.txt","w+");

    if(!pFile)
    {
        perror("Error when opening file");
        return (-1);
    }

    fseek(pFile,0, SEEK_END); //Jump to the end of the file to test the use of the fgetpos() function

    //the variable 'position'  will hold the current position in the file
    int result=fgetpos(pFile,&position);
    fputs("Hello ,World. \n", pFile);

    /*Good practice: the fgetpos() returns 0 in case of success, and non 0 in case of failure */

    printf("The result after executing the fgetpos() function is \t %i.\n",result);
    printf("****************************\n and the current position in the file is  %li \n",position);

    fclose(pFile);
    pFile=NULL;

    return 0;
}
