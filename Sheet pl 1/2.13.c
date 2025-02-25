#include <stdio.h>

void PrintRowsPatt(int a1)
{
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = a1; i > 0; i--)
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