#include <stdio.h>
int main()
{

    int a1 = 0, a2 = 0, a3 = 0;
    scanf("%d %d %d", &a1, &a2, &a3);
    if ((a1 == a2) && (a2 == a3))
        printf("its an equilateral triangle.\n");
    else if ((a1 == a2) || (a2 == a3) || (a1 == a3))
        printf("its an isosceles triangle.\n");

    else if ((a1 != a2) && (a2 != a3) && (a1 != a3))
        printf("its an acute triangle.\n");

    return 0;
}