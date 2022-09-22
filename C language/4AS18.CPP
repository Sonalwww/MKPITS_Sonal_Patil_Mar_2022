#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z,result;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of y");
scanf("%d",&y);
printf("enter the value of z");
scanf("%d",&z);
result=(x+y)*z;
printf("result=%d\n",result);
result=(x*y)+(y*z);
printf("result=%d\n",result);
getch();
}