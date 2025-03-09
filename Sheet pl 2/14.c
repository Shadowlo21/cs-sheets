#include <stdio.h>
#define size 5
void ReturnValues(int array[size], int result[3])
{
    int max = array[0], min = array[0], sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
        if (min > array[i])
            min = array[i];
        sum += array[i];
    }
    result[0] = max;
    result[1] = min;
    result[2] = sum / size;
}
int main()
{

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int res[3];
    ReturnValues(array, res);
    printf("The maximum value in the array -> %d \nThe minimum value in the array -> %d \nThe average value in the array -> %d \n", res[0], res[1], res[2]);
    return 0;
}
