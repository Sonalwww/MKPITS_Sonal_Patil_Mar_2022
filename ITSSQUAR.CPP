#include<stdio.h>
#include <conio.h>
void main()
{
int a,i;
printf("enter number of lines");
scanf("%d", &a);
i = 1;
while(i<= a)
{
printf("%d %d %d\n", i, i*i, i*i*i);
i++;
}
getch();
}