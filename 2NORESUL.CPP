#include<stdio.h>
#include<conio.h>
void sub();
void main()
{
sub();
}
void sub()
{
int n,i,res;
printf("enter the value of n");
scanf("%d",&n);
while(i<=n)
{
res=i-n;
i++;
}
printf("print result=%d\n",res);
getch();
}