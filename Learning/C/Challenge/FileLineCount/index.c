#include <stdio.h>
#include <string.h>

int main()
{
    char file_name[100];
    scanf("%s", file_name);

    FILE *fp;
    char ch;
    int linesCount = 0;

    fp = fopen(file_name, "r");

    if(fp == NULL)
    {
        printf("File \'%s\' does not exist!\n", file_name);
        printf("Use a file path and specify the file.\n");
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            linesCount++;
        }
    }

    fclose(fp);

    printf("Total number of lines are: %d\n", linesCount);

    return(0);
}
