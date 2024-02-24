#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[10];
};
struct student input_details();
void display_details(struct student [],int);
struct student input_details()
{
    struct student s;
    printf("Enter roll no: ");
    scanf("%d",&s.roll_no);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Enter name: ");
    fgets(s.name,10,stdin);
    s.name[strlen(s.name)-1]='\0';
    fflush(stdin);
    return s;
}
void display_details(struct student s[],int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("Student name- %s \t Roll no: %d\n",s[i].name,s[i].roll_no);
    }
    
}
int main()
{
    struct student s[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        s[i] = input_details();
    }
    display_details(s,5);
    return 0;

}
