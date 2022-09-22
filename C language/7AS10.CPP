#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;
printf("enter the three");
scanf("%d %d %d",&x,&y,&z);
{
if(x<y&&y<z)
{
printf("condition satisfied");
}
else
{
printf("condition not satisfied");
}
}
getch();
}