#include <stdio.h>

int main()
{
    int a;

    printf("Give me an integer greater then 0: ");
    scanf("%d", &a);

    (a % 2) == 0 ? printf("The number %d is even", a) : printf("The number %d is odd", a);

    return(0);
}
