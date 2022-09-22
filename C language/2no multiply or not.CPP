#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter the first no");
scanf("%d",&x);
printf("enter the second no");
scanf("%d",&y);

if(x>y)
{
int temp;
temp=x;
x=y;
y=temp;
}
if((y%x)==0)
{
printf("multiplication");
}
else
{
printf("not multiplication");
}
getch();
}