#include<stdio.h>
#include<conio.h>
int fun(int x,int y)
{
clrscr();
int r;
r=x*y;
return r;
}
void main()
{
int a=4,b=9,res;
res=fun(a,b);
printf("%d",res);
getch();
}