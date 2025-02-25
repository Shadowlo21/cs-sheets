#include <stdio.h>

void PrintGrade(float t)
{
    if (t >= 90)
        printf("Grade -> A\n");
    else if (t >= 70)
        printf("Grade -> B\n");
    else if (t >= 50)
        printf("Grade -> C\n");
    else
        printf("Grade -> F\n");
}

int main()
{
    int s1 = 0, s2 = 0, s3 = 0;
    scanf("%d %d %d", &s1, &s2, &s3);
    float t = (s1 + s2 + s3) / 3;
    PrintGrade(t);
    return 0;
}