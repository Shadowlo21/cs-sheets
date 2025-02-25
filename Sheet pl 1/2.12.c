#include <stdio.h>

void PrintRowsPatt(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{

    int a1 = 7;
    PrintRowsPatt(a1);
    return 0;
}