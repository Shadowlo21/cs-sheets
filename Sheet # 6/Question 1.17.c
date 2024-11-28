#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not for negative numbers.\n");
        return 0;
    }
    printf("Factorial of %d is %d ", num, factorial(num));
    return 0;
}
