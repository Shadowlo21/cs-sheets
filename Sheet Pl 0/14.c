#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    //formula = Sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
