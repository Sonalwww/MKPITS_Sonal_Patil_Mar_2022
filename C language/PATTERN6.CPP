#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a=6;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
a=a-1;
printf("%c",a+64);
}
a=6;
printf("\n");
}
getch();
}