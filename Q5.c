#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
struct Employee input_details();
void sort_by_salary(struct Employee [],int);
void display(struct Employee);

int main()
{
    struct Employee E[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        E[i] = input_details();
    }
    sort_by_salary(E,10);
    printf("Employee details in sorted manner are\n");
    for ( i = 0; i < 10; i++)
    {
        display(E[i]);
        printf("\n");
    }
    return 0;

}

struct Employee input_details()
{
    struct Employee e;
    printf("Enter Employee id, name and salary: ");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1] = '\0';
    scanf("%d",&e.salary);
    return e;
}
void sort_by_salary(struct Employee e[], int size)
{
    struct Employee temp;
    temp.salary = 0;
    int i,r;
    for ( r = 1; r <= size-1 ; r++)
    {
        for ( i = 0; i <= size-1-r ; i++)
        {
            if(e[i].salary>e[i+1].salary)
            {
                temp = e[i];
                e[i] = e[i+1];
                e[i+1] = temp;
            }
        }
        
    }
    
}
void display(struct Employee e)
{
    printf("Employee id- %d | Name- %s | Salary- %d",e.id,e.name,e.salary);
}