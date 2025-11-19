#include <stdio.h>
#include <string.h>

int main(void)
{
    double width = 2.4, heigth = 0.76, depth = 3.23;
    char info[100];
    const char format[] = "(%.2f x %.2f x %.2f)";

    sprintf(info,format,width,heigth,depth);
    puts(info);

    return 0;
}