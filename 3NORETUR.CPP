#include<stdio.h>
#include<conio.h>
void check();
void main()
{
check();
}
void check()
{
int n1,n2,res=0,nres=0;
printf("enter the value of n1 & n2");
scanf("%d %d",&n1,&n2);
if(n1>0)
{
res=res+1;
}
else
{
nres=nres+1;
}
if(n2>0)
{
res=res+1;
}
else
{
nres=nres+1;
}
printf("print positive=%d\n",res);
printf("print negative=%d\n",nres);
getch();
}