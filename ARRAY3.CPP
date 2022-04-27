#include<stdio.h>
#include<conio.h>
void main()
{  
int a[5],i;
printf("Enter 5 integer numbers");
for(i = 0; i < 5; i++)
scanf("%d", &a[i]);
printf("Array elements are");
for(i = 4; i >= 0; i--)
printf("%d\n", a[i]);
getch();
}