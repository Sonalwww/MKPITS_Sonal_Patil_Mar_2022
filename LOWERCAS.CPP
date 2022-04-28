#include<stdio.h>
#include<conio.h>

void main()
{
int i;
char ch1[70];
char ch2[55];
printf("enter any name in lowercase");
scanf("%s",ch1);
for(i=0;ch1[i]!='\0';i++)
{
ch2[i]=ch1[i]-32;
}
printf(" print string in uppercase %s",ch2);
getch();
}