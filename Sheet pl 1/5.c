#include <stdio.h>

int is_prime(int n, int i)
{
    if (n <= 1)
        return 0;
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    return is_prime(n, i - 1);
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (is_prime(num, num / 2))
        printf("%d a prime number\n", num);
    else
        printf("%d not prime number\n", num);
    return 0;
}