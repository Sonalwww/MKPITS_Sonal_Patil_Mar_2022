#include<stdio.h>
#include<conio.h>
void main()
{
int pass, x=10;

while (x!=0)
{
printf("Input the password: ");
scanf("%d",&pass);

if (pass==1234)
{
printf("Correct password");
x=0;
}
else
{
printf("Wrong password, try another");
}
getch();
}
}