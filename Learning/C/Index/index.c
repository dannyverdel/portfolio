#include <stdio.h>
#include <string.h>

int main()
{
    //Construct an array of structures
    //The array has four elements, each of which is a structure
    //Display the four structures
    //Swap two elements in the array
    //Display the four structures again

    //Person structure name[32], date (tookoffice)
    //Last structure has three integer members, month, day and year

    /*
    Output sample:
    George Washington, April 30, 1789
    Thomas Jefferson, March 4, 1801
    Abraham Lincoln, March 4, 1861
    Theodore Roosevelt, September 14, 1901
    */

    //Set the data provided into an array of person structure name presidents
    //Display all array elements
    //Swap the second and third elements
    //Display all array elements

    struct tookoffice{
        int month;
        int day;
        int year;
    };

    struct person {
        char name[32];
        struct tookoffice;
    };

    struct person presidents[4] = {
        {"George Washington", 4, 30, 1789},
        {"Thomas Jefferson", 3, 4, 1801},
        {"Abraham Lincoln", 3, 4, 1861},
        {"Theodore Roosevelt", 9, 14, 1901}
    };

    int x;

    puts("Presidents: ");
    for(x=0;x<4;x++)
    {
        printf("President %s took office on %d/%d/%d\n",
                presidents[x].name,
                presidents[x].month,
                presidents[x].day,
                presidents[x].year
               );
    }

    struct person temp;
    temp = presidents[1];
    presidents[1] = presidents[2];
    presidents[2] = temp;

    puts("Swapping...done!");
    puts("Presidents: ");
    for(x=0;x<4;x++)
    {
        printf("President %s took office on %d/%d/%d\n",
                presidents[x].name,
                presidents[x].month,
                presidents[x].day,
                presidents[x].year
               );
    }

    return(0);
}
