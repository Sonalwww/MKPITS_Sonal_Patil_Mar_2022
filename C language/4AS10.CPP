#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
printf("enter the no");
scanf("%d",&i);
if(i%7==0 || i%3==0)
{
  printf("enter the no is multiple 7 and 3");
}
else
{
printf("enter  not multiple of 7 and 3");
}
getch();
}