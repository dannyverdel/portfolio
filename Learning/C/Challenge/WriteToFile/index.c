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
        path[x] = input;
        x++;
    }

    if(path[strlen(path)-1] == '\n')
        path[strlen(path)-1] = '\0';

    //Open that directory and read its files
    DIR *dir;
    struct dirent *file;

    dir = opendir(path);
    if(dir==NULL)
    {
        puts("Unable to open this directory");
        return(1);
    }

    //Output the filenames to filelist.txt
    FILE *fh;
    int r;

    r = unlink("filelist.txt");
    if(r==0)
        printf("rewriting to file...");
    else
        printf("Unable to rewrite file");

    fh = fopen("filelist.txt", "a");
    if(fh==NULL)
    {
        printf("Unable to write to file");
        return(1);
    }

    while((file=readdir(dir)) != NULL)
        fprintf(fh, "%s\n", file->d_name);

    fclose(fh);
    closedir(dir);

    return(0);
}
