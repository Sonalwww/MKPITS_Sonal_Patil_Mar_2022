#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,a=1;
for(i=1;i<=4;i++)
{
for(j=4-1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=a;k++)
{
printf("%d",a);
}
a=a+2;
printf("\n");
}
getch();
}