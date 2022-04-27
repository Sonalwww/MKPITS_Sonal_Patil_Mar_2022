#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,pow=1;
printf("enter x");
scanf("%d",&x);
printf("enter y");
scanf("%d",y);
i=1;
while(i<=y)
{
pow=pow*x;
i++;
}
getch();
}
