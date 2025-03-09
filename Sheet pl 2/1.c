#include <stdio.h>
#define SIZE 10
int main()
{
    int Nums[SIZE];
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &Nums[i]);
    int min = Nums[0];
    int max = Nums[0];
    for (int i = 0; i < SIZE; i++)
    {

        if (min > Nums[i])
        {
            min = Nums[i];
        }
        if (max < Nums[i])
        {
            max = Nums[i];
        }
    }

    printf("Max -> %d , Min -> %d", max, min);
}
