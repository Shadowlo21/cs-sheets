#include <stdio.h>
#define SIZE 5
int main()
{
    int matrix[SIZE][SIZE] = {
        {0, 1, 1, 1, 1},
        {-1, 0, 1, 1, 1},
        {-1, -1, 0, 1, 1},
        {-1, -1, -1, 0, 1},
        {-1, -1, -1, -1, 0}};
    for (int i = 0; i < SIZE; i++)
    {
        for (int J = 0; J < SIZE; J++)
        {
            printf("%2d", matrix[i][J]);
        }
        printf("\n");
    }

    return 0;
}