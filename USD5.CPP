#include<stdio.h>
#include<conio.h>
void div();
void main()
{
clrscr();
div();
}
void div()
{
int n1,n2,res;
printf("enter value of n1");
scanf("%d",&n1);
printf("enter value of n2");
scanf("%d",&n2);
res=n1/n2;
printf("print result=%d",res);
getch();
}