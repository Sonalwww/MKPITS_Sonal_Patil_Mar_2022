#include<stdio.h>
#include<conio.h>
void main()
{
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
if(a[i]==5&&a[i+1]==5)
{
f=1;
}
if(f==1)
{
printf("it contains 5 to 5somewhere");
}
else
{
printf("not contain");
}
getch();
}
}


