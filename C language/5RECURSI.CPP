#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
clrscr();
int n,ans;
printf("enter the no");
scanf("%d",&n);
ans=fact(n);
printf("the factorial %d",ans);
getch();
return 0;
}
int fact(int n)
{
int f;
if(n==0)
return 1;
else
f=n*fact(n-1);
return f;
}