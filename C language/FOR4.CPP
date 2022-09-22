#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,m=0;
printf("enter value of num");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
 m=m+1;
}
{
if(m==2)
{
printf("no is prime %d",num);
}
else
{
printf("no is not prime %d",num);
}
getch();
}
}