#include<stdio.h>
#include<conio.h>
void main()
{
int x1,x2,x3;
printf("enter the three no");
scanf("%d %d %d",&x1,&x2,&x3);
if(x1==x2+x3||x2==x1+x2||x3==x1+x2)
{
printf("possible to add");
}
else
{
printf("not possible to add");
}
getch();
}