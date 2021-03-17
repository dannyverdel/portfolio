#include <stdio.h>
#include <time.h>

int main()
{
    char name[64];

    printf("Hello there.\nWhat is your name?");
    scanf("%s", name);

    printf("Nice to meet you %s.\nMy name is Jarvis", name);

    return 0;
}
