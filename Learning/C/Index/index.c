#include <stdio.h>
#include <string.h>

int main()
{
    //Fetch input
    /*
    receive name
    write a loop to process single character input, storing it in a buffer called name[]
    The buffer cna hold up to 32 characters
    */
    //Process input and a string literal to generate a phrase
    /*
    copy input into the buffer array
    append text from the last array into the buffer
    last array contains string literal "Passed the challenge"
    */
    //Output the phrase
    /*
    output the buffer array
    no puts or printf
    use putchar() in a loop
    */

    /*
    what is your name? Danny
    Danny passed the test
    */

    char name[32];
    char buffer[64];
    char last[] = "passed the challenge";
    int ch, a;

    printf("What is your name? ");

    while((ch=getchar())!='\n')
    {
        name[a] = ch;
        a++;
        if(a==31)
            break;
    }
    name[a] = '\0';

    strcpy(buffer, name);
    strcat(buffer, " ");
    strcat(buffer, last);

    a = 0;

    while(putchar(buffer[a++]));

    return(0);
}
