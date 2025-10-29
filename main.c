#include <stdio.h>

#define TOTAL 13
#define LEN size_t byts_mar = sizeof(corrds) / sizeof(corrds[0])

int month[] = {31, 28, 31, 31, 31, 31, 31, 31, 31, 31, 30, 31};

main(void)
{
    int makr[TOTAL] = {1, 2, 4, 5, 62, 7, 3, 12, 512, 51, 0, 0, 0};
    int ar[12] = {11, 2, 4, 2, 52, 52, 1};
    short corrds[] = {120, -22, 20};
    size_t size_ar;

    


    makr[1] = 12;
    makr[12] = 1000 - 7;
    makr[5] = 52;
    makr[4] = 42;

    LEN;

    for (size_t i = 0; i < byts_mar; i++)
    {
        printf("[%d] = %d\n", i, corrds[i]);
    }

    printf("%zu", byts_mar);

    return 0;
}
