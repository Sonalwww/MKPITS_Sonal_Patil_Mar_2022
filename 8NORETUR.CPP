#include<stdio.h>
#include<conio.h>
void check();
void main()
{
check();
}
void check()
{
int n1,n2,n3,n4;
printf("enter the four no");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
if(n1>n2&&n1>n3&&n1>n4)
{
printf("first no is greater");
}
if(n2>n1&&n2>n3&&n2>n4)
{
printf("second no is greater");
}
if(n3>n1&&n3>n2&&n3>n4)
{
printf("third no is greater");
}
else
{
printf("fourth no is greater");
}
getch();
}