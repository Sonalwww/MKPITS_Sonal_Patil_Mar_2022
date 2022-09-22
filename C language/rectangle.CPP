#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,perimeter;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
perimeter=2*(a+b);
printf("the perimeter of rectangle %d",perimeter);
getch();
}