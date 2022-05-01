#include<stdio.h>
#include<conio.h>
void check();
void main()
{
check();
}
void check()
{
clrscr();
int n1,n2;
printf("enter the two no");
scanf("%d %d",&n1,&n2);
{
if(n1>n2)
{
printf("n1 is greater");
}
else
{
printf("n2 is greater");
}
}
getch();
}