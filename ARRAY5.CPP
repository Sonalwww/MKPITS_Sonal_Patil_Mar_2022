#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[50],i,n;
printf("enter size of array");
scanf("%d",&n);
printf("enter element of array");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i] % 4 == 0)
{
printf("divided by 4 %d",array[i]);
 }
if(array[i] % 4 != 0)
{
printf("not divisible by 4 %d",array[i]);
}
getch();
}
}