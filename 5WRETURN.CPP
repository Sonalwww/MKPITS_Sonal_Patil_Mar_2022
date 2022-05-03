#include<stdio.h>
#include<conio.h>
int fun(int x,int y)
{
int r;
r=x+y;
return r;
}
void main()
{
clrscr();
int i,res=0;
for(i=0;i<=10;i++)
{
res=res+i;
}
printf("%d",res);
getch();
}