#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char r,c;
for(r=4;r>=1;r--)
{
for(c=1;c<=r;c++)
{
printf("%c",'A'+c-1);
}
printf("\n");
}
getch();
}