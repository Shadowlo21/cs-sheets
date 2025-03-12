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
    emp->id_no = 5;
    emp->salary = 7500;
    emp->birth_date.Day = 3;
    emp->birth_date.Month = 8;
    emp->birth_date.Year = 1980;
    int temp_tasks[] = {1, 3, 4, 9, 12};
    for (int i = 0; i < 5; i++)
    {
        emp->tasks_ids[i] = temp_tasks[i];
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