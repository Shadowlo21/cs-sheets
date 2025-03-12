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

float Get_Emp_ByID(struct Employ employees[], int size, int search_id)
{
    for (size_t i = 0; i < size; i++)
    {
        if (employees[i].id_no == search_id)
        {
            return employees[i].salary;
        }
    }
    return -1;
}

int main()
{
    struct Employ employees[3] = {
        {1, {12, 5, 1992}, 5000, {1, 2, 3, 4, 5}},
        {2, {25, 11, 1985}, 7500, {6, 7, 8, 9, 10}},
        {3, {8, 3, 1998}, 6200, {11, 12, 13, 14, 15}}};
    int search_id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &search_id);
    float salary = Get_Emp_ByID(employees, 3, search_id);
    if (salary != -1)
    {
        printf("Employee found! Salary: %.2f\n", salary);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
