#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,i,fact=1;
printf("enter no");
scanf("%d",&num);
i=1;
printf("num=%d");
while (i<=num)
{
fact=fact*i;

i++;
}
printf("fact %d\n");
getch();
}