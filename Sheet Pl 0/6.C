#include <stdio.h>

int main()
{
    int array[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &array[i]);
    int max = array[0];
    for (int i = 0; i < 3; i++)
        if (max < array[i])
            max = array[i];
    printf("%d", max);
    return 0;
}