#include<stdio.h>
#include<conio.h>
int fun()
{
int a,b,res;
printf("enter the value of a & b");
scanf("%d %d",&a,&b);
res=a-b;
return res;
}
void main()
{
int r;
r=fun();
printf("%d",r);
getch();
}