#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],size,f=0;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the element");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]==5||a[i]==7)
{
f=1;
}
if(f==1)
{
printf("it contain 5's or 7's");
}
else
{
printf("not contain");
}
getch();
}
}
