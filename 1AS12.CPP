#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum1=0,sum2=0,a1[3],a2[3];
printf("enter the 1st array");
for(i=0;i<3;i++)
{
scanf("%d",&a1[i]);
}
printf("enter 2nd array");
for(j=0;j<3;j++)
{
scanf("%d",&a2[i]);
}
for(i=0;i<3;i++)
{
sum1=sum1+a1[i];
}
printf("sum of array 1 %d\n",sum1);
for(j=0;j<3;j++)
{
sum2=sum2+a2[i];
}
printf("sum of array 2 %d\n",sum2);
{
if(sum1==sum2)
{
printf("largest sum in array 1");
}
else
{
printf("largest sum in array 2");
}
}
getch();
}