#include <stdio.h>
#include <string.h>

void incshow(char array[])
{
    int x;

    for(x=0;x<strlen(array);x++)
        printf("%c",array[x]);
}

int main()
{
    char text[] = "Danny";

    incshow(text);

    return(0);
}
