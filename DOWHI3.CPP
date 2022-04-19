#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,add=0;
printf("enter n no");
scanf("%d",&n);
printf("the n no are %d",n);
i=1;
do
{
add=add+n;
printf("add n no %d\n",add);
i++;
}
while(i<=n);
getch();
}