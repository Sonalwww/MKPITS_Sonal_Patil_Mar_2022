#include<stdio.h>
#include<conio.h>
void main()
{
int x,i;

printf("enter an integer");
scanf("%d",&x);
printf("all the divisor of %d",x);
for(i=1;i<=x;i++)
{
if((x%i)==0)
{
printf("%d",i);
printf("\n");
getch();
}
}
}