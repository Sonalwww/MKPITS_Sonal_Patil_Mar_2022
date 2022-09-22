#include<stdio.h>
#include<conio.h>
void main()
{
int n[5],i,x;
printf("enter the 5 value of array");
for(i=0;i<5;i++)
{
scanf("%d",&x);
if(x>0)
{
n[i]=x;
}
else
{
n[i]=100;
}
}
printf("value of array");
for(i=0;i<5;i++)
printf("n[%d]=%d\n",i,n[i]);
getch();
}
