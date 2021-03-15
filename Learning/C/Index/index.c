#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main()
{
    //Prompt the user for a pathname
    char input;
    char path[100];
    int x;

    printf("Specify a filepath: ");

    x=0;
    while(input != '\n')
    {
        input = getchar();
        putchar(input);
        path[x] = input;
        x++;
    }

    /*
    for(x=0;x<strlen(path);x++)
    {
        if(path[x] == '\\')
            path[x] == "\\";
    }
    */

    //Open that directory and read its files
    DIR *dir;
    struct dirent *file;

    dir = opendir(path);
    if(dir==NULL)
    {
        puts("Unable to open this directory");
        return(1);
    }

    while((file=readdir(dir)) != NULL)
        printf("Found the file %s\n",file->d_name);

    closedir(dir);

    //Output the filenames to filelist.txt

    return(0);
}
