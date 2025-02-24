#include <stdio.h>
int main()
{
    int n1 = 0;
    scanf("%d", &n1);
    if (n1 % 2 == 0)
        printf("Number is even.\n");
    else
        printf("Number is odd.\n");
    return 0;
}