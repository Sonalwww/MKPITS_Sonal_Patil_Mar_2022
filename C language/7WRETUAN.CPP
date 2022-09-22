#include<stdio.h>
#include<conio.h>
int fun(int res)
{
int r;
r=res;
return r;
}
void main()
{
clrscr();
int i,res, num;
res=num;
printf("enter the value of n");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
if(num%2==0)
{
printf("even");
}
else
{
printf("odd");
}
}
printf("%d",res);
getch();
}