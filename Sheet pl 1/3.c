#include <stdio.h>
int the_diff(int min, int max)
{
    return (max - min);
}
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    /// get smallest

    int min = num[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > num[i])
            min = num[i];
    }

    /// get greatest
    int max = num[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < num[i])
            max = num[i];
    }

    printf("the difference between those smallest = %d , and greatest = %d ,  values is = %d ", min, max, the_diff(min, max));
    return 0;
}