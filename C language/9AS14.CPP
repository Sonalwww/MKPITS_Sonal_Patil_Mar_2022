#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],size;
printf("enter the size of array");
scanf("%d",&size);
printf("array element");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]%2==0&&a[i+1]%2==0||a[i]%2!=0&&a[i+1]%2!=0)
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
