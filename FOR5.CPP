#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,fact=1;
printf("enter the no to find factorial");
scanf("%d",&num);

for(i=1; i<=num; i++)

{
fact=fact*i;
}

printf("factorial of no=%d %d",num,fact);
getch();
}