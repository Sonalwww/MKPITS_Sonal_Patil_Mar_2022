#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,c,sum=0,resf;
printf("enter any three digit number");
scanf("%d",&num);
for(resf=num; num>0;)
{
r=num%10;
c=r*r*r;
sum=sum+c;
num=num/10;
}
if(sum==resf)
printf("armstrong no");
else
printf("not armstrong no");
getch();
}