#include<stdio.h>
#include<conio.h>
void fun1();
void div(int x,int y);
void main()
{
clrscr();
fun1();
}
void fun1()
{
int a,b;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
div(a,b);
}
void div(int x,int y)
{
int r;
r=x/y;
printf("%d",r);
getch();
}