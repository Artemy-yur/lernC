#include <stdio.h>
#include <string.h>
#define CLOSE return 0
int main(void)
{
    int massa_caida[] = {123, 212, 521, 522, 5112};
    int a, sum;

    size_t n = sizeof(massa_caida)/sizeof(massa_caida[0]);

    for(int i=0;i<n;i++){
        printf("%d \n",massa_caida[i]);
    }
    

    printf("%d",n);
    CLOSE;
}