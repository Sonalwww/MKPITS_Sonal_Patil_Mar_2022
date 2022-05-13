#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,a[6];
printf("enter the array element");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<6;i++)
{
if(a[i]!=17)
{
sum=sum+a[i];
}
}
printf("sum of value in array element except 17=%d",sum);
getch();
}