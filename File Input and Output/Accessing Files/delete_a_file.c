#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char fileToDelete[]="/home/georgeca/Workspaces/Master-the-C-Language/File\ Input\ and\ Output/Accessing\ Files/file_to_delete.txt";

    int returned_value=remove(fileToDelete);

    if(returned_value==0)
    {
        puts("The file was deleted successfully.");
    }
    else
    {
        puts("There was an error when deleting the file");
    }

    return 0;
}
