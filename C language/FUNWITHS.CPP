#include<stdio.h>
#include<conio.h>
void dis();
struct student
{
clrscr();
int id;
char name[30];
};
void main()
{
struct student s;
printf("enter the student id");
scanf("%d",&s.id);
printf("enter the student name");
scanf("%s",&s.name);
}
void dis(struct student s1)
{
printf("student id:%d",s1.id);
printf("student name:%d",s1.name);
getch();
}
