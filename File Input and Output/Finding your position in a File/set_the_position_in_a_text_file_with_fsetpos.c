#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    FILE *pFile=NULL;
    fpos_t myPosition;

    pFile=fopen("text_file.txt","w+");

    if(!pFile)
    {
        perror("Error when opening file");
        return (-1);
    }

    /* Good practice: the address of the cursor is saved in the variable 'myPosition'
    The function returns 0 on success and non-0 on error */
    int result_operation=fgetpos(pFile,&myPosition);

    printf("The result of the fgetpos() action is %d.\n", result_operation);

    fputs("Today is November 2nd, 2021.",pFile);

    result_operation=fsetpos(pFile,&myPosition);//Always use fsetpos() in conjunction with fgetpos() cause it needs the position variable fetched by fgetpos()

    fsetpos(pFile,&myPosition); //the cursor is moving back to the position stored previously with fgetpos() which is the beginning of the file
    /* Good practice: fsetpos() return 0 in case of success and non-0 in case of failure */
    fputs("This overwrites the content from line 25",pFile);

    printf("The result of the fsetpos() action is %d.\n", result_operation);

    return 0;
}
