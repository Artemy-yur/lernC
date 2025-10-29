#include <stdio.h>
#include <string.h>

#define CLOSE return 0

int main(void)
{
    int arg = 5;
    int *ptr = NULL;

    if (ptr != NULL)
    {
        *ptr = 1;
    }
    CLOSE;
}