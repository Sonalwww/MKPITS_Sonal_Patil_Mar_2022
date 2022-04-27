#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
printf("before swapping of value x and y= %d %d" ,x,y);
x=x+y;
y=x-y;
x=x-y;
printf("after swapping the value of x and y= %d %d",x,y);
getch();
}