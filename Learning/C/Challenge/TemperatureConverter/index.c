#include <stdio.h>

int main()
{
    float lower, higher;
    int step, x;

    printf("Please give in a lower limit, limit >= 0: ");
    scanf("%f", &lower);

    printf("Please give in a higher limit, 10 > limit <= 50000: ", lower);
    scanf("%f", &higher);

    printf("Please give in a step, 0 < step <= 10: ", lower);
    scanf("%d", &step);

    if(lower<0 || higher>50000 || step>10 || lower>=higher)
        printf("Invalid input!");

    putchar('\n');

    printf("Celsius \t Fahrenheit\n");
    printf("------- \t ----------\n");

    for(x=lower;x<=higher;x+=step)
    {
        float result = (float)x * 1.8 + 32;
        printf("%f \t %f\n", (float)x, result);
    }
}
