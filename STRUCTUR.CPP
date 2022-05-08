#include<stdio.h>
#include<conio.h>
struct student
{
int id;
char name[20];
};
void main()
{
struct student s[3];
int i;
for(i=0;i<3;i++)
{
printf("enter student id=");
scanf("%d",&s[i].id);
printf("enter student name");
scanf("%s",s[i].name);
}
printf("\n");
for(i=0;i<3;i++)
{
printf("student id=%d",s[i].id);
printf("student name=%s",s[i].name);
printf("\n");
getch();
}
}