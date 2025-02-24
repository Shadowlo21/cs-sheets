#include <stdio.h>

int main()
{

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    int p = x * y;
    int s = x + y;
    printf("%d", ((s * s) + (p * (s - x) * (p + y))));
    return 0;
}