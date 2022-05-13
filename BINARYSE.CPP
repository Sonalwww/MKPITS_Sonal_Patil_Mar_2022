#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5]={10,20,30,40,50},lwr=0,upr=4,f=0,mid,element;
printf("enter the element to be search");
scanf("%d",&element);
while(lwr<=upr)
{
mid=(lwr+upr)/2;
if(a[mid]==element)
{
f=1;
break;
}
if(a[mid]<element)
lwr=mid+1;
else
upr=mid-1;
}
if(f==1)
printf("element found with loaction %d",mid);
else
printf("not found");
getch();
}