#include<stdio.h>
#include<conio.h>
void main()
{
char id;
int hour;
double value,salary;
printf("employees id");
scanf("%c",&id);
printf("working hour");
scanf("%d",&hour);
printf("salary amount/hr");
scanf("%f",&value);
salary=value*hour;
printf("employees id=%c,salary=%f",id,salary);
getch();
}