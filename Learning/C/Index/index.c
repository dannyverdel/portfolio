#include <stdio.h>

int main()
{
    const char filename[] = "C:\\Users\\Danny\\portfolio\\Learning\\C\\Challenge\\FileLineCount\\index.c";
    FILE *fh;
    char x, a;

    fh = fopen(filename, "a");
    if(fh == NULL)
    {
        printf("Unable to write to file %s\n",filename);
        return(1);
    }

    fclose(fh);

    return(0);
}
