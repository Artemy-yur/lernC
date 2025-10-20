#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    short km, time;
    short car_is;
    char carname[] = "BMW M5 F90";
    char carname1[] = "Audi a5";
    char carname2[] = "Mersedes amg 63";
    char maincar[50];

    printf("\n1.%s\n2.%s\n3.%s\nshave the machine from 1 to 3:", carname, carname1, carname2);
    scanf("%hd", &car_is);

    if (car_is == 1)
    {
        strcpy(maincar, carname);
    }
    else if (car_is == 2)
    {
        strcpy(maincar, carname1);
    }
    else if (car_is == 3)
    {
        strcpy(maincar, carname2);
    }
    else
    {
        printf("There is no such thing");
        return 0;
    }

    printf("You car %s: ", maincar);

    return 0;
}