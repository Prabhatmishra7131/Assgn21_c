#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    int roll_no;
};
struct student input_details();
void display_details(struct student);
struct student input_details()
{
    struct student s;
    printf("Enter the name: ");
    fgets(s.name, 10, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    printf("Enter the roll number:");
    scanf("%d", &s.roll_no);
    fflush(stdin);
    return s;
}
void display_details(struct student s)
{
    printf("Student name- %s  |  Student roll number-%d\n", s.name, s.roll_no);
}
int main()
{
    struct student stud[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        stud[i] = input_details();
    }
    for (i = 0; i < 10; i++)
    {
        display_details(stud[i]);
    }
    return 0;
}