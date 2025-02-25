#include <stdio.h>
int is_even(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}
int main()
{
    int n1 = 0;
    scanf("%d", &n1);
    if (is_even(n1))
        printf("Number is even.\n");
    else
        printf("Number is odd.\n");
    return 0;
}