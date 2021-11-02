#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int main(void)
{
    FILE *pFile;

    pFile=fopen("text_file.txt","w+");


    if(!pFile)
    {
        perror("Error when opening file");
        return (-1);
    }


    fputs("This is Jascon",pFile);
    int result=fseek(pFile, 7, SEEK_SET);

    /* Good practice: the parameters of the function fseek() are:
    1st argument is the file pointer
    2nd argument is the offset in bytes from the position represented by the 3rd argument
    3rd argument can be SEEK_SET (beginning of the file), SEEK_CUR (current position in the file, in this case the offset can be positive or negative), SEEK_END (end of the file)
    */

    fputs("Astalavista\n",pFile);

    printf("After execution the fseek() function returned %d. \n", result );

    fclose(pFile);
    pFile=NULL;


    return 0;
}
