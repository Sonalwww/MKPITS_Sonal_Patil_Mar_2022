#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,f=0,len,a[10];
printf("enter the array size");
scanf("%d",&len);
printf("enter array element");
for(i=0;i<len;i++);
{
scanf("%d",&a[i]);
}
for(i=0;i<len;i++)
{
if(a[i+1]>=a[i])
{
f=f+1;
}
if(f==len-1)
{
printf("value of each element is equal or grt than preious element");
}
else
{
printf("value of each element  is not equal or grt than previous element");
}
getch();
}
}