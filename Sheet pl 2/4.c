#include <stdio.h>
#define SIZE 10
int main()
{
    int Nums[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &Nums[i]);
    }
    int increasing = 0, decreasing = 0, constant = 0;
    for (int i = 1; i < SIZE; i++)
    {

        if (Nums[i] > Nums[i - 1])
        {
            increasing = 1;
        }
        else if (Nums[i] < Nums[i - 1])
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
}