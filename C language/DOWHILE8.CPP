#include<stdio.h>
#include<conio.h>
void main()
{
int num,x,n,rev=0;
printf("enter 3 digit no");
scanf("%d",&n);
x=n;
do
{
num=n%10;
rev=rev*10+num;
n=n/10;
}
while(n>0);
printf("the reverse of no %d %d",x,rev);
getch();
}
