#include<stdio.h>
#include<conio.h>
union student
{
int id;
char name[20];
}s1;

void main()
{
printf("enter the student id");
scanf("%d",&s1.id);
printf("enter the student name");
scanf("%s",&s1.name);
getch();
}
