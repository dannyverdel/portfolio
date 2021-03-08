#include <stdio.h>

int main()
{
    struct person {
        char name[64];
        int age;
    };
    struct person danny = {
        "Danny Verdel",
        18
    };

    printf("My name is %s and I am %d years old!\n", danny.name, danny.age);

    return(0);
}
