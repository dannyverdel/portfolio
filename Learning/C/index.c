#include <stdio.h>

void *f(void)
{
    static int array[5] = {2, 3, 5, 7, 11};

    return(array);
}

int main()
{
    int x;
    int *array;

    array = f();
    for(x = 0; x < 5; x++)
    {
        printf("%2d\n", array[x]);
    }

    return(0);
}
