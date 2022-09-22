#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],size,n3=0,n5=0;
printf("enter the size of array");
scanf("%d",&size);
printf("enter array element");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]==3)
{
n3=n3+1;
}
if(a[i]==5)
{
n5=n5+1;
}
if(n3>n5)
{
printf("no are of 3 are greater than 5");
}
else
{
printf("no are of 3 are not greater than 5");
}
getch();
}
}
