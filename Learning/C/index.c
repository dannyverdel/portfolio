#include <stdio.h>
#include <string.h>

int main()
{
    struct weather {
        char day[10];
        float temp;
    };
    struct weather week[7] = {
        {"Sunday", 65.5},
        {"Monday", 34.5},
        {"Tuesday", 86.3},
        {"Wednesday", 71.8},
        {"Thursday", 79.4},
        {"Friday", 75.2},
        {"Saturday", 72.5}
    };

    struct weather temporary;
    int x, outer, inner;

    puts("This week's unorganized forecast:");
    for(x = 0; x < 7; x++)
    {
        printf("%10s %.1f degrees\n", week[x].day, week[x].temp);
    }
    putchar('\n');

    for(outer = 0; outer < 7; outer++)
    {
        for(inner = outer + 1; inner < 7; inner++)
        {
            if(week[outer].temp > week[inner].temp)
            {
                temporary = week[inner];
                week[inner] = week[outer];
                week[outer] = temporary;
            }
        }
    }

    puts("This week's organized forecast:");
    for(x = 0; x < 7; x++)
    {
        printf("%10s %.1f degrees\n", week[x].day, week[x].temp);
    }
    putchar('\n');

    return(0);
}
