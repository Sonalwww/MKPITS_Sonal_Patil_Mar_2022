#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,l1,l2,f=0;
int a1[10],a2[10];
printf("enter the size of array");
scanf("%d",&l1);
printf("enter the element of an array");
for(i=0;i<l1;i++)
{
scanf("%d",&a1[i]);
}
printf("enter the same size of array");
scanf("%d",l2);
printf("enter the element of an array");
for(j=0;j<l2;j++)
{
scanf("%d",&a2[i]);
}
for(i=0;i<l1;i++)
{
if(a1[0]==a2[0]||a1[l1-1]==a2[l2-1])
{
f=1;
}
if(f==1)
{
printf("true");
}
else
{
printf("false");
}
getch();
}
}

