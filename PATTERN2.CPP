#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,add=0;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
add=add+1;
printf("%d",add);
}
add=0;
printf("\n");
}
getch();
}