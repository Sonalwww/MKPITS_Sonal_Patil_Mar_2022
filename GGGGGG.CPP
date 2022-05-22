#include<stdio.h>
#include<conio.h>
void main()
{
int k,c,n,F=70;
printf("enter the value of n");
scanf("%d",&n);
for (k = 1; k <= n - 1; k++)
{
for (c = 1; c <= k; c++)
printf(" ");
for (c = 1 ; c <= 2*(n-k)-1; c++)
printf("%c",F+1);
F=F-2;
printf("\n");
}
printf("\n");
getch();
}