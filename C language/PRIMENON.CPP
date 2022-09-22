#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=1,fact=0;
printf("enter any no n");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
fact++;
i++;
}
if(fact==2)
printf("prime no");
else
printf("nonprime no");


getch();
}

