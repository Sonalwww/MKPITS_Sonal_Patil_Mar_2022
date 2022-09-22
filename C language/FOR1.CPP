#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
printf("enter the num");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
num=num+1;
}

if(num%2==0)
{
printf("no is even %d",num);
}
else
{
printf("no is odd %d",num);
getch();
}

}