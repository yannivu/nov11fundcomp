// Title
// Description
// Yanni Vu

#include <stdio.h>

typedef enum {blue, red, green, white, black, orange} color; // not strings, just identifiers with integer values
// enum makes program more readable

int main()
{
    color val;

    val = green;

    printf("%d\n", val); // prints 2 for the second index in color


    return 0;
}