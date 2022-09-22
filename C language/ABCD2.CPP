#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char r,c;
for(r='A';r>='A';r--)
{
for(c='A';c<=r;c++)
{
printf("%c",c);
}
printf("n");
}
getch();
}