#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE];
    int reversedarray[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
        reversedarray[SIZE - 1 - i] = array[i];
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d", reversedarray[i]);
    return 0;
}
