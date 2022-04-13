#include<stdio.h>
#include<conio.h>
void main()
{
int x, y, i;

printf("Input first number of the pair");
scanf("%d", &x);
printf("Input second number of the pair");
scanf("%d", &y);

if (x>y)
{
printf("The pair is in descending order!");
}
else
{
printf("The pair is in ascending order!");
}
getch();
}
