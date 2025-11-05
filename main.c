#include <stdio.h>
#define TOTAL_MARKS 10

int main(void)
{
    int makrs[TOTAL_MARKS] = {3, 2, 5};

    int index = 2;
    // поставление элемента
    for (int i = TOTAL_MARKS - 1; i > index; --i)
    {
        makrs[i] = makrs[i - 1];
        printf("[%d]= new[%d]\n", i, i - 1);
    }
    makrs[index] = 4;

    for (int i = 0; i < TOTAL_MARKS; i++)
    {
        printf("%d ", makrs[i]);
    }
    // Удаление элемента
    int del_indx = 3;
    for (int i = del_indx; i < TOTAL_MARKS - 1; ++i)
    {
        makrs[i] = makrs[i + 1];
        printf("[%d]= new[%d]\n", i, i + 1);
    }
    for (int i = 0; i < TOTAL_MARKS; i++)
    {
        printf("%d ", makrs[i]);
    }
printf("\n");
    // Сортировка
    char a[] = {1, 2, -22, 51, 12, -12, 1488, -1243};
    int size = sizeof(a) / sizeof(*a);
    int pos;

    for (int i = 0; i < size; i++)
    {
        pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[pos] > a[j])
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            int t = a[i];
            a[i] = a[pos];
            a[pos] = t;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = %d",i,a[i]);
    }
    return 0;
}