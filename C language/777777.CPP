#include<stdio.h>
#include<conio.h>
void main()
{
int k,c,n,a=0;
printf("enter the value of n");
scanf("%d",&n);
for (k = 1; k <= n - 1; k++)
{
for (c = 1; c <= k; c++)
printf(" ");
for (c = 1 ; c <= 2*(n-k)-1; c++)
printf("%d",a+7);
a=a-2;
printf("\n");
}
printf("\n");
getch();
}