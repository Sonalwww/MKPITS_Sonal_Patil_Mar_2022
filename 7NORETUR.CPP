#include<stdio.h>
#include<conio.h>
void rev();
void main()
{
rev();
}
void rev()
{
int n,num,rev=0;
printf("enter the no");
scanf("%d",&n);
for(;n>0;)
{
num=n%10;
rev=rev*10+num;
n=n/10;
}
printf("reverse=%d",rev);
getch();
}