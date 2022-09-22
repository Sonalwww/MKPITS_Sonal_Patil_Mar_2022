#include<stdio.h>
#include<conio.h>
int fun()
{
int i,n,res;
printf("enter the value of n");
scanf("%d",&n);
i=0;
do
{
i++;
res=i*n;
}
while(i<=n);
return res;
}
void main()
{
int r;
r=fun();
printf("%d",r);
getch();
}