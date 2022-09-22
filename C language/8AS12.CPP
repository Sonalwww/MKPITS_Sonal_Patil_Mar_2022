#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1,n2,add,div,sub,mul;
printf("enter the any two no");
scanf("%d %d",&n1,&n2);
add=n1+n2;
printf("addition=%d",&add);
div=n1/n2;
printf("division=%d",&div);
sub=n1-n2;
printf("subtraction=%d",&sub);
mul=n1*n2;
printf("multiplication=%d",&mul);
getch();
}