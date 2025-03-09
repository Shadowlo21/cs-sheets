#include <stdio.h>
#define SIZE 10
int main()
{
    int Nums[3][4];
    int maxRow = 0;
    int LastmaxRow = 0;
    for (int i = 0; i < 3; i++)
    {
        maxRow = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &Nums[i][j]);
            maxRow += Nums[i][j];
        }
        if (LastmaxRow < maxRow)
        {
            LastmaxRow = maxRow;
        }
    }

    printf("%d", LastmaxRow);
    return 0;
}