#include<stdio.h>
#include<conio.h>
void fun1();
void minus(int x,int y);
void main()
{
fun1();
}
void fun1()
{
int a=3,b=5;
minus(a,b);
}
void minus(int x,int y)
{
int r;
r=x-y;
printf("%d",r);
getch();
}