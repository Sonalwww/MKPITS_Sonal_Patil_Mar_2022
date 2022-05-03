#include<stdio.h>
#include<conio.h>
#include<string.h>
int fun(int name)
{
int r;
r=name;
return r;
}
void main()
{
clrscr();
char name[100];
printf("enter your name");
scanf("%s",&name);
printf("your  name is %s",name);
getch();
}

