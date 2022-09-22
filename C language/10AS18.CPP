#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int m;
printf("enter the value of m");
scanf("%d",&m);
if(m>0)
{
printf("n=1");
}
else
if(m==0)
{
printf("n=0");
}
else
if(m<0)
{
printf("n=-1");
}
else
{
printf("nothing");
}
getch();
}