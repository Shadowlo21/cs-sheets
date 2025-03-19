
#include <stdio.h>
#define SIZE 10
int main() {
    int numbers[SIZE];
    int* ptr = numbers;
    int  max, min;
    float sum = 0;
    printf("Enter %d numbers: \n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", (ptr + i));
    }
    max = min = 0;
    for (int i = 0; i < SIZE; i++) {
        if (max < *(ptr + i)) {
            max = *(ptr + i);
        }
        if (min  > *(ptr + i)) {
            min = *(ptr + i);
        }
        sum += *(ptr + i);
    }
    printf("Maximum: %d\nMinimum: %d\nAverage: %.2f\n", max,min, sum / SIZE);
    return 0;
}