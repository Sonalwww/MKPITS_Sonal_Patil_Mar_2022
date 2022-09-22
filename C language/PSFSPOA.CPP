#include<stdio.h>
#include<conio.h>
void main()
{
int n[5],i,x;
printf("enter the 1 no of array");
scanf("%d",&x);
for(i=0;i<5;i++)
{
n[i]=x;
x=3*x;
}
for(i=0;i<5;i++)
{
printf("n[%d]=%d",i,n[i]);
}
getch();
}