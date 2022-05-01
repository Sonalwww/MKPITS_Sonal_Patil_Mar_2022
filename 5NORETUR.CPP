#include<stdio.h>
#include<conio.h>
void add();
void main()
{
add();
}
void add()
{
clrscr();
int n,num,b,add=0;
printf("enter any number\n");
scanf("%d",num);
b=num;
while(num>0)
{
n=num%10;
add=add+n;
num=num/10;
}
printf("additon of %d=%d",b,add);
getch();
}
