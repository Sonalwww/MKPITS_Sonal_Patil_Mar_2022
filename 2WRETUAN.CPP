#include<stdio.h>
#include<conio.h>
int fun(int x,int y)
{
clrscr();
int r;
r=x-y;
return r;
}
void main()
{
int a=8,b=4,res;
res=fun(a,b);
printf("%d",res);
getch();
}