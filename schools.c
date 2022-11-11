// schools.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char schoolname [30];
    char mascot [20];
    int year;
} School;

void display(School [], int);

int main ()
{
    FILE *fp = fopen ("schoolinfo.csv", "r");
    School theschools[100];
    char line [60];

    int count = 0;
    while (1) {
        fgets (line, 60, fp);
        if (feof (fp)) break;

        strcpy (theschools[count].schoolname, strtok(line, " "));
        strcpy (theschools[count].mascot, strtok (NULL, ",")) ;
        theschools[count].year = atoi (strtok (NULL, "\n"));

        count++;
    }

    display(theschools, count);
    return 0;
}
void display(School arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("the %s of %s were founded in %d\n", arr[i].mascot, arr[i].schoolname, arr[i].year);
    }
}

void display_p(School *p, int size)
{
    for (int i = 0; i < size; i++) {
        printf("the %s of %s were founded in %d\n", p->mascot, p->schoolname, p->year);
        p++;
    }
}