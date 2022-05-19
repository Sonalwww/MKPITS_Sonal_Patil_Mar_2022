#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("enter the value of n");
scanf("%d",&n);
if(n%4==0)
{
printf("leap year");
}
else
{
printf("not leap year");
}
getch();
}