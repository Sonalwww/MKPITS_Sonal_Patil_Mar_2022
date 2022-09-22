
                      
#include<stdio.h>
#include <conio.h>

void main() 
{
int  x, y;
   printf("enter the first number: ");
    scanf("%d", &x);
    printf("enter the second number: ");
    scanf("%d", &y);

	if((y % x)== 0) 
	{
		printf("\nMultiplied");
	} 
	else 
	{
		printf("\nNot Multiplied");
	}
	
getch();
}







