#include<stdio.h>
#include<conio.h>
void main()
{
float w1,w2,p1,p2,avg;
printf("weight of item1");
scanf("%f",&w1);
printf("weight of item2");
scanf("%f",&w2);
printf("no of item1");
scanf("%f",&p1);
printf("no of item2");
scanf("%f",&p2);
avg=((w1*p1)+(w2*p2))/(p1+p2);
printf("avg value %f",avg);
getch();
}
