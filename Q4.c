#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
struct Employee input_details();
struct Employee highest_salary_employee(struct Employee e[], int size);
void display(struct Employee);
int main()
{
    struct Employee e[5], max_salary_employee;
    int i;
    for (i = 0; i < 5; i++)
    {
        e[i] = input_details();
    }
    max_salary_employee = highest_salary_employee(e, 5);
    printf("Maximum salary employee is: ");
    display(max_salary_employee);
    return 0;
}
struct Employee input_details()
{
    struct Employee e;
    printf("Enter employee id- ");
    scanf("%d", &e.id);
    fflush(stdin);
    printf("Enter employee name- ");
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    printf("Enter employee salary- ");
    scanf("%d", &e.salary);
    return e;
}

struct Employee highest_salary_employee(struct Employee e[], int size)
{
    int i;
    struct Employee temp;
    temp.salary = e[0].salary;
    for (i = 0; i < size; i++)
    {
        if (e[i].salary > temp.salary)
            temp.salary = e[i].salary;
    }
    return temp;
}
void display(struct Employee e)
{
    printf("Employee id- %d | Name- %s | Salary- %d", e.id, e.name, e.salary);
}