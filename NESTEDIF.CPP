#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("enter a no");
scanf("%d",&a);
printf("enter b no");
scanf("%d",&b);
printf("enter c no");
scanf("%d",&c);
if(a>b)
{
if(a>c)
printf("greater no %d",a);
else
printf("greater no %d",b);
}
else
{
if(b>c)
printf("greater no %d",b);
else
printf("greater no %d",c);
}
getch();
}