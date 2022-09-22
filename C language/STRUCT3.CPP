#include<stdio.h>
#include<conio.h>
struct student
{
int id;
char name[20];
};
void main()
{
struct student s;
printf("enter the student id");
scanf("%d",&s.id);
printf("enter the student name");
scanf("%d",&s.name);
printf("student id=%d",s.id);
printf("student name=%s",s.name);
getch();
}