#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
printf("enter any no");
scanf("%d %d",&n1,&n2);

if(n1>20&&n1<50&&n2>20&&n2<50)
{
printf("the no is in range %d",n1);
}
else
{
printf("the no is not in range %d",n2);
}
getch();
}