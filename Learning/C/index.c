#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void modify(char a[]);

int main()
{
    //get text from input
    char name[64];
    fgets(name, 64, stdin);

    //send text to function
    modify(name);

    //display the modified string
    printf("%s", name);

    return(0);
}

void modify(char *a)
{
    //in the function convert all letters to uppercase and all spaces to underlines
    while(*a)
    {
        *a = toupper(*a);
        if(*a == ' ')
        {
            *a = '_';
        }
        a++;
    }
}
