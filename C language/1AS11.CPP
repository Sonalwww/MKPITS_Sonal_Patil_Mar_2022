#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,size,f=0,a[10];
printf("enter the size of array");
scanf("%d",&size);
printf("enter the element of array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[0]==a[size-1])
{
f=1;
}
}
printf("\n");
if(f==1)
{
printf("true");
}
else
{
printf("false");
}
getch();
}