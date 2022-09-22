#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int n1,n2;
printf("enter the any no");
scanf("%d %d",&n1,&n2);

if(n1>20&&n1<30&&n2>20&&n2<30)
{
if(n1>n2)
{
printf("larger value from two integer %d",n1);
}
else
{
printf("larger value from two integer %d",n2);
}
}
else
{
printf("\n0");
}
getch();
}
