#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],size;
printf("enter the size of array");
scanf("%d",&size);
printf("enter array element");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]==5&&a[i+2]==5)
{
printf("true\n");
}
else
{
printf("false\n");
}
getch();
}
}