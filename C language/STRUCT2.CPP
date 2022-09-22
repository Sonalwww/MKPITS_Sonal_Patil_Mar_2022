#include<stdio.h>
#include<conio.h>
struct student
{
int id;
char name[20];
};
void main()
{
struct student s= {45,"sonal"};
printf("student id=%d",s.id);
printf("student name=%s",s.name);
getch();
}