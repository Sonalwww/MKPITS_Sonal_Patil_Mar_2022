#include<stdio.h>
#include<conio.h>
void main()
{

int num,rev=0,pal;
printf("enter any three digit number");
scanf("%d",&num);
pal=num;
do
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
while(num>0);
if(pal==rev)
printf("number is palindrone");
else
printf("number is not palindrone");
getch();
}