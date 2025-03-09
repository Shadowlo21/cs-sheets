#include <stdio.h>

#define Rows 4
#define Colms 3
int main()
{

    int array[Rows][Colms];
    int counter = 0;
    int totalElements = Rows * Colms;
    for (int i = 0; i < Rows; i++)
    {
        for (int J = 0; J < Colms; J++)
        {
            scanf("%d", &array[i][J]);
            if (array[i][J] == 0)
            {
                counter++;
            }
        }
    }

    if (counter > (totalElements / 2))
    {
        printf("The matrix is sparse.");
    }
    else
    {
        printf("The matrix is not sparse.");
    }

    return 0;
}