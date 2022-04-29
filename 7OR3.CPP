#include<stdio.h>
#include<conio.h>

void main()
{
int n;
printf("enter any positive no");
scanf("%d",&n);
if(n%3==0)
{
printf("multiple of three");
}
if(n%7==0)
{
printf("multiple of seven");
}
getch();
}