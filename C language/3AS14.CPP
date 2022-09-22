#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],size,sum=0;
printf("enter the size of array");
scanf("%d",&size);
printf("enter array element");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]==5)
{
sum=sum+5;
}
}
if(sum==15)
{
printf("sum of all 5 are 15");
}
else
{
printf("sum of all 5 are not 15");
}
getch();
}