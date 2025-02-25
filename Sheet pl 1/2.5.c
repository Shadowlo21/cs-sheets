#include <stdio.h>
float Calc_Base(float b, float h) { return ((0.5 * b * h)); }
int main()
{
    float base = 0, height = 0;
    scanf("%f %f", &base, &height);
    printf("%f", Calc_Base(base, height));
    return 0;
}