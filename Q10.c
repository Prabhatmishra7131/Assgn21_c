#include <stdio.h>
#include <string.h>
struct Marks
{
    int roll_no;
    char name[10];
    int chem_marks, maths_marks, phy_marks;
};
struct Marks input_details();
void percentage(struct Marks stud[], int);
struct Marks input_details()
{
    struct Marks stud;
    printf("Enter the name- ");
    fgets(stud.name,sizeof(stud.name), stdin);
    stud.name[strlen(stud.name) - 1] = '\0';
    printf("Roll no- ");
    scanf("%d", &stud.roll_no);
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    printf("Enter marks of physics, maths and chemistry: ");
    scanf("%d%d%d", &stud.chem_marks, &stud.maths_marks, &stud.phy_marks);
    fflush(stdin);
    return stud;
}
void percentage(struct Marks stud[], int size)
{
    int i;
    float perc[size];
    for (i = 0; i < size; i++)
    {
        perc[i] = ((float)(stud[i].chem_marks + stud[i].maths_marks + stud[i].phy_marks) / (3*100)) * 100;
    }
    for (i = 0; i < size; i++)
    {
        printf("The percentages of %d student is %.2f%%\n", i+1, perc[i]);
    }
}
int main()
{
    struct Marks stud[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        stud[i] = input_details();
    }
    percentage(stud, 5);
    return 0;
}