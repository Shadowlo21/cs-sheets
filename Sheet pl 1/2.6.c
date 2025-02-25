#include <stdio.h>

int find_max(int array[3])
{
    int max = array[0];
    for (int i = 0; i < 3; i++)
        if (max < array[i])
            max = array[i];
    return max;
}

int main()
{
    int array[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &array[i]);
    printf("%d", find_max(array));
    return 0;
}