#include<stdio.h>
#include<conio.h>
void main()
{

int x, y;
printf("enter the Coordinate x");
scanf("%d", &x);
printf(" enter the coordinate y: ");
scanf("%d", &y);
    
if(x > 0 && y > 0)
{
printf("Quadrant-I(+,+)\n");
}
else if(x> 0 && y < 0)
{
printf("Quadrant-II(+,-)\n");
}
else if(x < 0 && y < 0)
{
printf("Quadrant-III(-,-)\n");
}
else if(x < 0 && y > 0)
{
printf("Quadrant-IV(-,+)\n");
}
getch();
}