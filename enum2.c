// Title
// Description
// Yanni Vu

#include <stdio.h>

typedef enum {blue = 1, red, green, white = 12, black, orange} color; // not strings, just identifiers with integer values
// blue = 1; red = 2; green = 3; white = 12; black = 13; orange = 14

int main()
{
    color val;

    val = green;

    printf("%d\n", val); // prints 3 since blue = 1 in color

    val = orange;
    printf("%d\n", val); // prints 14

    return 0;
    
}