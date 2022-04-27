#include<stdio.h>
#include<conio.h>
void main()
{
int array[5],sum=0,i;
printf("enter array element");
for(i=0;i<5;i++)
{
scanf("%d",&array[i]);
}
printf("sum of array element");
for(i=0;i<5;i++)
{
sum=sum+array[i];
}
printf("%d\n",sum);
getch();
}