#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("enter number");
scanf("%d",&i);
if(i%10<=2)
{
printf("it is within two of a multiple of 10");
}
else
{
printf("it is not within two of a multiple of 10");
}
getch();
}