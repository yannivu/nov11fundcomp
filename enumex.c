// Title
// Description
// Yanni Vu

#include <stdio.h>

typedef enum {dog = 1, cat, snake, fish, wolverine, horse, hamster} pet_type;

int main()
{
    pet_type ch; // can also declare as int and it will work
    printf("enter 1 for dog, 2 for cat, ...: ");
    scanf("%d", &ch);

    switch(ch) {
        case dog:
        printf("you want a dog\n");
        break;
        case cat:
        printf("you want a cat\n");
        break;
        //... etc
    }


    return 0;
}