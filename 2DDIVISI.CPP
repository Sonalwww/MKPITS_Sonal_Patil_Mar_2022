#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2],i,j,sub=0;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
printf("enter value for array");
scanf("%d",&m1[i][j]);
}
printf("array element are");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d",m1[i][j]);
}
for(i=0;i<2;i++)
for(j=0;j<2;j++)
sub=sub-m1[i][j];
printf("sub of array is=%d",sub);
getch();
}