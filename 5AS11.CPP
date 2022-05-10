#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,f=1,a[2];
printf("enter the element of array");
for(i=0;i<2;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<2;i++)
{
if(a[i]==15||a[i]==20)
{
f=0;
}
}
if(f==1)
{
printf("it does not contain 15 and 20");
}
else
{
printf("it contain 15 and 20");
}
getch();
}