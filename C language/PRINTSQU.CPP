#include <stdio.h>
#include<conio.h>
void main()
{
int x, i;
printf("enter an integer: ");
scanf("%d", &x);
printf("List of square of each one of the even values from 1 to a %d :\n",x);
i = 2;
while(i <= x)
{
if((i%2) == 0)
i++
{
printf("%d^2 = %d\n", i, i*i);
}
}
getch();
}