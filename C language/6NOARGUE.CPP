#include<stdio.h>
#include<conio.h>
int fun()
{
int x=444,y=222,z=888;
float p,q;
printf("%d\b\b%d",x,y,z);
p=x+y;
printf("%d\n\n\t%d\n%d",p);
q=z-x;
printf("%f%f\n%f",q);
return p,q;
}

void main()
{
int r;
r=fun();
printf("%d",r);
getch();
}