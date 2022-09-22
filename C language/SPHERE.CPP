#include<stdio.h>
#include<conio.h>
void main()
{
int r,volume;
printf("enter radius");
scanf("%d",&r);
volume=(4/3.0)*3.14*r*r*r;
printf("volume of sphere %d",volume);
getch();
}