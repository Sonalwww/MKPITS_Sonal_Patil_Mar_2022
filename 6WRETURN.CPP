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
i=0;
while(i<=10)
{
res=res+i;
i++;
}
printf("%d",res);
getch();
}