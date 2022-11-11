// Title
// Description
// Yanni Vu

#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Person;

int main()
{
    Person prsn = {"Chris", 19};

    printf("%s is %d years old\n", prsn.name, prsn.age);

    Person *p; // declare pointer to point to Person data type

    p = &prsn; // points to prsn


    //display name
    printf("name is: %s\n", (*p).name); // NEED PARENTHESIS AROUND *p !! "." takes precedence over "*" so cannot do "*p.name"
    printf("age is: %d\n", (*p).age);

    printf("name is: %s\n", p->name); // can also point using this syntax
    printf("age is: %d\n", p->age);


    return 0;
}