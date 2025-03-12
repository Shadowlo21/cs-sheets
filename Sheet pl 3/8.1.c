#include <stdio.h>
#include <stdlib.h>
struct Time
{
    int Day;
    int Month;
    int Year;
};
struct Employ
{
    int id_no;
    struct Time birth_date;
    float salary;
    int tasks_ids[5];
};

int main()
{
    struct Employ *emp = malloc(sizeof(struct Employ));
    printf("Enter ID For The Employ : ");
    scanf("%d", &emp->id_no);
    printf("Enter salary For The Employ : ");
    scanf("%d", &emp->salary);
    printf("Enter birth_date For The Employ Day Month Year : ");
    scanf("%d%d%d", &emp->birth_date.Day, &emp->birth_date.Month, &emp->birth_date.Year);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d Task ID For The Employ: ", i + 1);
        scanf("%d", &emp->tasks_ids[i]);
    }
    printf("Employee ID: %d\n", emp->id_no);
    printf("Salary: %.2f\n", emp->salary);
    printf("Birth Date: %d-%d-%d\n", emp->birth_date.Day, emp->birth_date.Month, emp->birth_date.Year);
    printf("Task IDs: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", emp->tasks_ids[i]);
    }
    return 0;
}
