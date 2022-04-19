#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,fact=1;
printf("enter no");
scanf("%d",&num);

i=num;

printf("num=%d");
while (i>=1)
{
fact=fact*i;

i--;
}
printf("fact %d\n");
getch();
}