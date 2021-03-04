#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    //Get some text from input
    char name[64];
    printf("What is your name: ");
    fgets(name, 64, stdin);

    //Sort the input as a character array from A to Z
    int x;
    char outer, inner, temp;

    puts("Unsorted name: ");
    for(x = 0; x < strlen(name); x++)
    {
        printf("%c", name[x]);
    }
    putchar('\n');

    for(outer = 0; outer < strlen(name); outer++)
    {
        for(inner = outer + 1; inner < strlen(name); inner++)
        {
            if(name[outer] > name[inner])
            {
                temp = name[inner];
                name[inner] = name[outer];
                name[outer] = temp;
            }
        }
    }

    puts("Sorted name: ");
    for(x = 0; x < strlen(name); x++)
    {
        printf("%c", name[x]);
    }
    putchar('\n');

    return(0);
}
