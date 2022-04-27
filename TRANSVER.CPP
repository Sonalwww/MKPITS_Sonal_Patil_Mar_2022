#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2],m2[2][2],i,j;

printf("enter the value of 2*2 matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&m1[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
m2[i][j]=m1[i][j];
}
printf("traspose of matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",m2[i][j]);
}
printf("\n");
getch();
}
}
}