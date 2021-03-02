#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in_file = fopen("C:\\Users\\Danny\\Documents\\portfolio\\Learning\\C\\Challenge\\challenge.c", "r");

    char ch;

    int linesCount;

    if(in_file == NULL)
    {
        printf("File \"%s\" does not exist.\n", in_file);
        return(-1);
    }

    while((ch=fgetc(in_file)) != EOF)
    {
        if(ch == '\n')
        {
            linesCount++;
        }
    }

    fclose(in_file);

    printf("Total number of lines are: %d\n", linesCount);

    return(0);
}
