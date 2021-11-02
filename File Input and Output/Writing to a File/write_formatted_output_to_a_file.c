#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    FILE *pFile=NULL;

    pFile=fopen("text_file_to_write_formatted_output_to.txt","w+");

    if(!pFile)
    {
        perror("Error when opening file");
        return (-1);
    }


    /*Good practice: fprintf() function returns the number of characters written in case of success. Or -1 in case of failure. */
    int result=fprintf(pFile,"%s \n %s %d", "Happy", "Anniversary", 2022);

    printf("The result after executing the fprintf() command is %i.\n",result);

    fclose(pFile);
    pFile=NULL;

    return 0;
}
