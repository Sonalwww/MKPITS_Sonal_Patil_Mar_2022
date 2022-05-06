#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("enter the no");
scanf("%d",&i);

if(i%13==0||i%13==1)
{
printf("multiple of 13 or more than 13");
}
else
{
printf(" not multiple of 13");
}
getch();
}