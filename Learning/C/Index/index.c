#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b)
{
    return(*(int *)a - *(int *)b);
}

int main()
{
    int pick, draw, b, x;
    int pulled[6];
    int balls[51];

    printf("Pick your number between 1 - 51:");
    scanf("%d", &pick);

    if(pick < 1 || pick > 51)
    {
        printf("Invalid choice.");
        return (1);
    }

    for(x=0;x<51;x++)
        balls[x] = 0;

    srand((unsigned)time(NULL));

    draw = 0;
    while(draw < 6)
    {
        b = rand() % 51;
        if(balls[b] == 0)
        {
            balls[b] = 1;
            draw++;
        }
    }

    qsort(pulled, 6, sizeof(int), compare);

    printf("Winning numbers are:");
    for(x=0;x<51;x++)
    {
        if(balls[x] == 1)
        {
            printf("%3d", x+1);
        }
    }

    putchar('\n');

    return 0;
}
