#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
fun();
}
void fun()
{
int n1,n2,res;
int a;
printf("press 1 for addition\n");
printf("press 2 for subtraction\n");
printf("press 3 for division\n");
printf("press 4 for multiplication");
printf("enter your choice");
scanf("%d",a);
switch(a)
{
case 1:
printf("enter the value of two no");
scanf("%d %d",&n1,&n2);
res=n1+n2;
printf("additon=%d",res);
break;
case 2:
printf("enter the value of two no");
scanf("%d,%d",&n1,&n2);
res=n1-n2;
printf("subtraction=%d",res);
break;
case 3:
printf("enter the value of two no");
scanf("%d %d",&n1,&n2);
res=n1%n2;
printf("division=%d",res);
break;
case 4:
printf("enter the value of two no");
scanf("%d %d",&n1,&n2);
res=n1*n2;
printf("multiplication=%d",res);
break;
default:
printf("invalid choice");
}
getch();
}


