#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,cnt=0,a[7];
printf("enter the array element\n");
for(i=0;i<7;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<7;i++)
{
if(a[i]%2==0)
{
cnt=cnt+1;
}
printf("cnt %d\n",cnt);
}
getch();
}