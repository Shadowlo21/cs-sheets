
#include <stdio.h>
#define SIZE 10
int main()
{
    int nums[SIZE];
    int *ptr = nums;
    printf("Enter %d nums: \n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf(" %d", (ptr + i));
    }
    int increasing = 0, decreasing = 0, constant = 1;
    for (int i = 1; i < SIZE; i++)
    {
        if (*(ptr + i) > *(ptr + (i - 1)))
        {
            increasing = 1;
            constant = 0;
        }
        else if (*(ptr + i) < *(ptr + (i - 1)))
        {
            decreasing = 1;
            constant = 0;
        }
    }
    if (constant)
        printf("The numbers in the array are constant.\n");
    else if (increasing && !decreasing)
        printf("The numbers in the array are increasing.\n");
    else if (decreasing && !increasing)
        printf("The numbers in the array are decreasing.\n");
    else
        printf("The numbers in the array have a mix.\n");
    return 0;
}
