#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k;
for(i=1;i<=3;i++)
{
for(j=i;j<=3;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
getch();
}