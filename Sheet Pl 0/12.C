#include <stdio.h>
int main()
{

    int a1 = 7;
    for (int i = a1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}