#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,len,a[10];
printf("enter the size");
scanf("%d",&len);
printf("enter array element");
for(i=0;i<len;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<len;i++)
{
if(a[i]==5)
{
n=i;
break;
}
printf("\n");
printf("new array\n");
for(i=n+1;i<len;i++)
{
printf("%d\n",a[i]);
}
getch();
}
}