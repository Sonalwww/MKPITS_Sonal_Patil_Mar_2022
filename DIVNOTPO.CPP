#include<stdio.h>
#include <conio.h>
void main()
{
int x, y;
float div;
printf("enter the x no");
scanf("%d", &x);
printf(" enter the y no");
scanf("%d", &y);
if(y != 0)
{
div = (float)x/(float)y;
printf("%.f", div);
}
else
{
printf("Division not possible.\n");
}
getch();
}
