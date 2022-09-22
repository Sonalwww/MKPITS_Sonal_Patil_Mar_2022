#include<stdio.h>
#include<conio.h>
union student
{
int id;
char name[20];
}
void main()
{
struct student s={23,"sonal"};
printf("student id=%d",s.id);
printf("student name=%s",s.name);
getch();
}