#include<stdio.h>
#include<conio.h>
void fun1();
void mul(int x,int y);
void main()
{
clrscr();
fun1();
}
void fun1()
{
int a=6,b=2;
mul(a,b);
}
void mul(int x,int y)
{
int r;
r=x*y;
printf("%d",r);
getch();
}