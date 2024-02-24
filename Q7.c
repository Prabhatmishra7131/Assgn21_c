#include<stdio.h>
#include<math.h>
struct time
{
    int hr,min,sec;
};
struct time inputTime();
struct time diffrence(struct time t1, struct time t2);
struct time diffrence(struct time t1, struct time t2)
{
    struct time temp;
    int seconds = abs((t1.hr*3600 + t1.min*60 + t1.sec)-(t2.hr*3600 + t2.min*60 + t2.sec));
    temp.hr = seconds/3600;
    seconds %= 3600;
    temp.min = seconds/60;
    seconds %= 60;
    temp.sec = seconds;
    return temp;
}
struct time inputTime()
{
    struct time t;
    printf("Enter the hrs, mins and secs: ");
    scanf("%d%d%d",&t.hr,&t.min,&t.sec);
    return t;
}
int main()
{
    struct time t1,t2,diff;
    t1 = inputTime();
    t2 = inputTime();
    diff = diffrence(t1,t2);
    printf("The time diffrence b/w given 2 periods is: %dhrs %dmins and %dsecs",diff.hr,diff.min,diff.sec);
    return 0;
}