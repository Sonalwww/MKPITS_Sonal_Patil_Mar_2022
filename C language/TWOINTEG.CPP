#include<stdio.h>
#include <conio.h>
void main()
{
clrscr();
int x, y, i;
printf("enter the first integer");
scanf("%d", &x);
printf("enter the second integer");
scanf("%d", &y);
i = x+1;
while(i <= y)
{
if((i%7) == 2 || (i%7) == 3)
printf("%d\n", i);
i++;
getch();
}
}