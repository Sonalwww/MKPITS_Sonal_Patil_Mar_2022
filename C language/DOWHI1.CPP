#include<stdio.h>
#include<conio.h>
void main()
{
int i,num=0;
printf("enter the num");
scanf("%d",&num);
i=1;
do
{
num=num+i;
i++;
}
while(i<=num);
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
