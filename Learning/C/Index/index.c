#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[] = "Danny Verdel";
    int a;

    a = 0;

    while(name[a]!='\0')
    {
        putchar(name[a]);
        a++;
    }

    return(0);
}
