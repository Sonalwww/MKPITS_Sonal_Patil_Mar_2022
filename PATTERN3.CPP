#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,A=0;
for(i=5;i>=1;i--)
{
A=A+1;
for(j=1;j<=i;j++)
{
printf("%c",(A+64));
}
printf("\n");
}
getch();
}