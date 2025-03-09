#include <stdio.h>
const float Glob_PI = 3.14159265359;
float Get_circumference(float rad)
{
    return 2 * rad * Glob_PI;
}
int main()
{
    float Radius = 0;
    printf("Enter The Radius of a circle: ");
    scanf("%f", &Radius);
    printf("Circumference: %.2f\n", Get_circumference(Radius));
    return 0;
}
