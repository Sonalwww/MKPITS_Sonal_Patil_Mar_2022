#include<stdio.h>
#include<conio.h>
struct student
{
int id;
char name[20];
}s1;
void main()
{
printf("enter student id");
scanf("%d",&s1.id);
printf("enter student name");
scanf("%s",s1.name);
printf("student id=%d",s1.id);
printf("student name=",s1.name);
getch();
}
