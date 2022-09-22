#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();
char name1[12]={"SONAL"};
char name2[12]={"PATIL"};

strcpy(name1,name2);
printf("name1=%s\n",name1);
printf("name2=%s\n",name2);

getch();
}