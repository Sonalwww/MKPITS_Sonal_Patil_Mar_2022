#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
printf("enter two number");
scanf("%d %d",&n1,&n2);
if(n1>100&&n1<200||n2>100&&n2<200)
{
printf("number is in range");

}
else
{

printf("number is not range");

}
getch();
}