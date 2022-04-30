#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
printf("enter the any no");
scanf("%d %d %d",&n,&i,&j);

if(n>20&&n<50||i>20&&i<50||j>20&&j<50)
{
printf("true");
}
else
{
printf("false");
}
getch();
}