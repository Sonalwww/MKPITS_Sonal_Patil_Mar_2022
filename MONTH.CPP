#include<stdio.h>
#include<conio.h>
void main()
{
int m;
printf("enter no betn 1 to 12");
scanf("%d",&m);
switch(m)
{
case 1:printf("jan");break;
case 2:printf("feb");break;
case 3:printf("mar");break;
case 4:printf("apr");break;
case 5:printf("may");break;
case 6:printf("jun");break;
case 7:printf("jul");break;
case 8:printf("aug");break;
case 9:printf("sept");break;
case 10:printf("oct");break;
case 11:printf("nov");break;
case 12:printf("dec");break;
default:printf("enter a no betn 1 to 12");
}
getch();
}
