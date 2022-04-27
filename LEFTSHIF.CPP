#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter the integer");
scanf("%d",&a);
printf("integer value=%d",a);
a<<=2;
b=a;
printf("the left shifted data is=%d",b);
getch();
}