#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *fileNameOld="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Accessing\ Files/file_to_rename.txt";
    char *fileNameNew="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Accessing\ Files/file_was_renamed.txt";

    int result_of_operation=rename(fileNameOld,fileNameNew);

    if(!result_of_operation)
    {
        printf("The rename operation of the file \t from \"%s\" to \t \"%s\" was successful.",fileNameOld, fileNameNew);
    }
    else
    {
        printf("Ooops, there was a problem when renaming the file \t \"%s\".", fileNameOld);
    }

    return 0;
}
