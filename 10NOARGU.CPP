#include<stdio.h>
#include<conio.h>
int fun()
{
char name[10];
printf("enter any name
");
scanf("%s",name);
printf("%s",name);
return name[10];
}
void main()
{
char r;
r=fun();
printf("%s",r);
getch();
}