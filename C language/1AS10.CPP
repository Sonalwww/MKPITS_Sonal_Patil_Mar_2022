#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,sum;
printf("enter the two no");
scanf("%d %d",&i,&j);
sum=i+j;
printf("print addition %d",sum);
if(sum>=10 && sum<=20)
{
printf("30");
}
else
{
printf("%d",sum);
}
getch();
}