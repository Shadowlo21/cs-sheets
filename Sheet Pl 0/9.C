#include <stdio.h>
int main()
{

    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    if (n1 == n2)
        printf("the two numbers are equal\n");
    else if (n1 > n2)
        printf("a > b\n");
    else if (n1 < n2)
        printf("a < b\n");

    return 0;
}