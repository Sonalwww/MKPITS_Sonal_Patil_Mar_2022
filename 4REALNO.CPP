#include<stdio.h>
#include<conio.h>
void main()
{
int a1,a2,a3,a4;
int max,min;
printf("enter the numbers");
scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
if(a1>=a2 && a1>=a3 && a1>=a4)
max=a1;
else if (a2>=a1 && a2>=a3 && a2>=a4)
max=a2;
else if(a3>=a1 && a3>=a2 && a3>=a4)
max=a3;
else
max=a4;
if(a1<=a2 && a1<=a3 && a1<=a4)
min=a1;
else if(a2<=a1 && a2<=a3 && a2<=a4)
min=a2;
else if(a3<=a1 && a3<=a2 && a3<=a4)
min=a3;
else
min=a4;
printf("difference is %d",max-min);
getch();
}


