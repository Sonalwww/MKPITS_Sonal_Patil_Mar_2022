#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],size;
printf("enter the size of array");
scanf("%d",&size);
printf("enter array element");
for(i=0;i<=size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=size;i++)
{
if(a[i]==15 && a[i+1]==15)
{
printf("true");
}
else
{
printf("false");
}
getch();
}
}