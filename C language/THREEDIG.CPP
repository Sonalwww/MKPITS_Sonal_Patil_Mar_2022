#include<stdio.h>
#include<conio.h>
void main()
{
int num,n1,n2,n3,sum;
printf("enter 3 digit no");
scanf("%d",&num);
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
sum=n1+n2+n3;
printf("sum=%d",sum);
getch();
}