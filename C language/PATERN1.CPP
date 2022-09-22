#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int n=5;
for(i=n;i>=1;i--)
{
for(j=n;j>=1;j--)
{
if(i>=j)

printf("* ");

else

printf(" ");
}
printf("\n");
}
getch();
}
