#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,b,c,res;
int res2,res3,resf;
printf("enter any three digit number");
scanf("%d",&num);
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
res=a*a*a;
res2=b*b*b;
res=c*c*c;
resf=res+res2+res3;
if(resf==num)
{
printf("number is armstrong");
}
else
{
printf("number is not armstrong");
}
getch();
}