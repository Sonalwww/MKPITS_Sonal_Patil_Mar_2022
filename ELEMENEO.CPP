#include<stdio.h>
#include<conio.h>
void main()
{
int array_n[5],i,temp;

printf("enter the 5 no");
for(i=0; i<5; i++)
scanf("%d",&array_n[i]);
}
if(i<(5/2))
{
temp=array_n[i];
array_n[i]=array_n[5-(i+1)];
array_n[5-(i+1)]=temp;
}
for(i=0;i<5;i++)
{
printf("array_n[%d]=%d",i,array_n[i]);
}
getch();
}