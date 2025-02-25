#include <stdio.h>

int sum_of_natural_numbers(int n)
{
    if (n == 1)
        return 1;
    return n + sum_of_natural_numbers(n - 1);
}

int main()
{

    int n = 0;
    scanf("%d", &n);
    printf("Sum is => %d", sum_of_natural_numbers(n));
    return 0;
}