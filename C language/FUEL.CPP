#include<stdio.h>
#include<conio.h>
void main()
{
int x;
float y;
printf("enter distance in km");
scanf("%d",&x);
printf("enter total fuel spent in liter");
scanf("%f",&y);
printf("avg consumption(km/lt) %f",x/y);
getch();
}