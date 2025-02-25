#include <stdio.h>

void Compare(int n1, int n2)
{
    if (n1 == n2)
        printf("the two numbers are equal\n");
    else if (n1 > n2)
        printf("a > b\n");
    else if (n1 < n2)
        printf("a < b\n");
}
int main()
{
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    Compare(n1, n2);
    return 0;
}