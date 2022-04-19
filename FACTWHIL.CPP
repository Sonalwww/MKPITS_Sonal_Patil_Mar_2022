#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,i,fact=1;
printf("enter no");
scanf("%d",&num);
i=1;
do
{
fact=fact*i;
i++;
}
while (i<=num);
printf("fact %d\n");
getch();
}
