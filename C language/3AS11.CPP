#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5];
printf("enter the array elemet");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=4;i>=0;i--)
{
printf("%d\n",a[i]);
}
getch();
}