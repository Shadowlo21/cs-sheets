#include <stdio.h>
#define SIZE 10
int main()
{
    int Nums[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &Nums[i][j]);
        }
    }

    int num = 0;
    printf("Enter a number to search: ");
    scanf("%d", &num);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Nums[i][j] == num)
            {
                printf("Number found at position: (%d, %d)\n", i, j);
                break;
            }
        }
    }
    return 0;
}