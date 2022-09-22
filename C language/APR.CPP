#include<stdio.h>
#include<conio.h>
void main()
{
int length,breadth,perimeter,area;
printf("the value of length");
scanf("%d",&length);
printf("the value of breadth");
scanf("%d",&breadth);
area=length*breadth;
printf("print area=%d",area);
perimeter=2*(length+breadth);
printf("print perimeter=%d",perimeter);
getch();

}