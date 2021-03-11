#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *fruit[10];
    char buffer[32];
    int x;

    for(x=0;x<10;x++)
    {
        printf("Enter fruit #%d: ",x+1);
        scanf("%s", &buffer);

        fruit[x] = (char *)malloc(strlen(buffer)+1);
        if(fruit[x]==NULL)
        {
            puts("Memory allocation failed");
            exit(1);
        }

        strcpy(fruit[x],buffer);
    }

    for(x=0;x<10;x++)
        printf("%s\n",fruit[x]);

    return(0);
}
