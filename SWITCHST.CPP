#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter choice of branch");
scanf("%d",&n);
switch(n)
{
case 1:printf("your branch is civil");break;
case 2:printf("your branch is electrical");break;
case 3:printf("your branch is mechanical");break;
case 4:printf("your branch is extc");break;
case 5:printf("your branch is computer");break;
default:printf("enter no betn 1 to 5");
}
getch();
}