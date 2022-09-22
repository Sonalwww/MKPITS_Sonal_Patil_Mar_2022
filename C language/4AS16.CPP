#include<stdio.h>
#include<conio.h>
void main()
{
int i,c,size,a[10],b[10];
printf("enter the array size");
scanf("%d",&size);
c=size-1;
printf("enter the array element");
for(i=0;i<=c;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<=c;i++)
{
if(i==size-1)
{
b[i]=a[0];
}
else
{
b[i]=a[i+1];
}
}
printf("\n");
for(i=0;i<=c;i++)
{
printf("%d\n",b[i]);
}
getch();
}