#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int i,j,rev=0,k;
printf("enter any five no");
scanf("%d",&i);
j=i;
while(i>0)
{
k=i%10;
i=i/10;
rev=rev*10+k;
}
if(j==rev)
{
printf("no is palindrone");
}
else
{
printf("no is not palindrone");
}
getch();
}




