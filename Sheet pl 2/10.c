
#include <stdio.h>
int main()
{
    int size;
    printf("Enter The numb of students in class : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter 5 grades for student %d: ", i + 1);
        float sum = 0;
        for (int j = 0; j < 5; j++)
        {
            float t = 0;
            scanf("%f", &t);
            sum += t;
        }
        printf("\nAvr For Student Num -> %d is -> %.2f\n", i + 1, (sum / 5));
    }
    return 0;
}
