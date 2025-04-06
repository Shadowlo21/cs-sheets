#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 10
int main()
{
    int array[10];
    int* ptr_Place = array;
    for (int i = 0; i < Array_Size; i++)
        scanf("%d",&*(ptr_Place + i));
    int increasing = 0, decreasing = 0, constant = 0;
    for (int i = 1; i < Array_Size; i++)
    {
        if (*(ptr_Place + i) > *(ptr_Place + i - 1))
        {
            increasing = 1;

        }
        else if (*(ptr_Place + i) < *(ptr_Place + i - 1))
        {
            decreasing = 1;

        }
        else
        {
            constant = 1;
        }
    }
    if (increasing && !decreasing)
        printf("The numbers in the array are increasing.\n");
    else if (decreasing && !increasing)
        printf("The numbers in the array are decreasing.\n");
    else if (constant && !increasing && !decreasing)
        printf("The numbers in the array are constant.\n");
    else if (increasing && decreasing)
        printf("The numbers in the array are increasing and then decreasing.\n");
    else
        printf("The numbers in the array have a mixed nums.\n");
    return 0;
}