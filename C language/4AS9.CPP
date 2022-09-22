#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
printf("enter two number");
scanf("%d %d",&n1,&n2);
n1=n1%10;
n2=n2%10;
if(n1==n2)
{
printf("last digit are same");
}
else
{
printf("last digit are not same");
}
getch();
}