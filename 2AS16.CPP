#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[4];
printf("enter four no");
for(i=0;i<=4;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
if(a[0]==a[4])
{
printf("true");
}
else
{
printf("false");
}
getch();
}