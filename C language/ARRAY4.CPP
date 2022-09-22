#include<stdio.h>
#include<conio.h>
void main()
{
int array[100],i,num;
clrscr();
printf("enter size of array");
scanf("%d",&num);
printf("enter the element of array");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("even no in array");
for(i=0;i<num;i++)
{
if(array[i]%2==0)
{
printf("%d",array[i]);
}
}
printf("odd no in array");
for(i=0;i<num;i++)
{
if(array[i]%2!=0)
{
printf("%d",array[i]);
}
}
getch();
}