#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,sum,sub;
printf("enter the two no");
scanf("%d %d",&i,&j);
sum=i+j;
printf("print addition %d",sum);
sub=i-j;
printf("print subtraction %d",sub);
{
if(i==5||j==5||sum==5||sub==5)
{
printf("print true");
}
else
{
printf("print false");
}
}
getch();
}