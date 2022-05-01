#include<stdio.h>
#include<conio.h>
void add();
void main()
{
add();
}
void add()
{
int n,i,res;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
res=i+n;
}
printf("print result=%d",res);
getch();
}