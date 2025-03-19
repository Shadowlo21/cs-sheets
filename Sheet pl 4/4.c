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
    int sumodd = 0, sumeven = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            sumeven += *(ptr + i);
        }
        if (*(ptr + i) % 2 != 0)
        {
            sumodd += *(ptr + i);
        }
    }
    printf("Odd sum -> %d\nEven sum -> %d", sumodd, sumeven);
    return 0;
}