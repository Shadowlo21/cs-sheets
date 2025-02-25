#include <stdio.h>

int calcSum(int n)
{

    if (n < 0)
        return 0;
    return (n * (n + 1) / 2);
}

int main()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    //! formula = Sum = n * (n + 1) / 2
    printf("Sum of the first %d natural numbers is: %d\n", n, calcSum(n));
    return 0;
}