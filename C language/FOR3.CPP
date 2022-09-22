#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,add=0;
printf("enter n no");
scanf("%d",&n);
printf("the n no are %d",n);
for(i=1;i<=n;i++)
{
add=add+n;
printf("add n no %d\n",add);
getch();
}
}