#include<stdio.h>
#include<conio.h>
int fun()
{
clrscr();
int i,n,res;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
res=res+i;
}
return res;
}
void main()
{
int r;
r=fun();
printf("%d",r);
getch();
}