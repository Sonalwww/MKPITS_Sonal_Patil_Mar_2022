#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1,n2,s1,s2;
printf("enter the two number");
scanf("%d %d",&n1,&n2);

if(n1>100)
{
s1=n1-100;
}
else
{
s1=100-n1;
}
if(n2>100)
{
s2=n2-100;
}
else
{
s2=100-n2;
}
if(s1>s2)
{
printf("neareast value %d",n2);
}
else
{
printf("nearest value %d",n1);
}
 if(s1==s2)
{
printf("0");
}
getch();
}