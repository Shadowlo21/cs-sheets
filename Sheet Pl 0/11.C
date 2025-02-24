#include <stdio.h>

int main()
{
    int num1, num2, choice;
    float result;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two nums: ");
    scanf("%d %d", &num1, &num2);
    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result: %d + %d = %.2f\n", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("Result: %d - %d = %.2f\n", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("Result: %d * %d = %.2f\n", num1, num2, result);
        break;
    case 4:
        if (num2 == 0)
            printf("Error: Division by zero is not allowed.\n");
        else
        {
            result = (float)num1 / num2;
            printf("Result: %d / %d = %.2f\n", num1, num2, result);
        }
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}