#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],size,f=0;
printf("enter the size of array");
scanf("%d",&a[i]);
printf("enter array element");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]==a[i+1]>a[i] &&a[i+2]>a[i+1])
{
f=1;
}
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