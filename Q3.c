#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input_details();
void display_details(struct Employee);
int main()
{
    struct Employee e1, e2;
    e1 = input_details();
    display_details(e1);
    printf("\n");
}
struct Employee input_details()
{
    struct Employee e1;
    printf("Entery the employee id: ");
    scanf("%d", &e1.id);
    fflush(stdin);
    printf("Enter name: ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("Enter the salary: ");
    scanf("%f", &e1.salary);
    return e1;
}
void display_details(struct Employee e1)
{
    printf("\nEmployee Id: %d  | Employee name- %s | Employee salary %f", e1.id, e1.name, e1.salary);
}