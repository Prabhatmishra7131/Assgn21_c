#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input_details();
int main()
{
   struct Employee e1,e2;
   e1 = input_details();
}
struct Employee input_details()
{
    struct Employee e1;
    printf("Entery the employee id: ");
    scanf("%d",&e1.id);
    printf("Enter name: ");
    fflush;
    fgets(e1.name,20,stdin);
    printf("\nEnter the salary: ");
    scanf("%f",&e1.salary);
    return e1;
}