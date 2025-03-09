#include <stdio.h>
#define SIZE 10
int main()
{
    int Nums[SIZE];
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &Nums[i]);

    int EvenSum = 0, oddsum = 0;
    for (int i = 0; i < SIZE; i++)
    {

        if (Nums[i] % 2 == 0)
            EvenSum += Nums[i];
        else
            oddsum += Nums[i];
    }
    printf("Even Sum -> %d , Odd Sum -> %d", EvenSum, oddsum);
}