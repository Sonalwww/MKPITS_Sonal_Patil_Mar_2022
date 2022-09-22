#include<stdio.h>
#include<conio.h>
void main()
{
char name[10],i;
printf("enter the name");
scanf("%s",name);

for(i=0;name[i]!='\0';i++)
{
printf("%c",name[i]);
}
getch();
}