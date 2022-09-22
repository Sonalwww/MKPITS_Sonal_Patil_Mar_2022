#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,A=0;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
A=A+1;
printf("%c",(A+64));
}
A=0;
printf("\n");
}
getch();
}