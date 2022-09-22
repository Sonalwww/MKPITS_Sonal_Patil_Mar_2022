#include<stdio.h>
#include<conio.h>
int fun()
{
clrscr();
int i,n,res;
printf("enter the value of n");
scanf("%d",&n);
i=0;
while(i<=n)
{
res=res+i;
i++;
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