#include <stdio.h>

int Get_Last_sum(int n)
{
    int sum = 0, digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    printf("Sum ->  %d\n", Get_Last_sum(num));
    return 0;
}