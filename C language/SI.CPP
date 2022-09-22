#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,int_amt;
printf("enter principle,rate of interest, time to find si");
scanf("%d%d%d",&p,&r,&t);

int_amt=(p*r*t)/100;
printf("simple interest=%d",int_amt);
getch();
}