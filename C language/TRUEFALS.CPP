#include<stdio.h>
#include<conio.h>

void main()
{
int n1,n2,sum;
printf("enter the first value");
scanf("%d",&n1);
printf("enter the second value");
scanf("%d",&n2);
sum=n1+n2;
if(n1==30||n2==30||sum==30)
{
printf("no is true");
}
else
{
printf("no is false");
}
getch();
}