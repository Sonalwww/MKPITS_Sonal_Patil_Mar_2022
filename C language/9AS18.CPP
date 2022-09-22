#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int age;
printf("enter the age of person");
scanf("%d",&age);
if(age>=18)
{
printf("eligible for casting his/her vote");
}
else
{
printf("not eligible for casting his/her vote");
}
getch();
}